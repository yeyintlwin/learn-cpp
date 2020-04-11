// Listing 7.5: This program interpolates the value of y for any value of x
// from a given data array read from the graph.

#include <iostream>

int main()
{
  float x[] = {.0, .1, .2, .3, .4, .5, .6, .7, .8, .9, 1.0};
  float y[] = {.97, .94, .89, .85, .79, .73, .66, .56, .46, .3, 0};
  float anyx, ycal;

  std::cout << "Enter any value of X\n";
  std::cin >> anyx;

  if (anyx <= x[0])
    ycal = y[0];
  else if (anyx >= x[10])
    ycal = y[10];
  else
    for (int i = 1; i < 10; ++i)
      if (x[i] > anyx)
      {
        ycal = y[i - 1] + (anyx - x[i - 1]) * (y[i] - y[i - 1]) / (x[i] - x[i - 1]);
        break;
      }
  std::cout << "\nThe value of Y interpolatrd is " << ycal << std::endl;

  return 0;
}
