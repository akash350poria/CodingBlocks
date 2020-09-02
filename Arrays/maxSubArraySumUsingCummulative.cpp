#include <iostream>
using namespace std;

void maxSubArraySumCummulative(int arr[], int n)
{
  //Create a new array for cummulative sum;
  int cSum[n] = {arr[0]};
  int currentSum = 0;
  int maxSum = 0;
  int startIndex = -1;
  int endIndex = -1;
  for (int i = 1; i < n; i++)
  {
    cSum[i] = arr[i] + cSum[i - 1];
  }
  for (int i = 0; i < n; i++)
  {
    currentSum = 0;
    for (int j = i; j < n; j++)
    {
      currentSum = cSum[j] - cSum[i - 1];
      if (currentSum > maxSum)
      {
        maxSum = currentSum;
        startIndex = i;
        endIndex = j;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << cSum[i] << ",";
  }
  cout << endl
       << "Max sub array sum is: " << maxSum << endl;
  cout << "Sub array is: ";
  for (int i = startIndex; i <= endIndex; i++)
    cout << arr[i] << ",";
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
  maxSubArraySumCummulative(a, n);
  return 0;
}