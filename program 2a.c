#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter the values of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0)

    {

        printf("roots are imaginary");
    }
    else if(d==0)
    {
        r1=-b/2*a;
    printf("roots are equal");
    }
    else
    {
        d=(-b+sqrt(d)/2*a);
        d=(-b-sqrt(d)/2*a);
        printf("%f%f",r1,r2);

    }
}
