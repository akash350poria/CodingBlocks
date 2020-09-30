#include <iostream>
#include <algorithm>

using namespace std;

bool comparePair(pair<int, int> a, pair<int, int> b)
{
  return a.second < b.second;
}

int main()
{
  int t;
  int n;
  int a, b;
  pair<int, int> s[10000];
  cin >> t;
  while (t--)
  {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> s[i].first;
      cin >> s[i].second;
    }
    sort(s, s + n, comparePair);
    int ans = 1;
    for (int i = 0, j = 1; j < n; j++)
    {
      if (s[j].first >= s[i].second)
      {
        ans++;
        i = j;
      }
    }
    cout << ans << endl;
  }
  return 0;
}