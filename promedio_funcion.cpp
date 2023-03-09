#include<iostream>
using namespace std;
int promedio_calculadora(float nota1,float nota2,float nota3){
	int promedio=0;
	promedio=(nota1+nota2+nota3)/3;
	
	return promedio;
}
int main (){
	int nota1,nota2,nota3;
	int promedio=0;
	cout<<"ingrese su nota :"<<endl;
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	
	// esto se utiliza para poder usar la funcion de la operacion
	promedio=promedio_calculadora(nota1,nota2,nota3);
	
	cout<<"el promedio es :"<<promedio<<endl;
	return 0;
}
