#include <string>
#include <iostream>

using namespace std;

int main ()
{
  string n("Zjadłbym czekoladę");
  string::iterator zwiekszacz;
  for (zwiekszacz=n.begin();zwiekszacz!=n.end();zwiekszacz++)
    cout<<*zwiekszacz<<endl;
}
