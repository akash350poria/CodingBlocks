#include <iostream>
using namespace std;

void maxSubMatrixSum(int a[][100], int m, int n)
{
  int revCMatrix[100][100] = {0};
  int maxSum = 0;
  for (int i = m - 1; i >= 0; i--)
  {
    revCMatrix[i][n - 1] = a[i][n - 1];
  }
  //Add columns
  for (int i = m - 1; i >= 0; i--)
  {
    for (int j = n - 2; j >= 0; j--)
    {
      revCMatrix[i][j] = revCMatrix[i][j + 1] + a[i][j];
    }
  }
  //Add rows
  for (int j = n - 1; j >= 0; j--)
  {
    for (int i = m - 2; i >= 0; i--)
    {
      revCMatrix[i][j] += revCMatrix[i + 1][j];
    }
  }
  //Print revserse cummulative sum matrix
  cout << "Reverse cummulative sum matrix is: " << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << revCMatrix[i][j] << " ";
    }
    cout << endl;
  }
  //Find max sum
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      maxSum = max(maxSum, revCMatrix[i][j]);
    }
  }
  cout << "Max sub matrix sum is: " << maxSum;
}

int main()
{
  int r, c;
  cout << "Enter number of rows and columns: ";
  cin >> r >> c;
  int b[100][100] = {0};
  int value = -2;
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
  maxSubMatrixSum(b, r, c);
  return 0;
}