#include <stdio.h>


// float squarearea(float side);
// float circlearea(float radius);
int main() {
    int i, j, a=1, b=1;
    for(i=5;i>=1;i--)
    {
        if(i%2==1)
        {
            for(j=i;j>=1;j--)
            {
                printf("%d ", a);
                a++;
            }
        }else{
            for(j=i;j>=1;j--)
            {
                printf("%c ", b+64);
                b++;
            }
        }
        printf("\n");
       
    }

    return 0;
 }



1 2 3 4 5 
A B C D 
6 7 8 
E F 
9 