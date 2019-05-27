#include <stdio.h>
#include <math.h>
int main()
{
    int a,b=0,n,j,d=0;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        a=pow(10,j);
        b=a*2+b;
        d+=b;
    }
    printf("%d",d);
    return 0;
}
