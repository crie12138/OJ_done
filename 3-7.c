#include <stdio.h>
int main()
{
    char a[100],c[100];
    int i=0,b;
    while(scanf("%c",&a[i]) && a[i] != '\n'){
    	c[i]=a[i]+4;
    	i++;
		}
    for(b=0;b<i;b++){
        printf("%c",c[b]);
        }
    return 0;
}
