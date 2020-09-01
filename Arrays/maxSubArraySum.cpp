#include <iostream>
using namespace std;

void maxSubArraySum(int arr[], int n)
{
  int currentSum = 0;
  int maxSum = 0;
  int startIndex = -1, endIndex = -1;
  //loop to iterate over each element
  for (int i = 0; i < n; i++)
  {
    //loop to generate length of subarray
    for (int j = i; j < n; j++)
    {
      //loop to print all elements between [i,j]
      currentSum = 0;
      for (int k = i; k <= j; k++)
      {
        currentSum = currentSum + arr[k];
      }
      if (currentSum > maxSum)
      {
        maxSum = currentSum;
        startIndex = i;
        endIndex = j;
      }
    }
  }
  cout << "Max sub array sum is: " << maxSum << endl;
  for (int i = startIndex; i <= endIndex; i++)
  {
    cout << arr[i] << ",";
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
  maxSubArraySum(a, n);
  return 0;
}