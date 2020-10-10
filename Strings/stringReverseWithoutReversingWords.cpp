#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string stringReverseWords(string a)
{
  stringstream is(a);
  string word;
  is >> a;
  while (is >> word)
  {
    a = word + " " + a;
  }
  if (a[0] = ' ')
  {
    return "";
  }
  return a;
}

int main()
{
  string s;
  cout << "Enter a string: ";
  cin >> s;
  cout << "Reversed string: ";
  s = stringReverseWords(s);
  for (int i = 0; i < s.length(); i++)
  {
    cout << s[i];
  }
  return 0;
}