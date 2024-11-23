#include <stdio.h>
#include <string.h>

int romanToInt(char *str)
{
    int roman = 0;
    int prev = 0;
    int current = 0;

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        switch (str[i])
        {
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;
        default:
            current = 0;
            return -1;
            break;
        }
        if (current < prev)
        {
            roman -= current;
        }
        else
        {
            roman += current;
        }
        prev = current;
    }
    return roman;
}

int main()
{

    printf(" \n");

    printf(" %d\n", romanToInt("IIII"));

    return 0;
}