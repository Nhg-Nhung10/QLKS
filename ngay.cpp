#include <iostream>
using namespace std;

class ngay
{
	private: 
		int d, m, y;
	public:
		//Ham thiet lap
		ngay()
		{
			this->d = this->m = this->y = 0;
		}
		
		ngay(int D, int M, int Y)
		{
			this->d = D;
			this->m = M;
			this->y = Y;
		}
		
		//Phuong thuc dat gia tri ngay vao
		void setD(int D)
		{
			this->d = D;
		}
		//Phuong thuc dat gia tri thang vao
		void setM(int M)
		{
			this->m = M;
		}
		//Phuong thuc dat gia tri nam vao
		void setY(int Y)
		{
			this->y = Y;
		}
		//Phuong thuc lay ngay
		int getD(){
			return this->d;
		}
		//Phuong thuc lay thang
		int getM(){
			return this->m;
		}
		//Phuong thuc lay nam
		int getY(){
			return this->y;
		}
		//Phuong thuc lay ngay thang nam
		int getDate(){
			return d, m, y;
		}
		
		//Nhap thong tin ngay thang nam
		void nhap()
		{
			cout <<"Nhap ngay: "; cin>> this->d;
			cout <<"Nhap thang: "; cin>> this->m;
			cout <<"Nhap nam: "; cin>> this->y;
		}
		//Xuat thong tin ngay thang nam
		void xuat()
		{
			cout <<"dd//mm//yyyy: "<< this->d <<"/"<< this->m <<"/"<< this->y <<endl;
		}
		
		//Ham huy bo
		~ngay()
		{
			this->d = this->m = this->y = 0;
		}
};
