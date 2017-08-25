#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char string[1000],uppercase,alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i,length,count,j;
    gets(string);
    length=strlen(string);
    for(i=0;i<26;i++){
        uppercase=alpha[i]-32;
        for(j=0;j<length;j++){
            if(alpha[i]==string[j]){
                count++;
                break;
            }
            else if(uppercase==string[j]){
                 count++;
                break;
            }
            else
                continue;
        }
    }
    if(count==26){
        printf("pangram");
    }
    else
        printf("not pangram");
    return 0;
}

