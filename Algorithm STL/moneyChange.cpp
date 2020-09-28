#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
  return a <= b;
}

int main()
{
  int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int n = sizeof(money) / sizeof(int);

  int change;
  cout << "Enter money to change: ";
  cin >> change;

  while (change > 0)
  {
    int index = lower_bound(money, money + n, change, compare) - money - 1;
    cout << money[index] << ",";
    change -= money[index];
  }
  return 0;
}