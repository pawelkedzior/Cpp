#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (int argc, char *argv[])
{
  fstream plik;
  fstream plik2;
  plik.open(argv[1],fstream::in);
  plik2.open(argv[2],fstream::out);
  string zp;
  do
    {
      getline(plik,zp);
      plik2<<zp<<endl;
    }
  while(!plik.eof());
  plik2.close();
  plik.close();
}
