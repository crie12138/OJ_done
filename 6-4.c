#include <stdio.h>
int main()
{
    long int a[100],c=0;
    int i,b;
    scanf("%d",&b);
    a[0]=1;
    for(i=0;i<b;i++){
        a[i+1]=a[i]*(i+2);
    }
    for(i=0;i<b;i++){
        c=a[i]+c;
    }
    printf("%ld",c);
    return 0;
}
