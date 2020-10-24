#include <iostream>
using namespace std;

int main()
{
  //Shift operators
  // '<<' Left shift
  // '>>' Right shift

  //Left shift '<<'
  //It means shifting the bit to left by discarding the leftmost bit and adding zero to the right
  // 5<<1 means 000101 -> 001010
  // 5<<2 means 000101 -> 010100
  //Left shifting basically means multiplying by two

  // a<<b = a* pow(2,b)
  int x = 5 << 1;
  cout << "5<<1 is " << x << endl;
  x = 5 << 2;
  cout << "5<<2 is " << x << endl;

  //Right shift '>>'
  //It does opposite of left shift
  //It divides a number by some power of 2
  //5>>1 means 000101 -> 000010
  //5>>2 means 000101 -> 000001

  // a>>b = a/ pow(2,b)
  x = 10 >> 1;
  cout << "10>>1 is: " << x << endl;
  x = 10 >> 2;
  cout << "10>>2 is: " << x << endl;
  return 0;
}