#include <iostream>
using namespace std;

bool isPalindrome(int a[], int start, int end)
{
  if (start >= end)
  {
    return true;
  }
  if (a[start] == a[end])
  {
    return isPalindrome(a, start + 1, end - 1);
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  int a[10000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  isPalindrome(a, 0, n - 1) ? cout << "true" : cout << "false";
  return 0;
}