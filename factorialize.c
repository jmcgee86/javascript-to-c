#include <stdio.h>
#include <cs50.h>
#include <math.h>


long long factorialize(input)
{
    long long num;
    for (int i = 1; input > 0; input--)
    {
        i *= input;
        num = i;
    }
    printf("%lld\n", num);
    return num;
}

int main(int argc, string argv[])
{
    int input;

    if (argc ==2)
    {
        input = atoi(argv[1]);
        factorialize(input);
    }

    return 0;

}