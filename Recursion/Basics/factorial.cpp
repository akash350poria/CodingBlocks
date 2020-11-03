/*
Recursion is method is a which problem is divided into smaller instances of the same problem

Each recursive alogrithm has:
1. Base case
2. Recursive call (towards base case)

Method to write a recursive algorthim:
1. Figure out base case
2. Assume that sub problems can be solved by recursion
3. Using sub problems write the answer for current problem

Anything written after recursive calls is executed in Bottom to Top
Anything written before recursive calls is executed in Top to Bottom 
*/

/*
5!=5*4! => 4!=4*3! => 3!=3*2! => 2!= 2*1! => 1!= 1*0! => 0!=1
n!=n*(n-1)!
fact(n)=n*fact(n-1)
*/

#include <iostream>
using namespace std;

int fact(int n)
{
  //base case
  if (n == 0)
  {
    return 1;
  }

  //Recursive call
  return n * fact(n - 1);
}

int main()
{
  int n;
  cin >> n;
  cout << fact(n);
  return 0;
}
