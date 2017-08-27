#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void printArray(long long int a[], long long int size);
int gcd(long long int a,long long int b);

void leftRotation(long long int a[], long long int n, long long int d) {
    long long int i, j, k, temp;
  for (i = 0; i < gcd(d, n); i++)
  {
    temp = a[i];
    j = i;
    while(1)
    {
      k = j + d;
      if (k >= n)
        k = k - n;
      if (k == i)
        break;
      a[j] = a[k];
      j = k;
    }
    a[j] = temp;
  }
}
int gcd(long long int a,long long int b)
{
   if(b==0)
     return a;
   else
     return gcd(b, a%b);
}
void printArray(long long int a[], long long int size)
{
  long long int i;
  for(i = 0; i < size; i++)
    printf("%lld ", a[i]);
}
int main() {
    long long int n; 
    long long int d; 
    scanf("%lld %lld", &n, &d);
    long long int a[1000000];
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%lld",&a[a_i]);
    }
    leftRotation(a,n,d);
     printArray(a, n);
   getchar();


    return 0;
}

