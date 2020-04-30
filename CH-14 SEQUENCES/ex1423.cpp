// Listing 14.23: Managing a priority_queue
/* random add လုပ်ခဲ့တဲ့ဂဏန်းတွေကို ကြီးစဉ်ငယ်လိုက် 
remove လုပ်ပေးတဲ့နည်း program ဖြစ်ပါတယ် */

#include <iostream>
#include <list>
#include <queue>

int main()
{
  std::priority_queue<int, std::vector<int>> intPQue;
  intPQue.push(400);
  intPQue.push(100);
  intPQue.push(500);
  intPQue.push(300);
  intPQue.push(200);
  std::cout << "\n\tValues removed from priority queue:\n";
  int size = intPQue.size();
  for (int x = 0; x < size; ++x)
  {
    std::cout << '\t' << intPQue.top() << std::endl;
    intPQue.pop();
  }
  std::cout << std::endl;
  return 0;
}
