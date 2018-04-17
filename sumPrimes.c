#include <stdio.h>
#include <cs50.h>
#include <math.h>

int checkPrime(num){
  for (int i = 2; i<num; i++){
    if (num % i ==0){
      return false;
    }
  }
  return true;
}
int sumPrimes(input) {
  int sum = 0;
  for (int i=2; i<=input; i++){
    if (checkPrime(i)){
      sum += i;
    }
  }
  printf("%i\n", sum);
  return sum;
}



int main(int argc, string argv[])
{
    int input;

    if (argc ==2)
    {
        input = atoi(argv[1]);
        sumPrimes(input);
    }
    return 0;
}