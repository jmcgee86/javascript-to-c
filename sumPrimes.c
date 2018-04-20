#include <stdio.h>
#include <cs50.h>
#include <math.h>

bool checkPrime(int num){
  for (int i = 2, max = num / 2; i <= max; i++){
    if (num % i ==0){
      return false;
    }
  }
  return true;
}
int sumPrimes(input) {
  int sum = 2;
  for (int i=3; i<=input; i += 2){
    if (checkPrime(i)){
      sum += i;
    }
  }
  //printf("%i\n", sum);
  return sum;
}

int main(int argc, string argv[])
{
    int input;

    if (argc ==2)
    {
        input = atoi(argv[1]);
        printf("%i\n", sumPrimes(input));
    }
    return 0;
}