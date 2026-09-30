#include <stdio.h>
int main()
{

    int i,j,n,num,k;
    printf("enter no.of rows in pascal tringle:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        num=1;
        for(j=1;j<=i;j++)
        {
            printf(" %d",num);
            num=num*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}
