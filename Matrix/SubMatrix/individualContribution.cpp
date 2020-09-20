//Here contribtion of each individual is calculated and added to sum
//Individaul contribution=a[i][j]*countofSubtMatrix
//countSubMatix=Number of submatrices that element is part of

#include <iostream>
using namespace std;

void subSumMatrixUsingIndiContri(int a[][100], int m, int n)
{
  int iSum = 0;
  int sum = 0;
  int topLeft = 0;
  int bottomRight = 0;
  int numOfSubMatrices = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((i + 1) <= m and (j + 1) <= n)
      {
        topLeft = (i + 1) * (j + 1);
      }
      bottomRight = (m - i) * (n - j);
      //cout << "TL: " << topLeft << ",";
      //cout << "BR: " << bottomRight << ",";
      numOfSubMatrices = topLeft * bottomRight;
      //cout << "iS: " << numOfSubMatrices << endl;
      iSum = a[i][j] * numOfSubMatrices;
      sum += iSum;
    }
  }
  cout << "Sub matrix sum is: " << sum;
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
  subSumMatrixUsingIndiContri(b, r, c);
  return 0;
}