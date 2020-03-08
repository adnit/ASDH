#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;

class Pika
{
private:
  double x, y;

public:
  Pika()
  {
    this->x = 0.0;
    this->y = 0.0;
  }
  Pika(double x, double y)
  {
    this->x = x;
    this->y = y;
  }
  double distanca(Pika p2)
  {
    double d = sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));
    return d;
  }
  string toString()
  {
    stringstream ss;
    ss << "(" << x << "," << y << ")";
    return ss.str();
  }
};
class Rrethi
{
private:
  double rrezja;
  Pika qendra;

public:
  Rrethi(double rrezja, Pika qendra)
  {
    this->rrezja = rrezja;
    this->qendra = qendra;
  }

  double siperfaqja()
  {
    return 3.14 * rrezja * rrezja;
  }
  double distanca(Rrethi r2)
  {
    return qendra.distanca(r2.qendra);
  }
};

int main()
{
  Pika p1 = Pika(2, 3);
  Pika p2 = Pika(3, 4);
  cout << "Distanca mes p1 dhe p2: " << p1.distanca(p2) << endl;
  cout << "Distanca mes p1 dhe p2: " << p2.distanca(p1) << endl;
  cout << p1.toString() << endl;

  Rrethi r = Rrethi(3.5, p1);
  cout << r.siperfaqja() << endl;
  Rrethi r2 = Rrethi(2, p2);
  cout << r.distanca(r2) << endl;

  return 0;
}