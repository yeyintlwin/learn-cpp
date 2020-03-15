// Listing 2.17: This program demonstrates returning a structure 
#include <iostream>

struct Length
{
  int feet;
  float inches;
};

void convr(Length);
Length add(Length, Length);

int main()
{
  Length piece1, piece2, total;

  std::cout << "For piece1\n\tEnter feet : ";
  std::cin >> piece1.feet;
  std::cout << "\tEnter inches : ";
  std::cin >> piece1.inches;
  std::cout << std::endl;

  std::cout << "For piece2\n\tEnter feet : ";
  std::cin >> piece2.feet;
  std::cout << "\tEnter inches : ";
  std::cin >> piece2.inches;

  total = add(piece1, piece2);

  std::cout << std::endl;

  std::cout << "Adding piece1 and piece2 gives" << std::endl;
  convr(piece1);
  std::cout << " + ";
  convr(piece2);
  std::cout << " = ";
  convr(total);
  std::cout << std::endl;

  return 0;
}

void convr(Length x)
{
  std::cout << x.feet << "\'-" << x.inches << "\"";
}

Length add(Length x, Length y)
{
  //Example code was producing wrong output.
  //Rewrited by Ye Yint Lwin.

  Length z;
  z.feet = x.feet + y.feet;
  z.inches = x.inches + y.inches;

  if (z.inches > 12.0)
  {
    while (true)
    {
      if (z.inches < 12.0)
        break;
      z.inches -= 12.0;
      z.feet++;
    }
  }

  /*
  * This is original code.
  Length z;
  z.inches = x.inches + y.inches;
  z.feet = 0;

  if (x.inches >= 12.0)
  {
    z.inches -= 12.0;
    z.feet++;
  }
  z.feet += x.feet + y.feet;
  */

  return z;
}