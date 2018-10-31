#include <iostream>
using namespace std;

class Wektor3
{
   private:
   double x,y,z;
   public:
   Wektor3 ()
   {
   };
   Wektor3 (double a, double b, double c): x(a), y(b), z(c)
   {
   }
   Wektor3 operator + (const Wektor3&);
   Wektor3 operator - (const Wektor3&);
   Wektor3 operator * (const double&);
   double operator * (const Wektor3&);
   Wektor3 operator ^ (const Wektor3&);
   friend istream& operator>> (istream&, Wektor3&);
   friend Wektor3 operator* (double zm, const Wektor3&);
   friend ostream& operator<< (ostream&,const Wektor3&);
   double wezx()
     {
       return x;
     }
   double wezy()
     {
       return y;
     }
   double wezz()
     {
       return z;
     }
   void wypisz()
     {
       cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
     }
};
  
Wektor3 Wektor3::operator+ (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x+wspol.x;
  tymcz.y=y+wspol.y;
  tymcz.z=z+wspol.z;
  return tymcz;
}

Wektor3 Wektor3::operator- (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x-wspol.x;
  tymcz.y=y-wspol.y;
  tymcz.z=z-wspol.z;
  return tymcz;
}

Wektor3 Wektor3::operator* (const double& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x*wspol;
  tymcz.y=y*wspol;
  tymcz.z=z*wspol;
  return tymcz;
}

Wektor3 operator* (double zm, const Wektor3& zaw)
{
  Wektor3 tymcz;
  tymcz.x=zaw.x*zm;
  tymcz.y=zaw.y*zm;
  tymcz.z=zaw.z*zm;
  return tymcz;
}

double Wektor3::operator* (const Wektor3& wspol)
{
  return x*wspol.x+y*wspol.y+z*wspol.z;
}

istream& operator>> (istream &str, Wektor3& wprow)
{
  str.ignore(1,'(');
  str>>wprow.x;
  str.ignore(1,',');
  str>>wprow.y;
  str.ignore(1,',');
  str>>wprow.z;
  str.ignore(1,')');
  return str;
}

ostream& operator<< (ostream &str, const Wektor3& wyp)
{
  str<<"(";
  str<<wyp.x;
  str<<",";
  str<<wyp.y;
  str<<",";
  str<<wyp.z;
  str<<")";
  return str;
}

Wektor3 Wektor3::operator^ (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=y*wspol.z-z*wspol.y;
  tymcz.y=z*wspol.x-x*wspol.z;
  tymcz.z=x*wspol.y-y*wspol.x;
  return tymcz;
}

int main () 
{
  Wektor3 u;
  Wektor3 v;
  Wektor3 tymcz;
  double a;
  double b;
  cout<<"Podaj liczby a i b:"<<endl;
  cin>>a>>b;
  cout<<"Podaj wektory u,v:"<<endl;
  cin>>u>>v;
  cout<<a<<"*"<<u<<"+"<<b<<"*"<<v<<"="<<a*u+b*v<<endl;
  cout<<u<<"*"<<v<<"="<<u*v<<endl;
  cout<<u<<"^"<<v<<"="<<(u^v)<<endl;
  cout<<u<<"-"<<v<<"="<<u-v<<endl;
  return 0;
}
