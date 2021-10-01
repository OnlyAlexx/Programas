#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
    int i, j=1, k=1, arreglo[1000], pares[1000], impares[30];
    srand(time(NULL));
    
    for(i=1;i<=1000;i++)
    {
        
        arreglo[i]=1+rand()%(1-100);
        printf("[%d]", arreglo[i]);
        
    }
    
    for(i=1;i<=1000;i++)
    {
        
        if(arreglo[i]%2==0)
        {
            pares[j]=arreglo[i];
            j++;
        }
        else
        {
            impares[k]=arreglo[i];
            k++;
        }
    }
    
    printf("\nNumeros pares\n");
    for(i=1;i<j;i++)
    {
        
        printf("[%d]", pares[i]);
        
    }
    printf("\nNumeros impares\n");
    for(i=1;i<k;i++)
    {
        
        printf("[%d]", impares[i]);
        
    }
    
    
return 0;

}