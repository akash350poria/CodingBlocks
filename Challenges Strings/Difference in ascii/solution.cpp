#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string diffInAscii(string s)
{
  stringstream r;
  r << s[0];
  for (int i = 1; i < s.length(); i++)
  {
    int diff = int(s[i]) - int(s[i - 1]);
    r << diff;
    r << s[i];
  }
  return r.str();
}

int main()
{
  string s;
  getline(cin, s);
  string result = diffInAscii(s);
  cout << result;
  return 0;
}