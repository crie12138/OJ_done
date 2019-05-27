#include <stdio.h>
int main()
{
    int a,i,t=0,j;
    int b[100];
    int c[100]={0};
    scanf("%d",&a);
    while(a != 0){
        for(i=0;i<a;i++){
            scanf("%d",&b[i]);
            c[t]+=b[i];
        }
    t=t+1;
        scanf("%d",&a);
    }
    for(j=0;j<t;j++){
        printf("%d\n",c[j]);
    }
    return 0;
}
