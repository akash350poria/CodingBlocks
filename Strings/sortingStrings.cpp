#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
  if (a.length() == b.length())
    return a < b;

  return a.length() < b.length();
}

int main()
{
  int n;
  cout << "Enter number of strings: ";
  cin >> n;
  cin.get();
  string s[n];
  cout << "Enter strings: " << endl;
  for (int i = 0; i < n; i++)
    getline(cin, s[i]); //take input to string object

  cout << "Sorting based on lexical comparison" << endl;
  sort(s, s + n); //sorting based on lexical comparison

  for (int i = 0; i < n; i++)
    cout << s[i] << endl;

  cout << "Sorting based on length" << endl;
  sort(s, s + n, compare); //sorting based on result of compare()
  for (int i = 0; i < n; i++)
    cout << s[i] << endl;

  return 0;
}