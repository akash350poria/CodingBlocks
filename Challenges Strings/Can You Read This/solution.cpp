#include <iostream>
#include <string>

using namespace std;

void readThis(string s)
{
  cout << s[0];
  for (int i = 1; i < s.length(); i++)
  {
    if (s[i] <= 'Z' and s[i] >= 'A')
    {
      cout << endl;
    }
    cout << s[i];
  }
}

int main()
{
  string s;
  cin >> s;
  readThis(s);
  return 0;
}