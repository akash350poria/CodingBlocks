#include <iostream>
using namespace std;

int main()
{
  char a[100][100];
  int n;
  cout << "Enter number of strings: ";
  cin >> n;
  cin.get();
  for (int i = 0; i < n; i++)
  {
    gets(a[i]);
    //cin.getline(a[i], 100);
    //a[i] corresponds to a string
  }
  cout << "Strings are: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << endl;
  }
}