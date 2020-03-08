//Leap Year

/*
* အင်္ဂလိပ် ခုနှစ်ကို ၄ နဲ့စားလို့ ပြတ်လျှင် ရက်ထပ်နှစ် ဖြစ်ချင်ဖြစ်နိုင်ပါတယ်။
* ၁၀၀ နဲ့စားလို့ မပြတ်လျှင်တော့ သေချာပေါက် ရက်ထပ်နှစ်ပါ၊ ပြတ်နေလျှင်တော့ ရက်ထပ်နှစ် ဟုတ်/မဟုတ် မသေချာပြန်တော့ပါဘူး။
* ၄၀၀ နဲ့ထပ်စားကြည့် ပြတ်လျှင်တော့ ရက်ထပ်နှစ်ပါ၊ မပြတ်လျှင်တော့ ရက်ထပ်နှစ်လုံးဝမဟုတ်တော့ပါဘူး။  
*/

#include <iostream>

const int TRUE = 1;  //Custom values for boolean.
const int FALSE = 0; //But, The next generation of C/C++ languages have already decleared boolean values true and false.

int main()
{
  int year, leap;

  std::cout << "Enter a year (****)\n";
  std::cin >> year;

  if (year % 4 != 0)
    leap = FALSE;
  else if (year % 100 != 0)
    leap = TRUE;
  else if (year % 400 == 0)
    leap = TRUE;
  else
    leap = FALSE;

  if (leap)
    std::cout << year << " is a LEAP year.\n";
  else
    std::cout << year << " is NOT a LEAP year.\n";

  return 0;
}
