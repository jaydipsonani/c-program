
#include <stdio.h>

int main()
{
    int rows, cal = 1, k, i, j;
    for(i=0; i<=5; i++)            
    {
        for(k=5; k > i; k--)  
            printf("  ");

        for(j=0; j <= i; j++)     
        {
            if (j==0 || i==0)  
            {
                cal = 1;
            }
            else
            {
                cal = cal*(i-j+1)/j; 
            }
            printf("%d   ", cal);
        }
        printf("\n");
    }

    return 0;
}


	    1   
        1   1   
      1   2   1   
    1   3   3   1   
  1   4   6   4   1   
1   5   10   10   5   1