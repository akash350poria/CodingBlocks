#include <iostream>

using namespace std;

void antiSpiralPrintMatrix(int a[][100], int m, int n)
{
  //Pointers
  int startRow = 0;
  int startCol = 0;
  int endRow = m - 1;
  int endCol = n - 1;

  while (startRow <= endRow && startCol <= endCol)
  {
    //Print first col
    for (int i = startRow; i <= endRow; i++)
    {
      cout << a[i][startCol] << ", ";
    }
    startCol++;
    //Print end row
    for (int i = startCol; i <= endCol; i++)
    {
      cout << a[endRow][i] << ", ";
    }
    endRow--;
    //Print end col
    for (int i = endRow; i >= startRow; i--)
    {
      cout << a[i][endCol] << ", ";
    }
    endCol--;

    //Print first row
    for (int i = endCol; i >= startCol; i--)
    {
      cout << a[startRow][i] << ", ";
    }
    startRow++;
  }
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
  cout << "REVERSE SPIRAL PRINT: " << endl;
  antiSpiralPrintMatrix(b, r, c);
  return 0;
}