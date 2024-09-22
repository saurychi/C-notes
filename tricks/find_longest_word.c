#include <stdio.h>
#include <string.h>

void get_longest(char str[], int len);

int main()
{

    char str[100];

    printf("Enter string: ");
    fgets(str, 100, stdin);

    int len = strlen(str) + 1;
    get_longest(str, len);

    return 0;
}

void get_longest(char str[], int len)
{
    int count = 0, longest = 0;
    char curr_word[100], long_word[100] = "";
    for (int i = 0; i < len ; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            count++;
            curr_word[count - 1] = str[i];
        }
        else
        {
            if (count > longest)
            {
                longest = count;
                strcpy(long_word, curr_word);
                long_word[longest] = '\0';
            }
            count = 0;
            for (int j = 0; j < count; j++)
            {
                curr_word[j] = '\0';
            }
        }
    }

    printf("%s", long_word);
}
