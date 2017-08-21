#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int migratoryBirds(long long int n, int* ar) {
    // Complete this function
    int  bird[]={0,0,0,0,0},i,max=bird[0],loc;
    for(i=0;i<n;i++){
        if(ar[i]==1){
            bird[0]++;
        }
        else if(ar[i]==2){
            bird[1]++;
        }
        else if(ar[i]==3){
            bird[2]++;
        }
        else if(ar[i]==4){
            bird[3]++;
        }
        else if(ar[i]==5){
            bird[4]++;
        }
        else
            continue;
    }
    for(i=0;i<5;i++){
        if(bird[i]>max)
            max=bird[i];
   }
    for(i=0;i<5;i++){
        if(max==bird[i]){
            loc=i+1;
            break;
        }
        else
            continue;
    }
    

   return loc;
}

int main() {
    long long int n; 
    scanf("%lld", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&ar[i]);
    }
    long long int result = migratoryBirds(n,ar);
    printf("%lld\n", result);
    return 0;
}
