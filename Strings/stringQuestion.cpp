#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

char *getKeyToken(string s, int key)
{
  char *result = strtok((char *)s.c_str(), " ");
  while (key > 1)
  {
    result = strtok(NULL, " ");
  }
  return result;
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

  int key;
  cin >> key;
  string reversal, ordering;
  cin >> reversal >> ordering;

  pair<string, string> strPair[n];
  for (int i = 0; i < n; i++)
  {
    strPair[i].first = s[i];
    strPair[i].second = getKeyToken(s[i], key);
  }

  //sort
}