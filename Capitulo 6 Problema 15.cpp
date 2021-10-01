#include <iostream>
using namespace std;

int main()
{
    int fecha;
    cout<<"Ingresa año: "<<endl;
    cin>>fecha;
    if(fecha%4!=0||(fecha%100 == 0 && fecha % 400 != 0))
    {
        printf("No es bisiesto.");
    }
    else
    {
        printf("Es bisiesto.");
    }
    return 0;
}