#include<stdio.h>
int main(){
    int i,words=1;
   char s[100000];
      gets(s);
    i=0;
    while(s[i] != '\0'){
         if (s[i] >= 'A' && s[i] <= 'Z')
         words++;
        i++;
    }
    printf("%d",words);
    return 0;
}
