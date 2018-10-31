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
       cout<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
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
  tymcz.x=zaw.x*zm;
  tymcz.y=zaw.y*zm;
  tymcz.z=zaw.z*zm;
  return tymcz;
}
double Wektor3::operator* (const Wektor3& wspol)
{
  return x*wspol.x+y*wspol.y+z*wspol.z;
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
  Wektor3 a(1,2,3);
  Wektor3 b(3,2,1);
  Wektor3 tymcz;
  double skal=5;
  double tymcz2;
  cout<<"a=";
  a.wypisz();
  cout<<"b=";
  b.wypisz();
  cout<<"Suma=";
  tymcz=a+b;
  tymcz.wypisz();
  cout<<"Różnica=";
  tymcz=a-b;
  tymcz.wypisz();
  tymcz2=a*b;
  cout<<"Iloczyn skalarny="<<tymcz2<<endl;
  cout<<"Iloczyn wektorowy=";
  tymcz=a^b;
  tymcz.wypisz();
  cout<<"Mnożenie a przez skalar wynoszący 5=";
  tymcz=a*skal;
  tymcz.wypisz();
  cout<<"Mnożenia b przez skalar wynoszący 5=";
  tymcz=b*skal;
  tymcz.wypisz();
  return 0;
}
