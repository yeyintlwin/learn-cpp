// Listing 15.16: Comparing maps
#include <iostream>
#include <map>

using namespace std;
typedef map<int, char> MYMAP;

int main()
{
  // Create the first map object.
  MYMAP charMap1;
  charMap1[1] = 'A';
  charMap1[4] = 'D';
  charMap1[2] = 'B';
  charMap1[5] = 'E';
  charMap1[3] = 'C';

  cout << "\n\tContents of first map:\n";
  MYMAP::iterator iter;
  for (iter = charMap1.begin(); iter != charMap1.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  cout << endl;

  // Create the second map object.
  MYMAP charMap2;
  charMap2[1] = 'F';
  charMap2[4] = 'I';
  charMap2[2] = 'G';
  charMap2[5] = 'J';
  charMap2[3] = 'H';

  cout << "\n\tContents of second map:\n";
  for (iter = charMap2.begin(); iter != charMap2.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  cout << endl;

  // Compare the maps.
  if (charMap1 == charMap2)
    cout << "\tmap1 == map2";
  else if (charMap1 < charMap2)
    cout << "\tmap1 < map2";
  else
    cout << "\tmap1 > map2";
  cout << endl;
  return 0;
}
