#include <iostream>
#include <string>

using namespace std;

char maxFrequencyChar(string s)
{
  char h[127] = {0};
  int max = 0;
  char c;
  for (int i = 0; i < s.length(); i++)
  {
    h[s[i]]++;
    if (max < h[s[i]])
    {
      max = h[s[i]];
      c = s[i];
    }
  }
  return c;
}

int main()
{
  string s;
  cin >> s;
  char result = maxFrequencyChar(s);
  cout << result;
  return 0;
}