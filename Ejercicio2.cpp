#include <iostream>
using namespace std;
int main(){
	double mpi, mpf;
	cout<<"Ingrese el monto a pagar: "<<endl;
	cin>>mpi;
	if (mpi>1000){
		mpf=mpi-(mpi*0.2);
	}else{
		mpf=mpi;
	}
	cout<<"El monto a pagar es: "<<endl;
	cout<<mpf;
	return 0;
}