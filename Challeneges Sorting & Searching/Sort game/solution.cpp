#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2)
{
  if (p1.second == p2.second)
  {
    return p1.first < p2.first;
  }
  return p1.second > p2.second;
}

int main()
{
  int n, x;
  cin >> x >> n;
  cin.get();
  pair<string, int> p[10005];
  for (int i = 0; i < n; i++)
  {
    string name;
    int sal;
    cin >> name;
    cin >> sal;
    p[i] = make_pair(name, sal);
  }
  sort(p, p + n, compare);
  for (int i = 0; i < n; i++)
  {
    if (p[i].second >= x)
    {
      cout << p[i].first << " " << p[i].second << endl;
    }
  }
  return 0;
}