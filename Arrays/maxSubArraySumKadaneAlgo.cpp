#include <iostream>
using namespace std;

void maxSubArraySumKadane(int arr[], int n)
{
  int currentSum = 0;
  int maxSum = 0;
  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    if (currentSum < 0)
    {
      currentSum = 0;
    }
    maxSum = max(maxSum, currentSum);
  }
  cout << "Max sub array sum is: " << maxSum;
}

int main()
{
  int n;
  cout << "ENter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  maxSubArraySumKadane(a, n);
  return 0;
}