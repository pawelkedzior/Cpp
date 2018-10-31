#include  <iostream>
#include <complex>

using namespace std;

int main()
{
  complex<double> jedynka;
  complex<double> dwojka;
  cin>>jedynka;
  cin>>dwojka;
  complex<double> dodaj,odejmij,pomnoz,podziel;
  dodaj=jedynka+dwojka;
  odejmij=jedynka-dwojka;
  podziel=jedynka/dwojka;
  pomnoz=jedynka*dwojka;
  cout<<"Suma - "<<dodaj<<endl<<"Różnica - "<<odejmij<<endl;
  cout<<"Iloczyn - "<<pomnoz<<endl<<"Iloraz - "<<podziel<<endl;
  return 0;
}
