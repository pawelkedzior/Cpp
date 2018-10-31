#include <iostream>
#include <cstdio>

using namespace std;

int main()
 {
 int liczba;
 string tmp;
 cout << "Podaj liczbe: ";
 cin >> liczba;
 sprintf ((char*)tmp.c_str(), "%d", liczba);
 cout << "ASCII: " << tmp;
 return 0;
 }
