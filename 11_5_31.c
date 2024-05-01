

#include <stdio.h>

int main()
{
    int i, j, k=1,s;
for(i=1;i<=5;i++)
{
    for(s=4;s>=i;s--)
    {
        printf("   ");
    }
    for(j=1;j<=i*2-1;j++)
    {
        printf("%3d ",k*k);
        k++;
        
    }
    printf("\n");
}

    return 0;
}

			1 
           4   9  16 
       25  36  49  64  81 
   100 121 144 169 196 225 256 
289 324 361 400 441 484 529 576 625 