#include <iostream>
using namespace std;

struct Drejtkendeshi
{
  double a, b;
};

void shtype(Drejtkendeshi d)
{
  cout << d.a << " " << d.b << endl;
}

void llogarit(Drejtkendeshi d, double *s, double *p)
{

  *s = d.a * d.b;
  *p = 2 * (d.a + d.b);
}

double &anetari(Drejtkendeshi &d, int x)
{

  if (x > 0)
    return d.a;
  else
    return d.b;
}

int main()
{

  Drejtkendeshi d1 = {1.2, 3.1};

  shtype(d1);

  double shuma, perimetri;

  llogarit(d1, &shuma, &perimetri);

  cout << shuma << " " << perimetri;

  cout << anetari(d1, 5);

  return 0;
}