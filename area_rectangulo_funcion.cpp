#include<iostream>
using namespace std;
int  operacion(int altura, int base){
	int ope=0;
	ope=altura*base;
	return ope;
	}
	int main (){
		int area;
		int base;
		int altura;
		cout<<"ingrese el altura del rectangulo"<<endl;
		cin>>altura;
		cout<<"ingrese la base del rectangulo"<<endl;
		cin>>base;
		
		// esto se utiliza para poder usar la funcion de la operacion
		area=operacion(altura,base);
		
		cout<<"el area del rectangulo es :"<<area;
		return 0;
	}