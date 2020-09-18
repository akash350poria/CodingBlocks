#include <iostream>

using namespace std;

void spiralPrintMatrix(int a[][100], int m, int n)
{
  //Pointers
  int startRow = 0;
  int startCol = 0;
  int endRow = m - 1;
  int endCol = n - 1;

  while (startRow <= endRow and startCol <= endCol)
  {
    //Print first row
    for (int i = startCol; i <= endCol; i++)
    {
      cout << a[startRow][i] << ",";
    }
    startRow++;

    //Print end column
    for (int i = startRow; i <= endRow; i++)
    {
      cout << a[i][endCol] << ",";
    }
    endCol--;

    //Print end row
    if (startRow < endRow)
    {
      for (int i = endCol; i >= startCol; i--)
      {
        cout << a[endRow][i] << ",";
      }
      endRow--;
    }

    //Print start column
    if (startCol < endCol)
    {
      for (int i = endRow; i >= startRow; i--)
      {
        cout << a[i][startCol] << ",";
      }
      startCol++;
    }
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
  cout << "SPIRAL PRINT: " << endl;
  spiralPrintMatrix(b, r, c);
  return 0;
}