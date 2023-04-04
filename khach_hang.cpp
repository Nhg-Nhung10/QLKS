#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class khach_hang
{
	private:
		string tenKH, sdt, cccd;
	public:
		//Ham thiet lap
		khach_hang()
		{
			this->tenKH = sdt = cccd = "";
		}
		khach_hang(string TenKH, string SDT, string CCCD)
		{
			this->tenKH = TenKH;
			this->sdt = SDT;
			this->cccd = CCCD;
		}
		//Phuong thuc dat gia tri thong tin khach hang vao
		void setTenKH(string TenKH)
		{
			this->tenKH = TenKH;
		}
		void setSDT(string SDT)
		{
			this->sdt = SDT;
		}
		void setCCCD(string CCCD)
		{
			this->cccd = CCCD;
		}
		//Phuong thuc lay thong tin khach hang
		string getTenKH()
		{
			return this->tenKH;
		}
		string getSDT()
		{
			return this->sdt;
		}
		string getCCCD()
		{
			return this->cccd;
		}
		string getKhach_Hang(){
			return tenKH, sdt, cccd;
		}
		//Ham nhap thong tin khach hang
		void nhap()
		{
			cin.ignore();
			cout <<"Nhap ten khach hang: "; getline(cin, this->tenKH);
			cout <<"Nhap so dien thoai: "; getline(cin, this->sdt);
			cout <<"Nhap so can cuoc cong dan: "; getline(cin, this->cccd);
		}
		//Ham xuat thong tin khach hang
		void xuat()
		{
			cout <<"Ten khach hang: "<< this->tenKH<< endl;
			cout <<"So dien thoai: "<< this->sdt<< endl;
			cout <<"So can cuoc cong dan: "<< this->cccd<< endl;
		}
		//Cai dat phuong thuc doc file khach hang
		void docfile(ifstream& filein)
		{
			getline(filein, tenKH);
			//filein.ignore(1);
			getline(filein, sdt);
			//filein.ignore(1);
			getline(filein, cccd);
			//filein.ignore(1);
		}
		//Cai dat phuong thuc ghi file khach hang
		void ghifile(ofstream& fileout){
			fileout<<endl;
			fileout<< this->tenKH;
			fileout<< this->sdt;
			fileout<< this->cccd;
		}
		//Ham huy bo
		~khach_hang()
		{
			this->tenKH = "";
			this->sdt = "";
			this->cccd = "";
		}
};
