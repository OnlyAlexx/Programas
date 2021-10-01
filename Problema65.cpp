#include <iostream>

using namespace std;

int main ()
{
  int X, Y, Z, Fact1 = 1, Fact2 = 1, Fact3 = 1, R;

    cout<<"Ingrese numero X: "<<endl;
    scanf("%d",&X);
    
    cout<<"Ingrese numero Y: "<<endl;
    scanf("%d",&Y);
    
    cout<<"Ingrese numero Z: "<<endl;
    scanf("%d",&Z);

    for(X;X>0;X--)
    {
        Fact1=Fact1*X;    
    }
    
    for(Y;Y>0;Y--)
    {
        Fact2=Fact2*Y;    
    }
    
    for(Z;Z>0;Z--)
    {
        Fact3=Fact3*Z;    
    }

    R = Fact3 + Fact2 + Fact1;
    
    printf("La suma factorial es: ");
    printf("%d", R);

  return 0;
}
