#include <iostream>
using namespace std;

int main()
{
  //In heap memory you could only declare linear arrays
  //Combine linear arrays to form 2D array
  //Since each array would have random address
  //Hence you store address of each row in an array of pointers
  //You also have a pointer to array of pointers, as even arrays of pointers is declared in heap
  int **arr;
  int r, c;
  cout << "Enter number of rows and columns: ";
  cin >> r >> c;
  //Created arrays of pointers
  arr = new int *[r];
  //Point each element to a row of matrix
  for (int i = 0; i < r; i++)
  {
    arr[i] = new int[c];
  }
  //Print the matrix
  int value = 1;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      arr[i][j] = value++;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  //Free memeory
  for (int i = 0; i < r; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}