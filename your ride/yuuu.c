#include <stdio.h>
#include <string.h>
int main()
{
	char a[6],b[6],c[6],d[6];
	int x=1,y=1,m=1,n=1,i=0,p=0;
	while(a[i] = getchar() !=EOF)
		{
			i++;
			break;
		}
	i=0;
	fflush(stdin);
	while(b[i] =getchar() !=EOF)
		{
			i++;
			break;
		}
	i=0;
	fflush(stdin);
	while(c[i] = getchar() !=EOF)
		{
			i++;
			break;
		}
	i=0;
	fflush(stdin);
	while(d[i] = getchar() !=EOF)
		{
			i++;
			break;
		}
		fflush(stdin);
	for(p=0;p<=5;p++)
		{x=x*(a[p]-64);
		}
	for(p=0;p<=5;p++)
		y=y*(b[p]-64);
	for(p=0;p<=5;p++)
		m=m*(c[p]-64);
	for(p=0;p<=5;p++)
		n=n*(d[p]-64);
	if((x%47)==(y%47))
		printf("case1: GO\n");
	else
		printf("case1: STAY\n");
	if((m%47)==(n%47))
		printf("case2: GO\n");
	else
		printf("case2: STAY\n");
}

