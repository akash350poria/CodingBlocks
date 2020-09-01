#include <iostream>
using namespace std;

void subArrays(int arr[], int n)
{
  cout << "Sub arrays are:" << endl;
  //loop to iterate over each element
  for (int i = 0; i < n; i++)
  {
    //loop to generate length of subarray
    for (int j = i; j < n; j++)
    {
      //loop to print all elements between [i,j]
      for (int k = i; k <= j; k++)
        cout << arr[k] << ' ';
      cout << ",";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  subArrays(a, n);
  return 0;
}