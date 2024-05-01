
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5+i;j++)
        {

            printf("%d",j);
        }
        
        printf("\n");
        
    }    
    return 0;
}


12345
23456
34567
45678
56789