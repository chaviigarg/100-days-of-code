#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, flag = 1;

    fgets(str, 100, stdin);

    while(str[length] != '\0' && str[length] != '\n')
        length++;

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length-i-1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}