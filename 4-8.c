#include <stdio.h>
int main()
{
    double PI=3.14;
    double r,h;
    double C1,Sa,Sb,Va,Vb;
    scanf("%lf%lf",&r,&h);
    C1=2*r*PI;
    Sa=PI*r*r;
    Sb=4*PI*r*r;
    Va=PI*r*r*r*4/3;
    Vb=Sa*h;
    printf("C1=%.2lf\n",C1);
    printf("Sa=%.2lf\n",Sa);
    printf("Sb=%.2lf\n",Sb);
    printf("Va=%.2lf\n",Va);
    printf("Vb=%.2lf\n",Vb);
    return 0;
}
