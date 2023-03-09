#include<iostream>
using namespace std;
int promedio(float nota1,float nota2,float nota3){
	int prom=0;
	prom=(nota1+nota2+nota3)/3;
	
	return prom;
}
int notas(int calificacion){
	int nota=0;
	if(calificacion>=18){
		nota=1;
	}else{
		if(calificacion>=15){
			nota=2;
	}else{
		if(calificacion>=11){
		nota=3;
	}else{
		if(calificacion>=5){
		nota=4;
	}else{
		nota=5;
	}
	}
	}
	}
	return nota;
}
int main(){
	float nota1=0,nota2=0,nota3=0;
	int prom=0;
	int nota=0;
	cout<<"ingrese sus nota :"<<endl;
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	
	// esto se utiliza para sacar el promedio
	prom=promedio(nota1,nota2,nota3);
	
	// esto se utiliza para dar una letra a la calificaion
	nota=notas(prom);
	
	cout<<"la nota del alumno es :"<<prom<<endl;
	switch(nota){
		case 1:
			cout<<"A";
			break;	
		case 2:
			cout<<"B";
			break;
		case 3:
			cout<<"C";
			break;
		case 4:
			 cout<<"D";
			break;	
		case 5:
			cout<<"E";
			break;
		default:
			cout<<"no tienes nota";
			break;		
			}
		return 0;	
			}