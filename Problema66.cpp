#include <iostream>
#include <math.h>
using namespace std;

int
main ()
{
  int X, R;

  cout << "Ingrese numero: " << endl;
  scanf ("%d", &X);

  int R1 = pow (X, 4);
  int R2 = pow (X, 2);
  int r2 = 8 * R2;
  int R3 = 14 * X;
  int R4 = 7;

  if (X <= 40)
    {

      R = R1 - r2 - R3 + R4;
      printf ("La suma factorial es: ");
      printf ("%d", R);

    }
  else
    {

      printf ("No se puede resolver");


    }

  return 0;
}
