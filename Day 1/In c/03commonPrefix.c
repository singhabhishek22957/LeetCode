#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strSize)
{
    if (strSize == 0)
    {
        printf("empty string");
    }
    char *prefix = strs[0];
    int prefixLength = strlen(prefix);

    for (int i = 1; i < strSize; i++)
    {
        int j = 0;
        while (j < prefixLength && strs[i][j] != '\0' && strs[i][j] == prefix[j])
        {
            j++;
        }

        prefixLength = j;
        if (prefixLength == 0)
        {
            return "";
        }
    }

    char *result = (char *)malloc((prefixLength + 1) * sizeof(char));
    strncpy(result, prefix, prefixLength);
    result[prefixLength] = '\0';

    return result;
}

int main()
{

    char *arr[] = {"flower", "float", "flay", "fly"};
    char *str = longestCommonPrefix(arr, 4);
    printf("%s",str);

    return 0;
}