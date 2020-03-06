#include <iostream>
#include <math.h>
using namespace std;

class Pika
{
private:
  double x, y;

public:
  Pika(double x, double y)
  {
    this->x = x;
    this->y = y;
  }
  double distanca(Pika p2)
  {
    double d = sqrt(pow(x - p2.x, 1) + pow(y - p2.y, 1));
    return d;
  }
};
int main()
{
  Pika p1 = Pika(2, 3);
  Pika p2 = Pika(3, 4);
  cout << "Distanca mes p1 dhe p2: "
       << p1.distanca(p2) << endl;
  cout << "Distanca mes p1 dhe p2: "
       << p2.distanca(p1) << endl;
  return 0;
}