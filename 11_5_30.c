
#include <stdio.h>

int main()
{
   int i,j,k;
    for(i=9;i>=1;i--)
    {
        for(j=i;j<=9;j++)
        {
            printf("%d",j);
        }
        printf("0");
        for(j=9;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


909
89098
7890987
678909876
56789098765
4567890987654
345678909876543
23456789098765432
1234567890987654321