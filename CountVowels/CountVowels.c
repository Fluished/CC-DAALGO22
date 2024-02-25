#include <stdio.h>
#include <string.h>

int countVowels(char *str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }
    return count;
}

int main()
{
    char str[9999];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Number of vowels in the string: %d", countVowels(str));
    return 0;
}