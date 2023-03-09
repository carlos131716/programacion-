#include <iostream>

using namespace std;

int main(){
	int mes;
	do{
		cout<<"ingrese el numero del mes[1-12]"<<endl;
		cin>>mes;
	}while(mes<1 || mes >12);
	
	switch(mes){
		case 1:
		cout<<"el mes es enero";
		break;
		case 2:
		cout<<"el mes es febrero";
		break;
		case 3:
		cout<<"el mes es marzo";
		break;
		case 4:
		cout<<"el mes es abril";
		break;
		case 5:
		cout<<"el mes es mayo";
		break;
		case 6:
		cout<<"el mes es junio";
		break;
		case 7:
		cout<<"el mes es julio";
		break;
		case 8:
		cout<<"el mes es agosto";
		break;
		case 9:
		cout<<"el mes es setiembre";
		break;
		case 10:
		cout<<"el mes es octubre";
		break;
		case 11:
		cout<<"el mes es noviembre";
		break;
		case 12:
		cout<<"el mes es diciembre";
		break;
	}
	return 0;
	}