#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i, j;
    for (i = n; i >= 1; i--) 
    {
        for (j = n; j >= 1; j--) 
        {
            if (j > i) 
            {
                printf("%d ", j);
            } 
            else 
            {
                printf("%d ", i);
            }
        }
        for (j = 2; j <= n; j++) 
        {
            if (j > i) 
            {
                printf("%d ", j);
            }
            else 
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) 
    {
        for (j = n; j >= 1; j--) 
        {
            if (j > i) 
            {
                printf("%d ", j);
            } 
            else 
            {
                printf("%d ", i);
            }
        }
        for (j = 2; j <= n; j++) 
        {
            if (j > i) 
            {
                printf("%d ", j);
            } 
            else 
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
