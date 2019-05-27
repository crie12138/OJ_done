#include <stdio.h>
int main()
{
    int i;
    int a;
    scanf("%d",&i);
    if(i<=100000){
        a=0.1*i;
        printf("%d",a);
    }
    else if(i>100000 && i<=200000){
        a=10000+(i-100000)*0.075;
        printf("%d",a);
    }
    else if(i>200000 && i<=400000){
        a=17500+(i-200000)*0.05;
        printf("%d",a);
    }
    else if(i>400000 && i<=600000){
        a=27500+(i-400000)*0.03;
        printf("%d",a);
    }
    else if(i>600000 && i<=1000000){
        a=33500+(i-600000)*0.015;
        printf("%d",a);
    }
    else if(i>1000000){
        a=39500+(i-1000000)*0.01;
        printf("%d",a);
    }
    return 0;
}
