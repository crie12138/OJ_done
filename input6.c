#include <stdio.h>
int main()
{
    int a,i,j;
    int b[100];
    int c[100];
    int t[100]={0};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
        for(j=0;j<b[i];j++){
            scanf("%d",&c[j]);
            t[i]+=c[j];
        }
    }
    for(i=0;i<a;i++){
        printf("%d\n",t[i]);
    }
    return 0;
}
