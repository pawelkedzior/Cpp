// template specialization
#include <iostream>
using namespace std;

// class template:
template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;}
    T increase () {return ++element;}
};

// class template specialization:
template <>
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};

int main () {
  int a;
  char b;
  cin>>a;
  mycontainer<int> myint (a);
  cin>>b;
  mycontainer<char> mychar (b);

  cout << myint.increase() << endl;
  cout << mychar.uppercase() << endl;
  return 0;
}
