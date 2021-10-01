#include <iostream>
using namespace std;

int main()
{
    int cont=0,w=0,i,s,k,tem,c,num;
    cout<<"Ingresa longitud del arreglo"<<endl;
        cin>>c;
        int N[c];
        while(cont!=c)
        {
            cout<<"Ingresa numero"<<endl;
            cin>>num;
            N[cont]=num;
            cont++;
        }
        cout<<"Orden Decreciente"<<endl;
        while(w!=(c-1))
        {
        w=0;
        for (k=0;k<(c-1);k++)   
        {
            if(N[k]>=N[k+1])
            {
                w=w+1;
            }
            else
            {
                tem=N[k];
                N[k]=N[k+1];
                N[k+1]=tem;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<N[i]<<" ";
    }
    return 0;
}