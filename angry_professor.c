#include<stdio.h>
int main()
{
int test_case,j,no_std,atleast,a[1000],i,count_neg=0,count_positive=0;
scanf("%d",&test_case);
for(j=0;j<test_case;j++)
{
scanf("%d",&no_std);
scanf("%d",&atleast);
for(i=0;i<no_std;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<no_std;i++)
{
if(a[i]<=0)
count_neg++;
else 
count_positive++;
}
if(count_neg<atleast)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
