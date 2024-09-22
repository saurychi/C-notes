#include <stdio.h>
#include <string.h>

typedef char String[100];

void censor(char str[], int len, String swearWords[]);

int main()
{
    char str[100];
    String swearWords[5] = {"fk", "sk", "ct", "st", "dk"};

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int len = strlen(str) + 1;
    censor(str, len, swearWords);

    printf("\ncensored words: %s", str);

    return 0;
}

void censor(char str[], int len, String swearWords[])
{
    int start_idx = 0, end_idx = 0, count = 0, start_flag = 0;
    char curr_word[5];
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            count++;
            if(start_flag == 0){
                start_idx = i;
                start_flag = 1;
            }
            curr_word[count - 1] = str[i];
        }
        else
        {
            end_idx = i - 1;

            for (int j = 0; j < 5; j++)
            {
                if ((curr_word[0] == swearWords[j][0]) && (curr_word[count - 1] == swearWords[j][1]) && (count == 4))
                {
                    str[start_idx + 1] = '*';
                    str[end_idx - 1] = '*';
                }
            }
            start_flag = 0;
            start_idx = 0;
            end_idx = 0;
            for (int j = 0; j < count; j++)
            {
                curr_word[j] = '\0';
            }
            count = 0;
        }
    }
}
