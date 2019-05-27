#include <stdio.h>
int main()
{
    int i,a,b,c;
    long int d=0,e=0;
    double f=0,x;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=a;i++){
        d=i+d;
    }
    for(i=1;i<=b;i++){
        e=i*i+e;
    }
    for(i=1;i<=c;i++){
        f=(1.0/i)+f;
    }
    x=f+d+e;
    printf("%.2f",x);
    return 0;
}
