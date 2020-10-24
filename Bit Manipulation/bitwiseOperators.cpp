#include <iostream>
using namespace std;

int main()
{
  //AND, OR and XOR are binary operators, i.e, they need two operands
  //Bitwise operations on two numbers if performed on bit level

  // AND operator '&'
  // 0 & 0 = 0
  // 0 & 1 = 0
  // 1 & 0 = 0
  // 1 & 1 = 1
  int x = 5;     //101
  int y = 6;     //110
  int z = x & y; //100=4
  cout << "AND '&' of 5 and 6: " << z << endl;

  // OR operator '|'
  // 0 | 0 = 0
  // 0 | 1 = 1
  // 1 | 0 = 1
  // 1 | 1 = 1
  z = x | y; // 101|110 = 111 = 7
  cout << "OR '|' or 5 and 6: " << z << endl;

  // XOR operator '^'
  //Used to check if exaclty one bit is 1
  // 0 ^ 0 = 0
  // 0 ^ 1 = 1
  // 1 ^ 0 = 1
  // 1 ^ 1 = 0

  //XOR of a number with itself gives zero
  // x ^ x = 0

  //XOR of a number with zero gives number
  // x ^ 0 = x

  z = x ^ y;
  cout << "XOR '^' of 5 and 6 is: " << z << endl;
  z = x ^ x;
  cout << "XOR '^' of 5 and 5 is: " << z << endl;
  z = x ^ 0;
  cout << "XOR '^' of 5 and 0 is: " << z << endl;

  //NOT operator '~'
  //It flips the bit
  // ~0 = 1
  // ~1 = 0
  z = ~x;
  cout << "NOT '~' of 5 is: " << z;
  return 0;
}