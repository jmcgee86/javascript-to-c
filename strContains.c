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

int strContains(string str1, string str2)
{
    int match = 0;
    int i = 0;
    int length1 = 0;
    int k = 0;
    int length2 = 0;
    int l = 0;

    while(str1[k] !='\0')
    {
        length1++;
        k++;
    }

    while(str2[l] !='\0')
    {
        length2++;
        l++;
    }


    while (str2[i] != '\0')
    {
        for (int j = 0; j <= length1; j++)
        {
            if (str2[i] == str1[j])
            {
                match++;
                if (match == length2)
                {
                    printf("The string exists\n");
                    return 1;
                }
                else
                    {
                         i++;
                    }
            }
            else
            {
                match = 0;
            }
        }
        i++;
    }

    printf("The string does not exist\n");
    return 0;
}

int main(int argc, char* argv[])
{
    if (argc == 3)
    {
        string str1 = argv[1];
        string str2 = argv[2];
        strContains(str1, str2);
    }
return 0;
}