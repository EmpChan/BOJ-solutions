#include <stdio.h>
#include <string.h>

int main(){
	int cnt=0,w=1;
	int now=1,k=10;
	int n;
	scanf("%d",&n);
	while(cnt+w<n){
		cnt+=w;
		now++;
		if(now%k==0){
			k*=10;
			w++;
		}
	}
	n-=cnt;
	int buf[100];
	int size= 0;
	while(now){
		buf[size++]=now%10;
		now/=10;
	}
	printf("%d",buf[size-n]);

}