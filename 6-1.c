#include <stdio.h>
int main()
{
    int m,n,c,x,y;
    scanf("%d %d",&m,&n);
    x=m,y=n;
    if(m<n){
        c=m;
        m=n;
        n=c;
    }
    while(n != 0){
        c=m;
        m=n;
        n=c%n;
    }
    c=x*y/m;
    printf("%d %d",m,c);
    return 0;
}
