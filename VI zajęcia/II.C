#include <iostream>
#include <cmath>

using namespace std;

class trojkat 
{
    double a,b,c;
  public:
    void ustalwart(double,double,double);
    trojkat ()
    {
      a=3;
      b=4;
      c=5;
    }

    trojkat (double x, double y, double z)
    {
      a=x;
      b=y;
      c=z;
    }
    double obwod()
      {
        return a+b+c;
      }
    double pole()
      {
	double p;
	p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
      }
};

void trojkat::ustalwart (double f, double g, double r)
{
      a=f;
      b=g;
      c=r;
}

class grantroj
{
  private:
    double agd;
    double bgd;
    double cgd;
    trojkat abc;
    double H;
  public:
  void ustalwart (double,double,double,double);
  grantroj ()
  {
    agd=3;
    bgd=4;
    cgd=5;
    abc.ustalwart(agd,bgd,cgd);
    H=6;
  }
  grantroj (double w, double x, double y,double z)
  {
    H=z;
    agd=w;
    bgd=x;
    cgd=y;
    abc.ustalwart(agd,bgd,cgd);
  }
  double obj()
  {
    return abc.pole()*H;
  }
  double pol()
  {
    double policho;
    policho=abc.pole()*2+agd*H+bgd*H+cgd*H;
    return policho;
  }
};

void grantroj::ustalwart(double wxy, double xyz, double yza, double zab)
{
  abc.ustalwart(wxy,xyz,yza);
  H=zab;
}

int main()
{
  trojkat abc;
  double a,b,c;
  cout<<"Trójkąt"<<endl<<endl;
  cout<<"Podaj wartości trzech boków trójkąta"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  abc.ustalwart (a,b,c);
  cout<<"Pole jest równe: "<<abc.pole()<<" a obwód: "<<abc.obwod()<<endl;
  a++;
  b++;
  c++;
  trojkat abc1 (a,b,c);
  cout<<"Pole jest równe: "<<abc1.pole()<<" a obwód: "<<abc1.obwod()<<endl;  
  trojkat stand;
  cout<<"Pole jest równe: "<<stand.pole()<<" a obwód: "<<stand.obwod()<<endl;
  cout<<endl<<endl<<endl<<"Graniastosłup"<<endl<<endl;
  grantroj abcd;
  double a,b,c,H;
  
  cout<<"Podaj wartości trzech boków podstawy oraz wysokość graniastosłupa"<<endl;
  cin>>
  return 0;
}
