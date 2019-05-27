#include <stdio.h>
int main()
{
    int i,t,a,b,c,d;
    for(i=100;i<1000;i++){
        t=i;
        a=t%10;
        b=t/10;
        c=b%10;
        d=b/10;
        if(a*a*a+c*c*c+d*d*d==i){
            printf("%d\n",i);
        }
        else
            continue;
    }
    return 0;
}
