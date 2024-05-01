/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[2][2],i,j, trans[2][2];
    printf("enter array: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix element = \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            trans[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("transpose element = \n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

return 0;
}
