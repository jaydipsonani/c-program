
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            if(i%2 == 0)
            {
                if(j%2==0)
                {
                    printf("1");
                }else
                {
                    printf("0");
                }
                
            }else
            {
                if(i%2==1)
                {
                    if(j%2==1)
                    {
                    printf("1");
                    }else
                    {
                        printf("0");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}



10101
01010
10101
01010
10101
