// Listing 15.17: A simple multimap
#include <iostream>
#include <map>

using namespace std;
typedef multimap<int, char> MYMAP;

int main()
{
  // Create the multimap object.
  MYMAP charMultimap;

  // Populate the multimap with values.
  charMultimap.insert(MYMAP::value_type(1, 'A'));
  charMultimap.insert(MYMAP::value_type(4, 'C'));
  charMultimap.insert(MYMAP::value_type(2, 'B'));
  charMultimap.insert(MYMAP::value_type(7, 'E'));
  charMultimap.insert(MYMAP::value_type(5, 'D'));
  charMultimap.insert(MYMAP::value_type(3, 'B'));
  charMultimap.insert(MYMAP::value_type(6, 'D'));

  // Display the contents of the multimap.
  cout << "\n\tContents of multimap:\n";
  MYMAP::iterator iter;
  for (iter = charMultimap.begin(); iter != charMultimap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  return 0;
}
