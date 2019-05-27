#include <stdio.h>
int main()
{
    double a=1,b=2,c[100],d,sum;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c[i]=b/a;
        d=b;
        b=a+b;
        a=d;
    }
    for(i=0;i<n;i++){
        sum+=c[i];
    }
    printf("%.2f",sum);
    return 0;
}
