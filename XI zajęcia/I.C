#include <iostream>
using namespace std;

template <class T>
class Wektor3
{
   private:
   T x,y,z;
   public:
   Wektor3 ()
   {
   };
   Wektor3 (T a, T b, T c): x(a), y(b), z(c)
   {
   }
   Wektor3 operator + (const Wektor3&);
   Wektor3 operator - (const Wektor3&);
   Wektor3 operator * (const double&);
   double  operator * (const Wektor3& wspol)
   {
     return x*wspol.x+y*wspol.y+z*wspol.z;
   }
   Wektor3 operator ^ (const Wektor3&);
   friend istream& operator>> (istream& str, Wektor3& wprow)
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
   friend Wektor3 operator* (double zm, const Wektor3& zaw)
   {
     Wektor3 tymcz;
     tymcz.x=zaw.x*zm;
     tymcz.y=zaw.y*zm;
     tymcz.z=zaw.z*zm;
     return tymcz;
   }
   friend ostream& operator<< (ostream& str,const Wektor3& wyp)
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
   T wezx()
     {
       return x;
     }
   T wezy()
     {
       return y;
     }
   T wezz()
     {
       return z;
     }
   void wypisz()
     {
       cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
     }
};

template<class T>Wektor3<T> Wektor3<T>::operator+ (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x+wspol.x;
  tymcz.y=y+wspol.y;
  tymcz.z=z+wspol.z;
  return tymcz;
}

template<class T>Wektor3<T> Wektor3<T>::operator- (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x-wspol.x;
  tymcz.y=y-wspol.y;
  tymcz.z=z-wspol.z;
  return tymcz;
}

template<class T>Wektor3<T> Wektor3<T>::operator* (const double& wspol)
{
  Wektor3 tymcz;
  tymcz.x=x*wspol;
  tymcz.y=y*wspol;
  tymcz.z=z*wspol;
  return tymcz;
}

template<class T>Wektor3<T> Wektor3<T>::operator^ (const Wektor3& wspol)
{
  Wektor3 tymcz;
  tymcz.x=y*wspol.z-z*wspol.y;
  tymcz.y=z*wspol.x-x*wspol.z;
  tymcz.z=x*wspol.y-y*wspol.x;
  return tymcz;
}

int main () 
{
  //float
  Wektor3<float> u;
  Wektor3<float> v;
  float a;
  float b;
  cout<<"Podaj liczby a i b:"<<endl;
  cin>>a>>b;
  cout<<"Podaj wektory u,v:"<<endl;
  cin>>u>>v;
  cout<<a<<"*"<<u<<"+"<<b<<"*"<<v<<"="<<a*u+b*v<<endl;
  cout<<u<<"*"<<v<<"="<<u*v<<endl;
  cout<<u<<"^"<<v<<"="<<(u^v)<<endl;
  cout<<u<<"-"<<v<<"="<<u-v<<endl;
  //double
  cout<<endl<<endl;
  Wektor3<double> ud;
  Wektor3<double> vd;
  double ad;
  double bd;
  cout<<"Podaj liczby a i b:"<<endl;
  cin>>ad>>bd;
  cout<<"Podaj wektory u,v:"<<endl;
  cin>>ud>>vd;
  cout<<ad<<"*"<<u<<"+"<<bd<<"*"<<vd<<"="<<ad*ud+bd*vd<<endl;
  cout<<ud<<"*"<<v<<"="<<ud*vd<<endl;
  cout<<ud<<"^"<<v<<"="<<(ud^vd)<<endl;
  cout<<ud<<"-"<<v<<"="<<ud-vd<<endl;
  //int
  cout<<endl<<endl;
  Wektor3<int> ui;
  Wektor3<int> vi;
  int ai;
  int bi;
  cout<<"Podaj liczby a i b:"<<endl;
  cin>>ai>>bi;
  cout<<"Podaj wektory u,v:"<<endl;
  cin>>ui>>vi;
  cout<<ai<<"*"<<ui<<"+"<<bi<<"*"<<vi<<"="<<ai*ui+bi*vi<<endl;
  cout<<ui<<"*"<<vi<<"="<<ui*vi<<endl;
  cout<<ui<<"^"<<vi<<"="<<(ui^vi)<<endl;
  cout<<ui<<"-"<<vi<<"="<<ui-vi<<endl;
  return 0;
}
