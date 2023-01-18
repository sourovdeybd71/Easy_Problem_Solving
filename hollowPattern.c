/**
 * C program to print given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;
    int k = 1;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        
        for(j=i; j<=N; j++)
        {
            if(i==1 || i==N || j==i)
                printf("%d", j);
            else
                printf(" ");
        }

        
        k = j - 2;
        for(j=1; j<i; j++, k--)
        {
            if(i==1 || i==N || j==i-1)
                printf("%d",N);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}