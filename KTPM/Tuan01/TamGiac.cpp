#include<iostream>
using namespace std;
struct TamGiac{
	int a,b,c;
};
void nhap(TamGiac &tamgiac){
	cout<<endl<<"- NHAP"<<endl<<endl;
	
	cout<<"Nhap chieu dai canh a: ";
	cin>>tamgiac.a;
	
	cout<<"Nhap chieu dai canh b: ";
	cin>>tamgiac.b;
	
	cout<<"Nhap chieu dai canh b: ";
	cin>>tamgiac.c;
}
void xuat(TamGiac tamgiac){
	cout<<endl<<"- XUAT"<<endl<<endl;
	
	cout<<"Chieu dai canh a: "<<tamgiac.a<<endl;
	cout<<"Chieu dai canh b: "<<tamgiac.b<<endl;
	cout<<"Chieu dai canh c: "<<tamgiac.c<<endl;
}
void kiemtra(TamGiac tamgiac){
	cout<<endl<<"- KIEM TRA"<<endl<<endl;
	if(tamgiac.a == tamgiac.b && tamgiac.a == tamgiac.c && tamgiac.b == tamgiac.c){
		cout<<"TAM GIAC DEU!"<<endl;
	}
	else if(tamgiac.a == tamgiac.b || tamgiac.a == tamgiac.c || tamgiac.b == tamgiac.c)
	{
		cout<<"TAM GIAC CAN!"<<endl<<endl;
	}
	else if((tamgiac.a * tamgiac.a + tamgiac.b * tamgiac.b) == tamgiac.c * tamgiac.c || (tamgiac.b * tamgiac.b + tamgiac.c * tamgiac.c) == tamgiac.a * tamgiac.a  || (tamgiac.a * tamgiac.a + tamgiac.c * tamgiac.c) == tamgiac.b * tamgiac.b)
	{
		cout<<"TAM GIAC VUONG!"<<endl<<endl;
	}
	else cout<<"TAM GIAC THUONG!"<<endl<<endl;
}
int main()
{
	TamGiac tamgiac;
	cout<<"======================== TAM GIAC ========================"<<endl;
	nhap(tamgiac);
	xuat(tamgiac);
	kiemtra(tamgiac);
	
	// Cac bo test
	/*
	
	
	*/
	
	return 0;
}
