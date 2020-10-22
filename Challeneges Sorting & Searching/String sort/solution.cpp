#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2)
{
  int i1 = s1.find(s2);
  int i2 = s2.find(s1);
  if (i1 < s1.length())
  {
    return s2 < s1;
  }
  else if (i2 < s2.length())
  {
    return s1 < s2;
  }
  else
  {
    return s1 < s2;
  }
}

int main()
{
  int n;
  cin >> n;
  cin.get();
  string s[n];
  for (int i = 0; i < n; i++)
  {
    getline(cin, s[i]);
  }
  //Sort arrays
  sort(s, s + n, compare);
  for (auto c : s)
  {
    cout << c << endl;
  }
  return 0;
}