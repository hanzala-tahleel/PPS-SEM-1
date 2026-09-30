#include<stdio.h>
int main()
{
    int i,c,n,j;
    printf("enter the number to generate primr numbers");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {

        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if (c==2)
            printf("%d\t",i);
    }
    return 0;
}
