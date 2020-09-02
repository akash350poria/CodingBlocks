#include <iostream>
#include <algorithm>
using namespace std;

void findPair(int arr[], int n, int key)
{
  //sort the array
  sort(arr, arr + n);
  int i = 0, j = n - 1;
  int flag = 0;
  while (i <= j)
  {
    if (arr[i] + arr[j] == key)
    {
      cout << arr[i] << " and " << arr[j] << " make sum equal to " << key << endl;
      i++;
      j--;
      flag = 1;
    }
    else if (arr[i] + arr[j] < key)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  if (flag == 0)
  {
    cout << "No such pair exist";
  }
}

int main()
{
  int n, key;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter key: ";
  cin >> key;
  findPair(a, n, key);
  return 0;
}