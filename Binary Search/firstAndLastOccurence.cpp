#include <algorithm>
#include <iostream>
using namespace std;

/*
To find the first and last occurence of a key we use binary search
Check if middle element is key, if yes store that value
To find the first occurence once key is found we check the right side of the array
And for the last occurence we check the left half of the array
*/

int firstOccurence(int a[], int n, int key)
{
  int start = 0, end = n - 1;
  int mid;
  int ans = -1; //If key is not found -1 is returned
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (key == a[mid])
    {
      ans = mid;     //Store index
      end = mid - 1; //To check in the right half
    }
    else if (a[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}
int lastOccurence(int a[], int n, int key)
{
  int start = 0, end = n - 1;
  int mid;
  int ans = -1; //If key is not found -1 is returned
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (key == a[mid])
    {
      ans = mid;       //Store index
      start = mid + 1; //To check in the left half
    }
    else if (a[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  cout << "Array is: ";
  for (auto x : a)
  {
    cout << x << " ";
  }
  int key;
  cout << "\nEnter key: ";
  cin >> key;
  int fOccur, lOccur;
  fOccur = firstOccurence(a, n, key);
  lOccur = lastOccurence(a, n, key);
  cout << "First Occurence of " << key << " is " << fOccur;
  cout << "\nLast Occurence of " << key << " is " << lOccur;
  return 0;
}