#include <stdio.h>
int main()
{
    int a[3],i,j,t;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3-i;j++){
            if(a[i]>a[i++]){
                t=a[i];
                a[i]=a[i++];
                a[i++]=t;
            }
        }
    }
    printf("%d",a[2]);
    return 0;
}
