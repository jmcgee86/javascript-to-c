// If the 2nd string does not exist inside the first stringz then print:
// “The string does not exist”
// Then return the integer 0
// If the 2nd string exists inside the first string print:
// “The string exists”
// Then return the integer 1
// Ignore case.
// Hacker level:
// If the string contains the word more than once print:
// “This string is full of the word”
// Then return the integer 2

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int strContains(str1, str2)
{
    int match = 0;

    for (int i = 0; i< strlen(str2); i++)
    {
        for (int j; j <strlen(str1); j++)
        if str1[i] == str2[j]
        {
            match++// check if
        }
    }
}

int main(int argc, char* argv[])
{
    char* str1[LENGTH + 1];
    char* str2[LENGTH + 1];
    if (argc == 3)
    {
        char* str1 = argv[1];
        char* str2 = argv[2];
    }
}