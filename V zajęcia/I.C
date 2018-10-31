#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int szukaj (string linia,string slowo, int numer)
{
  int znalazl;
  znalazl=linia.find(slowo,numer);
    {
      if (znalazl!=string::npos)
	return znalazl;
      else
	return -2;
    }
}

int main (int argc, char *argv[])
{
  fstream plik;
  fstream plik2;
  string zp;
  plik.open(argv[1],fstream::in);
  plik2.open(argv[2],fstream::out);
    while (!plik.eof())
      {
	getline(plik,zp);
	int j=0;
	do
	  {
	    //tu jest błąd
	    j=szukaj(zp,argv[3],j);
	    if (j!=-2)
	      zp.replace(zp.begin()+j,zp.begin()+j,argv[4]);
	  }
	while (j!=-2);
	plik2<<zp<<endl;
      }    
  plik2.close();
  plik.close();
}
//znaleźć tekst w pliku i przy przepisywaniu zastąpić go innym, teksty jakie
//ma się znaleźć i jakimi trzeba je zastąpić mają być w argv
