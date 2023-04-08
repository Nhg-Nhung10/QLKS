#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "hoadon.cpp"
using namespace std;
class hd_theogio:public hoadon
{
	private:
		int sogiothue;
	public:
		hd_theogio()
		{
			this->sogiothue = 0;
		}
		~hd_theogio()
		{
			this->sogiothue = 0;
		}
		hd_theogio(int SoGT)
		{
			this->sogiothue = SoGT;
		}
	
		int getSoGT()
		{
			return this->sogiothue;
		}
		
		void nhap()
		{
			hoadon::nhap();
			cout<<" Nhap so gio thue: "; cin>>this->sogiothue;
		}
		
		float thanhtien()
		{
			return dongia*this->sogiothue;
		};
		
		void xuat()
		{
			hoadon::xuat();
			cout<<" So gio thue: "<<this->sogiothue<<endl;
			cout<<" Thanh tien: "<<dongia*this->sogiothue<<endl;
		}
		
		//Cai dat phuong thuc doc file
		 void docfile(ifstream& filein)
		{
			filein>>this->sogiothue;
			hd_theogio::docfile(filein);
		}
		
		//Cai dat phuong thuc ghi file 
		 void ghifile(ofstream& fileout){
			fileout<<endl;
			fileout<<this->sogiothue;
			hd_theogio::ghifile(fileout);
		}
		
};
