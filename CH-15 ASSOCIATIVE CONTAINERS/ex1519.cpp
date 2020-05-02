// Listing 15.19: Searching a multimap
#include <iostream>
#include <map>

using namespace std;
typedef multimap<int, char> MYMAP;

int main()
{
  MYMAP charMultimap;

  charMultimap.insert(MYMAP::value_type(1, 'A'));
  charMultimap.insert(MYMAP::value_type(4, 'C'));
  charMultimap.insert(MYMAP::value_type(2, 'B'));
  charMultimap.insert(MYMAP::value_type(7, 'E'));
  charMultimap.insert(MYMAP::value_type(5, 'D'));
  charMultimap.insert(MYMAP::value_type(3, 'B'));
  charMultimap.insert(MYMAP::value_type(6, 'D'));

  cout << "\n\tContents of multimap:\n";
  MYMAP::iterator iter;
  for (iter = charMultimap.begin(); iter != charMultimap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  cout << endl;

  // Find the first D.
  iter = charMultimap.find(5);
  if (iter == charMultimap.end())
    cout << "\tElement not found.";
  else
  {
    cout << "\tElement found: ";
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter++).second << endl;
    cout << "\tNext element: ";
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }

  return 0;
}
