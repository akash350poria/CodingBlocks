#include <iostream>
using namespace std;

void subMatrixSum(int a[][100], int m, int n)
{
  int sum = 0;
  int subMatixSum = 0;
  for (int li = 0; li < m; li++)
  {
    for (int lj = 0; lj < n; lj++)
    {
      for (int ri = li; ri < m; ri++)
      {
        for (int rj = lj; rj < n; rj++)
        {
          subMatixSum = a[ri][rj];
          if ((li - 1) >= 0 and (lj - 1) >= 0)
          {
            subMatixSum = subMatixSum + a[li - 1][lj - 1];
          }
          if ((lj - 1) >= 0)
          {
            subMatixSum -= a[ri][lj - 1];
          }
          if ((li - 1) >= 0)
          {
            subMatixSum -= a[li - 1][rj];
          }
          //subMatixSum = a[ri][rj] + a[li - 1][lj - 1] - a[li - 1][lj + 1] - a[li][lj - 1];
          sum = sum + subMatixSum;
        }
      }
    }
  }
  cout << "Sub matix sum is: ";
  cout << sum;
}

void cummulativeSumMatrix(int a[][100], int m, int n)
{
  int cMatrix[100][100] = {0};
  for (int i = 0; i < m; i++)
  {
    cMatrix[i][0] = a[i][0];
  }
  //Add columns
  for (int i = 0; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      cMatrix[i][j] = cMatrix[i][j - 1] + a[i][j];
    }
  }
  //Add rows
  for (int j = 0; j < n; j++)
  {
    for (int i = 1; i < m; i++)
    {
      cMatrix[i][j] += cMatrix[i - 1][j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << cMatrix[i][j] << " ";
    }
    cout << endl;
  }
  subMatrixSum(cMatrix, m, n);
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
  cout << "Cummulative matrix is: " << endl;
  cummulativeSumMatrix(b, r, c);
  return 0;
}