#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
if(n%4==1)
printf("the M pettern of size %d is.\n",n);
else
printf("this is not have exact M pettern size.\n");
for(i=1;i<=n/4+1;i++)
{
	for(j=1;j<=n/2+1;j++)
	{
		if(j==1)
		printf("*");
		else if(j==n/2+1)
		printf("*");
		else if(i==j)
		printf("*");
		else
		printf(" ");
	}
printf("\n");
}
return 0;
}
