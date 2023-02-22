#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - cobination of single digits
 * Return: Always 0 (Success)
 */

int main(void)
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main()
{
    int num[N];

    int temp;
    int i, n, j;
    
    num[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    for (i = 0 ; i < n; i++)
    for (j = 1; j <= n; j++) 
    {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    return 0;
}	
