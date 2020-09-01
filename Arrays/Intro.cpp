#include <iostream>
using namespace std;
int main()
{
  int a[5];
  for (int i = 0; i < 5; i++)
    cout << a[i] << " , ";
  int b[10] = {1, 2, 3};
  cout << endl;
  for (int i = 0; i < 5; i++)
    cout << b[i] << " , ";
  int c[5] = {3};
  cout << endl;
  int n = sizeof(c) / sizeof(c[0]);
  for (int i = 0; i < n; i++)
    cout << c[i] << " , ";
  return 0;
}