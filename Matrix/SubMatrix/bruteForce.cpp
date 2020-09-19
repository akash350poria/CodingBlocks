#include <iostream>
using namespace std;

int subMatrixSum(int a[100][100], int m, int n)
{
  //Extract all sub matrix(rectangles)
  //Each sub matrix could be respresented using Top Left and Bottom Right coordinates
  //Add elements to get sum
  int sum = 0;

  //Get top left coordinate
  for (int li = 0; li < m; li++)
  {
    for (int lj = 0; lj < n; lj++)
    {
      //Get bottom right coordinates
      for (int ri = li; ri < m; ri++)
      {
        for (int rj = lj; rj < n; rj++)
        {
          //sum of elements
          for (int i = li; i <= ri; i++)
          {
            for (int j = lj; j <= rj; j++)
            {
              sum = sum + a[i][j];
            }
          }
        }
      }
    }
  }
  //Return sum
  return sum;
}

int main()
{
  int r, c;
  cout << "Enter number of rows and columns: ";
  cin >> r >> c;
  int b[100][100] = {0};
  int value = 1;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      b[i][j] = value++;
    }
  }
  cout << "Matrix is" << endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  int result = subMatrixSum(b, r, c);
  cout << "Sum of all submatrix is: " << result;
  return 0;
}