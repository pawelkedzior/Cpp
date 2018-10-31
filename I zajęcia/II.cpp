#include <iostream>
#include <string>

using namespace std;

int main()
{
  string temp, note;
    cout<<"Napisz cos"<<endl;
  do
  {
    getline(cin,temp);
    note.append(temp+"\n");
       if (!temp.empty())
      cout<<"Napisz cos jeszcze"<<endl;
  }
  while (!temp.empty());
  cout << note;
  return 0;
}
