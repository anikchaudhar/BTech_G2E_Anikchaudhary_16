#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf ("enter principle, rate ,time= ");
    scanf ("%f %f %f " , &p , &r ,&t);
    si=(p*r*t)/100;
    printf("simple interest=f",si);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("\ncompound interest=%f")


}
