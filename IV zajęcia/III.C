#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void szukaj (string linia,string slowo, int numer)
{
  int znalazl;
  int msce=0;
  while (znalazl=linia.find(slowo,msce)!=string::npos)
    {
      cout<<"("<<numer<<","<<znalazl<<")"<<endl;
      msce=znalazl+slowo.size();
      getchar();
    }
}

int main (int argc, char *argv[])
{
  fstream plik;
  fstream plik2;
  int roz=0;
  string zp;
  plik.open(argv[1],fstream::in);
  plik2.open(argv[2],fstream::out);
    int i=1;
    while(!plik.eof())
      {
	getline(plik,zp);
	plik2<<zp<<endl;
	szukaj(zp,argv[3],i);
	i++;
      }    
  plik2.close();
  plik.close();
}
//znaleźć tekst w pliku i przy przepisywaniu zastąpić go innym, teksty jakie
//ma się znaleźć i jakimi trzeba je zastąpić mają być w argv
