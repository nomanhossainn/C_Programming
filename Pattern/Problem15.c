#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 ||j==1||i==n||j==n || j==n-i+1||i==j)  
            {  
                printf("* ");
            }  
            else  
            {  
                printf("  ");  
            }                   
        }
        printf("\n");
    }
    return 0;
}