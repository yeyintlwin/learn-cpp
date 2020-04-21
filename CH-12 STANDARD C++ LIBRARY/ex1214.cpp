// Listing 12.14: Scientific and fixedd nota
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  static double x[] =
      {0.00000012, 1.23, 345.678, 56789012.34};

  //static char *ch[] =
  static string ch[] =
      {"ZARNI", "ARKAR", "AYELWIN", "POZAW"};

  cout << endl;

  for (int i = 0; i < 4; i++)
  {
    cout << setiosflags(ios::left) << setw(10)
         << ch[i]
         << resetiosflags(ios::left) << setiosflags(ios::fixed)
         << setiosflags(ios::right) << setw(12)
         << setprecision(1) << x[i] << endl;
  }
  return 0;
}