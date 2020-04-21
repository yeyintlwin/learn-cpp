// LIsting 9.5: A complex example of complex
#include <iostream>

class Length
{
protected:
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
    std::cout << "\n\tEnter feet : ";
    std::cin >> feet;
    std::cout << "\tEnter inches : ";
    std::cin >> inches;
  }
  void showLength()
  {
    std::cout << feet << "\'-" << inches << '\"';
  }
};

enum sign
{
  pos,
  neg
};

class LengthSign : public Length
{
  char sign;

public:
  LengthSign() : Length()
  {
    sign = pos;
  }
  LengthSign(int ft, float in)
  {
    feet = ft;
    inches = in;
  }
  LengthSign(int ft, float in, char pos) : Length(ft, in)
  {
    sign = pos;
  }
  void getLength()
  {
    // Length::getdata();
    Length::getLength();
    char ch;
    std::cout << "\n\tEnter sign (+ or -) : ";
    std::cin >> ch;
    sign = (ch == '+') ? pos : neg;
  }
  void showLength()
  {
    std::cout << ((sign == pos) ? "(+)" : "(-)");
    Length::showLength();
  }
};

int main()
{
  LengthSign alpha;
  alpha.getLength();
  std::cout << "\n\tALPHA : ";
  alpha.showLength();

  LengthSign beta(11, 6.25);
  std::cout << "\n\tBETA = ";
  beta.showLength();

  LengthSign gamma(100, 5.5, neg);
  std::cout << "\n\tGAMMA = ";
  gamma.showLength();

  std::cout << std::endl;

  return 0;
}
