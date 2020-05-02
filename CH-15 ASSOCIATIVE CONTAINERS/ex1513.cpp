// Listing 15.13: Adding elements to a map using the [] operator
#include <iostream>
#include <map>

using namespace std;
typedef map<int, char> MYMAP;

int main()
{
  MYMAP charMap;
  charMap[1] = 'A';
  charMap[4] = 'D';
  charMap[2] = 'B';
  charMap[5] = 'E';
  charMap[3] = 'C';

  cout << "\n\tContents of map:\n";
  MYMAP::iterator iter;
  for (iter = charMap.begin(); iter != charMap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  return 0;
}
