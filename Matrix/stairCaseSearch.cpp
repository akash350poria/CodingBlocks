#include <iostream>
using namespace std;

//STAIR CASE APPROACH => O(n) time complexity

void stairCaseSearch(int a[100][100], int m, int n, int key)
{
  int startRow, startCol;
  startRow = 0;
  startCol = n - 1;
  while (startRow <= m and startCol >= 0)
  {
    if (a[startRow][startCol] == key)
    {
      cout << "Element found at index " << startRow << "," << startCol;
      return;
    }
    else if (a[startRow][startCol] < key)
    {
      startRow++;
    }
    else
    {
      startCol--;
    }
  }
  cout << "No such element exists";
}

int main()
{
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  int a[100][100];
  int value = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      a[i][j] = value++;
    }
  }
  cout << "Matrix is: " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  int element;
  cout << "Enter element to search for: ";
  cin >> element;
  stairCaseSearch(a, rows, cols, element);
  return 0;
}