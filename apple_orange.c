#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int i,count_a=0,count_o=0,star;
    for(i=0;i<m;i++){
        if((a+apple[i]>=s)&&(a+apple[i]<=t)){
            count_a++;
        }
        else 
           continue;
    }
           for(i=0;i<n;i++){
               if((b+orange[i]>=s)&&(b+orange[i]<=t)){
                   count_o++;
               }
               else
                  continue;
           } 
                  printf("%d \n%d",count_a,count_o);
    return 0;
}
