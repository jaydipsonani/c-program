
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        
            // Print corner element
            if((i==1 || i==5) && (j==1 || j==5))
            {
                printf("0");
            }
            else if(i==1 || i==5 || j==1 || j==5)
            {
                // Print edge
                printf("1");
            }
            else
            {
                // Print center
                printf("0");
            }
        }
        
        printf("\n");
        
    }    
    return 0;
}


01110
10001
10001
10001
01110