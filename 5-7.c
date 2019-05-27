#include <stdio.h>
int main()
{
    int a[5];
    int b,i=0,t=0;
    scanf("%d",&b);
    while (b != 0){
        a[i]=b%10;
        i++;
        t++;
        b=b/10;
    }
    printf("%d\n",t);
    for(i=t-1;i>0;i--){
        printf("%d\t",a[i]);
    }
    printf("%d\n",a[0]);
    for(i=0;i<t;i++){
        printf("%d",a[i]);
    }
    return 0;
}
