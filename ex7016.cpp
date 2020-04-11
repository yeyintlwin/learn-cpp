// Listing 7.16: This program averages an array of
// Length objects that is typed in by user.

#include <iostream>

const int MAX = 50;

class Length
{
  int feet;
  float inches;

public:
  Length()
  {
    feet = 0;
    inches = 0;
  }
  Length(int ft, float in)
  {
    feet = ft;
    inches = in;
  }
  void getLength()
  {
    std::cout << "\nEnter feet : ";
    std::cin >> feet;
    std::cout << "\nEnter inches : ";
    std::cin >> inches;
  }
  void showLength()
  {
    std::cout << feet << "\'-" << inches << '\"';
  }
  void addLength(Length x, Length y)
  {
    inches = x.inches + y.inches;
    feet = 0;
    if (inches >= 12)
    {
      inches -= 12;
      feet++;
    }
    feet += x.feet + y.feet;
  }
  void getAvg(Length x, int divisor)
  {
    float y = x.feet + x.inches / 12;
    y /= divisor;
    feet = int(y);
    inches = (y - feet) * 12;
  }
};

int main()
{
  Length obj[MAX];
  Length total, ans;
  int count = 0;
  char ch;

  do
  {
    std::cout << "Enter a length";
    obj[count++].getLength();
    std::cout << "\nDo you want another (y/n)? ";
    std::cin >> ch;
  } while (ch != 'n');

  for (int i = 0; i < count; i++)
    total.addLength(total, obj[i]);
  ans.getAvg(total, count);
  std::cout << "\nThe average is ";
  ans.showLength();
  std::cout << std::endl;
  return 0;
}
