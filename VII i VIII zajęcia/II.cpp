#include  <iostream>
#include <complex>

using namespace std;
/*
complex<double> mno(double r1,double u1,double r2, double u2)
{
  complex<double> wynik;
  wynik=(r1*r2-u1*u2,r1*u2+u1*r2);
  cout<<"zespol"<<r1*r2-u1*u2<<endl<<r1*u2+u1*r2<<"kon\n";
  return wynik;
}*/

class rowdo2
{
  private:
   complex<double> a,b,c;
   complex<double> z1,z2;
  public:
  void jakiewspol(complex<double>,complex<double>,complex<double>);
    rowdo2 ()
    {
      a=1;
      b=0;
      c=0;
    }
    rowdo2 (double x, double y, double z)
    {
      a=x;
      b=y;
      c=z;
    }  
    void wypwspol()
    {
      cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
    }
    void wyprow()
    {
      cout<<"z="<<a<<"*x^2+"<<b<<"*x+"<<c<<endl;
    }
    void rozw()
    {
      complex<double> pdelta;
      complex<double> delta;
      pdelta=sqrt(pow(b,2)-4.0*a*c);
      cout<<"Pierwiastek z delty: "<<pdelta<<endl;
      z1=(-b-pdelta)/(2.0*a);
      z2=(-b+pdelta)/(2.0*a);
      cout<<"Oto pierwiastki równania:"<<endl<<"z1="<<z1<<endl<<"z2="<<z2<<endl;
    }
    void spr()
    {
      if(z1+z2==(-b/a))
	cout<<"Zgadza się!"<<endl;
      else
	cout<<"Masz coś źle."<<endl;
    }
};

void rowdo2::jakiewspol(complex<double> e,complex<double> r,complex<double> d)
{
  a=e;
  b=r;
  c=d;
}

int main()
{
  rowdo2 kw;
  complex<double> abc,bcd,cde;
  kw.wyprow();
  cout<<"Podaj współczynniki."<<endl<<"a=";
  cin>>abc;
  cout<<"b=";
  cin>>bcd;
  cout<<"c=";
  cin>>cde;
  kw.jakiewspol(abc,bcd,cde);
  cout<<"Takie podałeś współczynniki:"<<endl;
  kw.wypwspol();
  cout<<"Oto twoje równanie:"<<endl;
  kw.wyprow();
  kw.rozw();
  kw.spr();
  return 0;
}
