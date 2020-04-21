// Listing 3.25: The program finds the average of the
// nonnegative integers from a list of numbers.

/**
 * ပျမ်းမျှ = စုစုပေါင်း / အရေအတွက်
 * ကိန်းတစ်လုံး (သို့) တစ်လုံးထက်ပိုသော ကိန်းသည် အနှုတ်လက္ခဏာဆောင်ပါက
 * စာရင်းမှပယ်ပစ်ရမည်။ 
 * 
*/
#include <iostream>

int main()
{
  int n, navg = 0;
  float x, avg, sum = 0;

  std::cout << "How many numbers ? ";
  std::cin >> n;

  for (int count = 1; count <= n; ++count)
  {
    std::cout << "x = ";
    std::cin >> x;
    if (x < 0)
      continue;
    sum += x;
    ++navg;
  }
  avg = sum / navg;
  std::cout << "The average is " << avg << std::endl;

  return 0;
}
