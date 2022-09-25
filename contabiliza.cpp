#include<iostream>
using namespace std;

int main()
{

	int EPQB_i=0,EPQB_l;
	float EPQB_x,EPQB_s=0;
	cout<<"ingrese el limite EPQB_l="; cin>>EPQB_l;
	do{

	cout<<"ingrese el numero EPQB_x="; cin>>EPQB_x;
	EPQB_i=EPQB_i+1;
	EPQB_s=EPQB_s+EPQB_x;

	}while(EPQB_i<EPQB_l);
	cout<<"Se ingresaron "<<EPQB_l<<" numeros "<< "que sumaron "<<EPQB_s<<endl;
	return 0;



}

