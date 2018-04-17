#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumFibs(input)
{


int previousFib = 0;
int currentFib = 1;
int totalFib = 0;
  while(currentFib <= input){
    if (currentFib %2 !=0){
      totalFib += currentFib;
    currentFib += previousFib;
    previousFib = currentFib - previousFib;
    }else{
    currentFib += previousFib;
    previousFib = currentFib - previousFib;
    }
  }
  printf("%i\n", totalFib);
  return totalFib;
}


int main(int argc, string argv[])
{
    int input;

    if (argc ==2)
    {
        input = atoi(argv[1]);
        sumFibs(input);
    }
    return 0;
}