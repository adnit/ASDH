#include <iostream>
#include <sstream>
using namespace std;

class Studenti
{

private:
  string emri;
  string mbiemri;
  int mosha;
  int *notat;

public:
  Studenti(string emri, string mbiemri, int mosha, int *notat)
  {
    this->emri = emri;
    this->mbiemri = mbiemri;
    this->mosha = mosha;
    this->notat = notat;
  }
  int nota(int i)
  {
    return this->notat[i];
  }

  double notaMesatare()
  {
    double s = 0;
    for (int i = 0; i < 5; i++)
    {
      s += nota(i);
    }
    return s / 5;
  }

  string emriPlote()
  {
    stringstream emriPlote;
    emriPlote << emri << " " << mbiemri;
    return emriPlote.str();
  }

  void shtyp()
  {
    for (int i = 0; i < 5; i++)
    {
      cout << this->nota(i) << " ";
    }
    cout << endl;
    cout << this->notaMesatare() << endl;
    cout << this->emriPlote() << endl;
  }
};

int main()
{
  int notat1[5] = {10, 10, 7, 7, 5};
  int notat2[5] = {2, 9, 5, 9, 12};

  // studenti 1
  Studenti adnit = Studenti("Adnit", "Kamberi", 18, notat1);
  cout << adnit.nota(2) << endl;
  cout << adnit.notaMesatare() << endl;
  cout << adnit.emriPlote() << endl;
  adnit.shtyp();

  // studenti 2
  Studenti *s2 = new Studenti("Filan", "Fisteku", 18, notat2);
  cout << s2->nota(1) << endl;
  cout << s2->notaMesatare() << endl;
  cout << s2->emriPlote() << endl;
  s2->shtyp();

  delete s2;

  return 0;
}