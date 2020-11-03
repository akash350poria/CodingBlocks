#include <iostream>
using namespace std;

void dec(int n)
{
  //base case
  if (n == 0)
  {
    return;
  }

  //Recursive call
  cout << n << " "; //Top to bottom
  dec(n - 1);
}

void inc(int n)
{
  //base case
  if (n == 0)
  {
    return;
  }

  //Recursive call
  inc(n - 1);
  cout << n << " "; //Bottom to top
}

int main()
{
  int n;
  cin >> n;
  dec(n);
  cout << endl;
  inc(n);
  return 0;
}