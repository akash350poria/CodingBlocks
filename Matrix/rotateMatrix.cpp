#include <iostream>
#include <algorithm>

using namespace std;

//To rotate the matrix:
//1. Reverse each row
//2. Take transpose

void rotateMatrixSTL(int a[100][100], int n)
{
  //rotate each row
  for (int row = 0; row < n; row++)
  {
    //reverse() takes two arguments
    //starting of container
    //end of container (not included)
    //reverse() defined in <algorithm>
    for (int i = 0; i < n; i++)
    {
      reverse(a[i], a[i] + n);
      //a is 2D array
      //a[i] points to address of each row
    }
  }

  //transpose of matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i < j)
      {
        swap(a[i][j], a[j][i]);
      }
    }
  }

  //print rotated matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

void rotateMatrix(int a[100][100], int n)
{
  //rotate each row
  int startCol, endCol;
  for (int row = 0; row < n; row++)
  {
    startCol = 0;
    endCol = n - 1;
    while (startCol < endCol)
    {
      swap(a[row][startCol], a[row][endCol]);
      startCol++;
      endCol--;
    }
  }

  //transpose of matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i < j)
      {
        swap(a[i][j], a[j][i]);
      }
    }
  }

  //print rotated matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter size of matrix: ";
  cin >> n;
  int b[100][100];
  int value = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      b[i][j] = value++;
    }
  }
  cout << "Matrix is" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Using normal swap" << endl;
  rotateMatrix(b, n);
  //cout << "Using stl revsere()" << endl;
  //rotateMatrixSTL(b, n);
  return 0;
}