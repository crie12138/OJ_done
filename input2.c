#include <stdio.h>
int main()
{
    int i=0;
    int b=0;
    int a[100];
    int x,y;
    while(scanf("%d %d",&x,&y) != EOF){
        a[i]=x+y;
        i++;
    }
    for(b=0;b<i;b++){
        printf("%d\n",a[b]);
    }
    return 0;
}
