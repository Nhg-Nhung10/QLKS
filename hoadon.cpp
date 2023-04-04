#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "ngay.cpp"
#include "khach_hang.cpp"
using namespace std;

class hoadon
{
	protected:
		string maHD;
		ngay ngayHD;
		khach_hang kh;
		string maPhong;
		float dongia;
	public:
		//Ham thiet lap
		hoadon()
		{
			this->maHD = "";
			this->maPhong = "";
			this->dongia = 0.0;
		}
		hoadon(string MaHD, ngay NgayHD, khach_hang KH, string MaPhong, float DonGia)
		{
			this->maHD = MaHD;
			this->ngayHD = NgayHD;
			this->kh = KH;
			this->maPhong = MaPhong;
			this->dongia = DonGia;
		}
		//Phuong thuc lay ma hoa don
		string getMaHD()
		{
			return this->maHD;
		}
		//Phuong thuc lay ngay hoa don
		int getD_NgayHD()
		{
			return this->ngayHD.getD();
		}
		int getM_NgayHD()
		{
			return this->ngayHD.getM();
		}
		int getY_NgayHD()
		{
			return this->ngayHD.getY();
		}
		//Phuong thuc lay thong tin khach hang
		string getTenKH_KH()
		{
			return this->kh.getTenKH();
		}
		string getSDT_KH()
		{
			return this->kh.getSDT();
		}
		string getCCCD_KH()
		{
			return this->kh.getCCCD();
		}
		//Phuong thuc lay ma phong
		string getMaPhong()
		{
			return this->maPhong;
		}
		//Phuong thuc lay don gia
		float getDonGia()
		{
			return this->dongia;
		}
		//Ham ao nhap thong tin hoa don
		virtual void nhap()
		{
			cin.ignore();
			cout <<"Nhap ma hoa don: "; getline(cin,this->maHD);
			cout <<"Nhap ngay hoa don: "; ngayHD.nhap();
			cout <<"Nhap thong tin khach hang: "; kh.nhap();
			cin.ignore();
			cout <<"Nhap ma phong: "; getline(cin,this->maPhong);
			cout <<"Nhap don gia: "; cin>> this->dongia;
		}
		//Ham ao xuat thong tin hoa don
		virtual void xuat()
		{
			cout <<"Ma hoa don: "<< this->maHD <<endl;
			cout <<"Ngay hoa don: "; ngayHD.xuat();
			cout <<"Thong tin khach hang: "; kh.xuat();
			cout <<"Ma phong: "<< this->maPhong <<endl;
			cout <<"Don gia: "<< this->dongia <<endl;
		}
		//Ham ao thuan tuy thanh tien
		virtual float thanhtien() = 0;
		//Cai dat phuong thuc doc file lop cha
		virtual void docfile(ifstream& filein)
		{
			getline(filein, maHD);
			//filein.ignore(1);
			int d, m, y;
			filein>>d;
			ngayHD.setD(d);
			filein.ignore(1);
			filein>>m;
			ngayHD.setM(m);
			filein.ignore(1);
			filein>>y;
			ngayHD.setY(y);
			filein.ignore(1);
			string tenKH, sdt, cccd;
			filein>>tenKH;
			kh.setTenKH(tenKH);
			filein.ignore(1);
			filein>>sdt;
			kh.setSDT(sdt);
			filein.ignore(1);
			filein>>cccd;
			kh.setCCCD(cccd);
			filein.ignore(1);
			getline(filein, maPhong);
			//filein.ignore(1);
			filein>>dongia;
			filein.ignore(1);
		}
		//Cai dat phuong thuc ghi file lop cha
		virtual void ghifile(ofstream& fileout){
			fileout<<endl;
			fileout<< this->maHD;
			fileout<< this->ngayHD.getD()<<"/";
			fileout<< this->ngayHD.getM()<<"/";
			fileout<< this->ngayHD.getY();
			fileout<< this->kh.getTenKH();
			fileout<< this->kh.getSDT();
			fileout<< this->kh.getCCCD();
			fileout<< this->maPhong;
			fileout<< this->dongia;
		}
		//Ham huy bo
		~hoadon()
		{
			this->maHD = "";
			this->maPhong = "";
			this->dongia = 0.0;
		}
};
