#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string alfd="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alfm="abcdefghijklmnopqrstuvwxyz";
  string wprow;
  fstream pliczek;
  pliczek.open ("plik.txt", fstream::in)
  getline (cin,wprow);
  cout << wprow << endl;
  for (int i=0;i<wprow.size();i++)
    for (int j=0;j<alfd.size();j++)
      if (wprow[i]==alfd[j])
	{
	  wprow[i]=alfm[j];
	  break;
	}
  cout << wprow << endl;
  pliczek<<wprow<<endl;
  pliczek.close();
  return 0;
}
