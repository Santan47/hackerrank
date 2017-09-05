#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int ar[6][6],a[16],k,largest;
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){
          
          scanf("%d",&ar[i][j]);
       }
    }
    a[0]=ar[0][0]+ar[0][1]+ar[0][2]+ar[1][1]+ar[2][0]+ar[2][1]+ar[2][2];
    a[1]=ar[0][1]+ar[0][2]+ar[0][3]+ar[1][2]+ar[2][1]+ar[2][2]+ar[2][3];
    a[2]=ar[0][2]+ar[0][3]+ar[0][4]+ar[1][3]+ar[2][2]+ar[2][3]+ar[2][4];
    a[3]=ar[0][3]+ar[0][4]+ar[0][5]+ar[1][4]+ar[2][3]+ar[2][4]+ar[2][5];
    
    a[4]=ar[1][0]+ar[1][1]+ar[1][2]+ar[2][1]+ar[3][0]+ar[3][1]+ar[3][2];
    a[5]=ar[1][1]+ar[1][2]+ar[1][3]+ar[2][2]+ar[3][1]+ar[3][2]+ar[3][3];
    a[6]=ar[1][2]+ar[1][3]+ar[1][4]+ar[2][3]+ar[3][2]+ar[3][3]+ar[3][4];
    a[7]=ar[1][3]+ar[1][4]+ar[1][5]+ar[2][4]+ar[3][3]+ar[3][4]+ar[3][5];
    
    a[8]=ar[2][0]+ar[2][1]+ar[2][2]+ar[3][1]+ar[4][0]+ar[4][1]+ar[4][2];
    a[9]=ar[2][1]+ar[2][2]+ar[2][3]+ar[3][2]+ar[4][1]+ar[4][2]+ar[4][3];
    a[10]=ar[2][2]+ar[2][3]+ar[2][4]+ar[3][3]+ar[4][2]+ar[4][3]+ar[4][4];
    a[11]=ar[2][3]+ar[2][4]+ar[2][5]+ar[3][4]+ar[4][3]+ar[4][4]+ar[4][5];
    
    a[12]=ar[3][0]+ar[3][1]+ar[3][2]+ar[4][1]+ar[5][0]+ar[5][1]+ar[5][2];
    a[13]=ar[3][1]+ar[3][2]+ar[3][3]+ar[4][2]+ar[5][1]+ar[5][2]+ar[5][3];
    a[14]=ar[3][2]+ar[3][3]+ar[3][4]+ar[4][3]+ar[5][2]+ar[5][3]+ar[5][4];
    a[15]=ar[3][3]+ar[3][4]+ar[3][5]+ar[4][4]+ar[5][3]+ar[5][4]+ar[5][5];
    
    largest=a[0];
    /*
    for (k = 0; k < 16; k++)
      printf("%d  ", a[k]);
    */
       for (k = 0; k < 16; k++) {
      if (a[k] > largest) {
         largest = a[k];
      }
           else
               continue;
   }
    printf("%d",largest);
    return 0;
}
