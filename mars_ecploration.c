#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int length,i;
    length=strlen(S);
    char sami[]={'S','O','S'};
    int k=0,count=0;
    for(i=0;i<length;i++){
        if(sami[k]==S[i]){
            k++;
            if(k==3){
                k=0;
            }
            else
                continue;
        }
        else{
            count++;
            k++;
            if(k>=3){
                k=0;
            }
            else
                continue;
        }
    }
    printf("%d",count);
    return 0;
}

