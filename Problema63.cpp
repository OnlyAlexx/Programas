#include <iostream>

using namespace std;

int main ()
{
  int N, R, NumInv = 0;

    cout<<"Ingrese numero: "<<endl;
    cin>>N;
    
    while(N>=11){
        printf("%d",N % 10);
        N /= 10;
    }

  printf("%d",N);

  return 0;
}
