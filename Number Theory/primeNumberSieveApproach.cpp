#include <iostream>
#include <vector>
using namespace std;

/*
In Sieve approach we build an array of prime numbers
Say we have n=20
So we create an array p=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
Elements are used as index, so created an array of size=n+1

Lets assume that all numbers are prime initially by setting them 1

Now lets start from 2, we would mark all multiples of 2 as zero (not prime)

Then we would go to next element, if its not set that means its not prime we move to the next element
If the element is set, that means the number is prime and we would mark all the multiples of that element (ith) equal to zero
for(int i=2;i<=n;i++){
  if(p[i]==1){
    for(int j=2*i;j<=n;j+=i){
      p[j]=0;
    }
  }
}

Now the above loop could be optimised futher.
We could start from j=i*i as if a number is not prime then that means the number i already has a factor which is less than sqrt(i), and we have already traversed that part.
Hence we could skip it and start from i*i
for(int i=2;i<=n;i++){
  if(p[i]==1){
    for(int j=i*i;j<=n;j+=i){
      p[j]=0;
    }
  }
}

Handle corner cases
All except 2 all evens number would be set zero
0 and 1 would also be set to zero

1st optimisation: Set all evens zero
2nd optimisation: If element is set as one, set its mupltiples to zero
3rd optimisation: While setting multiples of a num say 'i' to zero, instead of starting from '2*i' start loop from 'i*i' 

This method fails for element greater than 10^7
*/

long long n = 10000000;
vector<int> p(n + 1, 0);

void sievePrime()
{
  //Set all odd numbers initially to one
  for (long long i = 3; i <= n; i += 2)
  {
    p[i] = 1;
  }

  //Check if number is set
  for (long long i = 3; i <= n; i += 2)
  {
    //If set, set it multiples to zero
    if (p[i] == 1)
    {
      for (long long j = i * i; j <= n; j += i)
      {
        p[j] = 0;
      }
    }
  }

  //Corner cases
  //Set 2 to one
  p[2] = 1;
}

int main()
{
  sievePrime();
  long long num;
  cout << "Enter a number: ";
  cin >> num;
  cout << "Prime numbers less than or equal to " << num << " are: " << endl;
  for (long long i = 2; i <= num; i++)
  {
    if (p[i] == 1)
    {
      cout << i << " ";
    }
  }
  return 0;
}