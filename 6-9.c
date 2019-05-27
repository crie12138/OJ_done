#include <stdio.h>
int main()
{
    int m,n;
    double a[100],b,c;
    int i;
    scanf("%d %d",&m,&n);
    c=m;
    b=m;
    for(i=0;i<n;i++){
        a[i]=c/2.0;
        c=a[i];
    }

    for(i=0;i<n-1;i++){
       b=2*a[i]+b;
    }
    printf("%.2lf\t%.2lf",a[n-1],b);
    return 0;
}
