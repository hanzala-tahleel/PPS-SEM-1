#include <stdio.h>
int main()
{
    int i,m,n;
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=m;i<=n;i++)
    if(i%2==0)
    {
        printf("%d",i);
    }
    return 0;

}
