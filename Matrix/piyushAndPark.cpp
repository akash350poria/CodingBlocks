//Piyush and Park problem
//hack.codingblocks.com/app/practice/6/p/55

#include <iostream>
using namespace std;

void magicalPark(char a[][100], int m, int n, int k, int s)
{
  //bool to keep a track to determine whether he can come out of the park or not
  //assume he can get out of the park
  bool success = true;

  //iterate over matrix
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      //fetch current character
      char ch = a[i][j];

      //check for threshold energy
      if (s < k)
      {
        success = false;
        break;
        //print "No" and return
      }

      //check value of current character
      if (ch == '*')
      {
        //increase by 5 if *
        s += 5;
      }
      else if (ch == '.')
      {
        //decrease by 2 if .
        s = s - 2;
      }
      else
      {
        //go to next row if #
        break;
      }

      //you loose 1 point when you move left right for each step except when you are at the last column and move to new row
      if (j != n - 1)
      {
        s--;
      }
    }
  }
  if (success)
  {
    cout << "Yes" << endl;
    cout << s << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

int main()
{
  int m, n, k, s;
  cin >> m >> n >> k >> s;
  char park[100][100];
  //Take input
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> park[i][j];
    }
  }
  magicalPark(park, m, n, k, s);
  return 0;
}