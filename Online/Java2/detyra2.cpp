#include <iostream>
using namespace std;

enum Madhesia
{
  Vogel,
  Mesme,
  Madhe
};

class Vendbanimi
{
private:
  string emri;
  Madhesia madhsia;
  double siperfaqja;
  double temp[7];

public:
  Vendbanimi(string emri, Madhesia madhsia, double sip, double temp[])
  {
    this->emri = emri;
    this->madhsia = madhsia;
    this->siperfaqja = sip;
    for (int i = 0; i < 7; i++)
    {
      this->temp[i] = temp[i];
    }
  }

  Vendbanimi lexo()
  {

    string emri;
    Madhesia madhsia;
    double siperfaqja;
    double temp[7];

    cout << "Emri ";
    cin >> emri;
    cout << "Madhsia: 1, 2, 3 : ";
    int zgjedhja;
    cin >> zgjedhja;
    switch (zgjedhja)
    {
    case 1:
      madhsia = Vogel;
      break;
    case 2:
      madhsia = Mesme;
      break;
    case 3:
      madhsia = Madhe;
      break;

    default:
      break;
    }
    cout << "Siperfaqja ";
    cin >> siperfaqja;

    for (int i = 0; i < 7; i++)
    {
      cout << "Temp " << i + 1 << ":";
      cin >> temp[i];
    }
    Vendbanimi v1 = Vendbanimi(emri, madhsia, siperfaqja, temp);

    return v1;
  }

  void shtyp()
  {
    cout << this->emri << endl;
    switch (this->madhsia)
    {
    case 0:
      cout << "vogel";
      break;
    case 1:
      cout << "mesme";
      break;
    case 2:
      cout << "madhe";
      break;
    default:
      break;
    }
    cout << endl;
    cout << this->siperfaqja << endl;
    for (int i = 0; i < 7; i++)
    {
      cout << this->temp[i] << " ";
    }
    cout << endl;
  }

  double luhatja()
  {
    double min = this->temp[0];
    double max = this->temp[0];

    for (int i = 0; i < 7; i++)
    {
      if (this->temp[i] < min)
      {
        min = this->temp[i];
      }
      if (this->temp[i] > max)
      {
        max = this->temp[i];
      }
    }

    return max - min;
  }
};

int main()
{

  double temp[] = {2, 4, 6, 7, 2, 4, 5};

  Vendbanimi prishtina{"Prishtina", Vogel, 311.1, temp};

  prishtina.shtyp();

  Vendbanimi vendbanimiJuaj = prishtina.lexo();

  vendbanimiJuaj.shtyp();

  cout << "Diferenca " << vendbanimiJuaj.luhatja();

  return 0;
}