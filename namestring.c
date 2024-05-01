
#include <stdio.h>
#include <string.h>

int main()
{
char str[]= "JAYDIP";
int i, j, length;
length = strlen(str);
for(i=5;i<length;i++)
{
    for(j=0;j<=5;j++)
    {
        printf("%c",str[j]);
    }
    printf("\n");
}

    return 0;
}



JAYDIP