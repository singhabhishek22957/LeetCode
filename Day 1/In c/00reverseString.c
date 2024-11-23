#include <stdio.h>
#include <string.h>

int romanToInt(char *str)
{
    int roman = 0;
    int left = 0;
    int right = strlen(str) - 1;
    int i = 1, v = 5, x = 10, l = 50, c = 100, d = 500, m = 1000;
    while (0 <= right)
    {
        if (str[right] == 'I')
            roman += i;
        else if (str[right] == 'V')
        {
            if (str[right - 1] == 'I')
            {
                roman += 4;
                right--;
            }
            else
                roman += 5;
        }
        else if (str[right] == 'X')
        {
            if (str[right - 1] == 'I')
            {
                roman += 9;
                right--;
            }
            else if (str[right - 1] == 'V')
                roman += 4;
            else
                roman += 10;
        }
        else if (str[right] == 'L')
        {
            if (str[right - 1] == 'X')
            {
                roman += 40;
                right--;
            }
            else
                roman += 50;
        }
        else if (str[right] == 'C')
        {
            if (str[right - 1] == 'X')
            {
                roman += 90;
                right--;
            }
            else
                roman += 100;
        }
        else if (str[right] == 'D')
        {
            if (str[right - 1] == 'C')
            {
                roman += 400;
                right--;
            }
            else
                roman += 500;
        }
        else if (str[right] == 'M')
        {
            if (str[right - 1] == 'C')
            {
                roman += 900;
                right--;
            }
            else
                roman += 1000;
        }

        right--;
    }

    return roman;
}

int main()
{

    char str[100];
    printf("enter string: ");
    gets(str);
    int x = romanToInt(str);
    printf("reversed string is %s", str);
    printf("\n%d", x);

    return 0;
}