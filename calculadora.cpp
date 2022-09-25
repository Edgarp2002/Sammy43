//Programa que presenta las operaciones básicas
//Creado por Edgar Quintero Bermeo
//Fecha: 16-09-2022

#include<iostream>
using namespace std;
int main()
{
	float x,y,p,n,d,r;
	//Ingreso de datos
	cout<<"Ingrese el valor de x=:";
	cin>>x;
	cout<<"Ingrese el valor de y=:";
	//Operaciones 
	cin>>y;
	p=x+y;
	n=x*y;
	d=x/y;
	r=x-y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<x<<" + "<<y<<" = "<<p<<endl;
	cout<<"Las multiplicacion de "<<x<<" * "<<y<<" = "<<n<<endl;
	cout<<"Las division de "<<x<<" / "<<y<<" = "<<d<<endl;
	cout<<"Las resta de "<<x<<" - "<<y<<" = "<<r<<endl;
	return 0 ;

}

