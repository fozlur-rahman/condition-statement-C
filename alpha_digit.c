#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        if (x >= 65 && x <= 90)
        {
            printf("ALPHA\nIS CAPITAL\n");
        }
        else
        {
            printf("ALPHA\nIS SMALL\n");
        }
    }

    return 0;
}