#include <iostream>
#include <string>

using namespace std;

int main()
{
  string alfd="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alfm="abcdefghijklmnopqrstuvwxyz";
  string wprow;
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
  return 0;
}
