#include <iostream>
using namespace std; 
double promedio(double a, double b, double c){
	return (a+b+c)/3;
}
int main(){
	double nota1, nota2, nota3, prom;
	cout<<"Ingrese su primera nota: "<<endl;
	cin>>nota1;
	cout<<"Ingrese su segunda nota: "<<endl;
	cin>>nota2;
	cout<<"Ingrese su tercera nota: "<<endl;
	cin>>nota3;
	prom=promedio(nota1, nota2, nota3);
	if (prom>=70){
	   cout<<"Su promedio es de: "<<prom<<endl;
	   cout<<"Usted a aprobado"<<endl;
    }else{
    	cout<<"Su promedio es de: "<<prom<<endl;
    	cout<<"Usted a reprobado"<<endl;
	}
	return 0;
}