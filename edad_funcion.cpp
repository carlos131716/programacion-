#include <iostream>
using namespace std;
int edad(int anio){
    int edad=0;
    edad=2023-anio;
    return edad;
}
int main (){
    int anio;
    int edad_actual;
    cout<<"hallar tu edad con tu anio de nacimiento"<<endl;
    cout<<"coloque su anio de nacimiento"<<endl;
    cin>>anio;
    cout<<"tu edad es"<<endl;
    edad_actual=edad(anio);
    if(edad_actual<=17){
        cout<<"eres menor de edad"<<endl;
    } else {
        cout<<"eres mayor de edad"<<endl;
    }
    cout<<"tu edad es: "<<edad_actual;
    return 0;
}