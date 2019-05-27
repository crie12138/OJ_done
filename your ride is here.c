#include <stdio.h>
int main()
{
    char a[100],b[100];
    int x[100],y[100];
    int i=0,c=1,e=1,t=1,j=0;
    int d[100],f[100];
    while(scanf("%c",&a[i]) && a[i] != EOF){
        while(scanf("%c",&a[i]) && a[i] != '\n'){
            a[i]=a[i]-64;
            x[i]=(int)a[i];
            c=c*x[i];
            i++;
        }
        d[j]=c%47;
        j++;
        i=0;
        while(scanf("%c",&b[i]) && b[i] != '\n'){
            b[i]=b[i]-64;
            y[i]=(int)b[i];
            e=e*y[i];
            i++;
        }
        j=0;
        f[j]=e%47;
        j++;
    }
    for(i=0;i<j;i++){
        if(d[i] == f[i]){
            printf("CASE%d: GO\n",i+1);
        }
        else {
           printf("CASE%d: STAY\n",i+1);
        }
    }
    return 0;
}
