#include <iostream>
#include <cmath>

using namespace std;

class trojkat {
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

int main()
{
  trojkat abc;
  double a,b,c;
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
  return 0;
}
