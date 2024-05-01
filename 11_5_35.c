
#include <stdio.h>

int main()
{
    int i,j,k=1;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {

            printf("%d",j);
        }
        for(j=i;j>=2;j--)
        {
            printf("%d",i);
        }
        
        printf("\n");
        
    }    
    return 0;
}


55555
54444
54333
54322
54321