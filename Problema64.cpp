#include <iostream>

using namespace std;

int main ()
{
  int N,  Fact = 1;

    cout<<"Ingrese numero del 1 al 7: "<<endl;
    scanf("%d",&N);
    if((N>=1)&&(N<=7))
    {
    for(N;N>0;N--)
    {
    
        Fact=Fact*N;    
    
    }
    }
    else
    {
        cout<<"No esta en rango"<<endl;
    }

  printf("%d",Fact);

  return 0;
}
