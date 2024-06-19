#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	double ncamisas, mpi, mpf;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese el número de camisas adquiridas: "<<endl;
	cin>>ncamisas;
	cout<<"Ingrese el monto incial a pagar por las camisas: "<<endl;
	cin>>mpi; 
	if (ncamisas>=3){
		mpf=mpi-(mpi*0.2);
	}else{
		mpf=mpi-(mpi*0.1);
	}
	cout<<"El monto a pagar es de: "<<endl;
	cout<<mpf;
	
	return 0;
}