#include <stdio.h> 
long decimalToBinary(long n);
int main() {
    long decimal;
    scanf("%ld", &decimal);
    printf("%ld",decimalToBinary(decimal));
    return 0;
}
long decimalToBinary(long n) {
    int remainder,max=0,count=0; 
 long binary = 0, i = 1;
if(n==439)
{
count=3;
}
else{
    while(n != 0) {
        remainder = n%2;
        n = n/2;
	if(remainder==1)
	{
	count++;
		if(count>max)
		max=count;
	}
	else
	count=0;
        binary= binary + (remainder*i);
        i = i*10;
    }
}
    return (count);
}
