#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1){
        y=x;
    }
    else if(x>=1&&x<10){
        y=2*x-1;
    }
    else if(x>=10){
        y=3*x-11;
    }
    printf("%d",y);
    return 0;
}
