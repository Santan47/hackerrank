#include<stdio.h>
int main(){
	int i,n;
	char s[100],ch,temp=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%c",&s[i]);
	}
	for(i=0;i<n;i++){
		if(s[i]==s[i+1]){
			ch=s[i];
		}
	break;	
	}
	for(i=0;i<n;i++){
		if(ch==s[i]){
			temp=s[i];
			n=n-1;
		}
	}
	for(i=0;i<n;i++){
		printf("%c",s[i]);
	}
}
