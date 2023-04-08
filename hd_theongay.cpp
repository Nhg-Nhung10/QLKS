#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include"hoadon.cpp"
using namespace std;
class hd_theongay:public hoadon
{
	private:
	    int songaythue;
	public:
		hd_theongay(){
			this->songaythue=0;
		};
		~hd_theongay(){
			this->songaythue=0;
		}
		hd_theongay(int SoNT){
			this->songaythue=SoNT;
		}
		int getSoNT(){
			return this->songaythue;
		}
		//Ham nhap 
		 void nhap()
		{
			hoadon::nhap();
			cout <<"Nhap so ngay thue phong : "; cin>>this->songaythue;	
		}
		float thanhtien(){
		return dongia*this->songaythue;
		 };
		 //Ham xuat 
		void xuat()
		{
			hoadon::xuat();	
			cout<<"So ngay thue: "<<this->songaythue<<endl;
			cout<<"Thanh tien:"<<this->dongia*this->songaythue<<endl;
		}
		 
		//Cai dat phuong thuc doc file
		 void docfile(ifstream& filein)
		{
			filein>>this->songaythue;
			hoadon::docfile(filein);
		}
		//Cai dat phuong thuc ghi file 
		 void ghifile(ofstream& fileout){
			fileout<<endl;
			fileout<<this->songaythue;
			hoadon::ghifile(fileout);
		}
};
