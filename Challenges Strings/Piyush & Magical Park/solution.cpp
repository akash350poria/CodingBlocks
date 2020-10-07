#include <iostream>
using namespace std;

void magicalPark(char a[][100], int n, int m, int k, int s)
{
  bool result = true;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      char ch = a[i][j];
      if (s < k)
      {
        result = false;
        cout << "No";
        return;
      }
      if (ch == '*')
      {
        s = s + 5;
      }
      else if (ch == '.')
      {
        s = s - 2;
      }
      else
      {
        break;
      }
      if (j != m - 1)
      {
        s--;
      }
    }
  }
  if (result)
  {
    cout << "Yes" << endl;
    cout << s << endl;
  }
  else
  {
    cout << "No";
  }
}

int main()
{
  int n, m, s, k;
  cin >> n >> m >> k >> s;
  char a[100][100];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  magicalPark(a, n, m, k, s);
  return 0;
}
