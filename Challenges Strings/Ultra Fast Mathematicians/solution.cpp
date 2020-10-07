#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  string s1, s2, s3;
  cin >> t;
  while (t--)
  {
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
      if (s1[i] != s2[i])
      {
        s3 = s3 + '1';
      }
      else
      {
        s3 = s3 + '0';
      }
    }
    cout << s3 << endl;
    s3 = "";
  }
}