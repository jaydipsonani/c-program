
#include <stdio.h>

int main()
{
   int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            if(i==j)
            {
                printf("*");
            }else
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

5432*
543*1
54*21
5*321
*4321