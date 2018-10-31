#include <string>
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main ()
{
  fstream imiona, alf, antyalf;
  imiona.open("dane.txt",fstream::in);
  alf.open("alf.txt",fstream::out);
  antyalf.open("antyalf.txt",fstream::out);
  string lin;
  list<string> im;
  list<string>::iterator zw;
  while (!imiona.eof())
      {
	getline(imiona,lin);
	im.push_back(lin);
      }
  im.sort();
  for (zw=im.begin();zw!=im.end();zw++)
    {
      alf<<*zw<<endl;
    }
  im.reverse();
  for (zw=im.begin();zw!=im.end();zw++)
    {
      antyalf<<*zw<<endl;
    }
  antyalf.close();
  alf.close();
  imiona.close();
  return 0;
}
