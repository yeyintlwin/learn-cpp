// Listing 8.8: Using overloaded '+' operator to add times
#include <iostream>

class mytime
{
  int hrs, mins, secs;

public:
  mytime()
  {
    hrs = mins = secs = 0;
  }
  mytime(int h, int m, int s)
  {
    hrs = h;
    mins = m;
    secs = s;
  }
  void display()
  {
    std::cout << hrs << ':' << mins << ':' << secs;
  }
  mytime operator+(mytime mt)
  {
    secs += mt.secs;
    if (secs > 59)
    {
      secs -= 60;
      mins++;
    }
    mins += mt.mins;
    if (mins > 59)
    {
      mins -= 60;
      hrs++;
    }
    hrs += mt.hrs;
    return mytime(hrs, mins, secs);
  }
};

int main()
{
  mytime t1(16, 55, 15);
  mytime t2(19, 59, 30);

  std::cout << "\nTime1 = ";
  t1.display();
  std::cout << "\nTime2 = ";
  t2.display();
  mytime total = t1 + t2;
  std::cout << "\n\nTotal = ";
  total.display();
  std::cout << std::endl;
  return 0;
}
