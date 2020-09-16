#include <iostream>
using namespace std;

int main()
{
  int r, c;
  cout << "Enter number of rows and columns: ";
  cin >> r >> c;
  int a[r][c];
  int value = 1;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      a[i][j] = value++;
    }
  }
  cout << "Matrix is" << endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Wave print is: ";
  for (int j = 0; j < c; j++)
  {
    //If even column: top to bottom
    if (j % 2 == 0)
    {
      for (int i = 0; i < r; i++)
      {
        cout << a[i][j] << ' ';
      }
    }
    //If odd column: bottom to top
    else
    {
      for (int i = r - 1; i >= 0; i--)
      {
        cout << a[i][j] << " ";
      }
    }
    //cout << endl;
  }
  return 0;
}