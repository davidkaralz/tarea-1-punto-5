#include <iostream>
#include <string>

using namespace std;
int main()
{
     float num1, num2, num3,Mayor;
     string Posicion;
     
     cout<<"Ingrese 3 números flotantes (con decimales):"<<endl;
     cin>>num1;
     cin>>num2;
     cin>>num3;
     
     Mayor =(num1>=num2)? ((num1>=num3)? num1:num3):((num2>=num3)? num2:num3);
     Posicion =(num1>=num2)? ((num1>=num3)? "ingresado primero":"ingresado tercero"):((num2>=num3)? "ingresado segundo":"ingresado tercero");
     cout<<"El numero mayor es el "<<Posicion<<": "<<Mayor;
     
     return 0;
}
