#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	double mp, d, n;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese el monto a pagar: "<<endl;
	cin>>mp;
	cout<<"Ingrese el número escogido: "<<endl; 
	cin>>n;
	if (n<=73){
		d=mp*0.15;
	}else{
		d=mp*0.2;
	}
	cout<<"Por su compra se le descuenta: "<<endl;
	cout<<d;
	
	return 0;
}