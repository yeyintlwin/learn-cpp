// Listing 15.20: Comparinf multimaps
#include <iostream>
#include <map>

using namespace std;
typedef multimap<int, char> MYMAP;

int main()
{
  // Create the first multimap object.
  MYMAP charMultimap;

  charMultimap.insert(MYMAP::value_type(1, 'A'));
  charMultimap.insert(MYMAP::value_type(4, 'C'));
  charMultimap.insert(MYMAP::value_type(2, 'B'));
  charMultimap.insert(MYMAP::value_type(7, 'E'));
  charMultimap.insert(MYMAP::value_type(5, 'D'));
  charMultimap.insert(MYMAP::value_type(3, 'B'));
  charMultimap.insert(MYMAP::value_type(6, 'D'));

  cout << "\n\tContents of first multimap:\n";
  MYMAP::iterator iter;
  for (iter = charMultimap.begin(); iter != charMultimap.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  cout << endl;

  // Create the second multimap object.
  MYMAP charMultimap2;

  charMultimap2.insert(MYMAP::value_type(1, 'C'));
  charMultimap2.insert(MYMAP::value_type(4, 'F'));
  charMultimap2.insert(MYMAP::value_type(2, 'D'));
  charMultimap2.insert(MYMAP::value_type(7, 'E'));
  charMultimap2.insert(MYMAP::value_type(5, 'F'));
  charMultimap2.insert(MYMAP::value_type(3, 'E'));
  charMultimap2.insert(MYMAP::value_type(6, 'G'));

  cout << "\n\tContents of second multimap:\n";
  for (iter = charMultimap2.begin(); iter != charMultimap2.end(); iter++)
  {
    cout << '\t' << (*iter).first << " --> ";
    cout << (*iter).second << endl;
  }
  cout << endl;

  // Compare the multimaps.
  if (charMultimap == charMultimap2)
    cout << "\tmultimap == multimap2";
  else if (charMultimap < charMultimap2)
    cout << "\tmultimap < multimap2";
  else
    cout << "\tmultimap > multimap2";
  cout << endl;
  return 0;
}
