#include <iostream>
#include <string>

using namespace std;

int main()
{
  string n("Zjadłbym dziś czekoladę.");
   string::iterator zw;
    int i=0;
      int f=0;
  string d("dobrą ");
   for (zw=n.begin();zw!=n.end();zw++)
    {
      if (*zw==' ')
	i++;
      cout<<*zw;
    }
  cout<<endl;
  {
  int j=1;
  for (zw=n.begin();zw!=n.end();zw++)
    {
      f++;
      if (*zw==' ')
	  if (j!=i)
	    j++;
	  else
	    goto dalej;
    }
  }
dalej:
  n.replace(n.begin()+f ,n.begin()+f,d);    
  cout<<n<<endl;
}
