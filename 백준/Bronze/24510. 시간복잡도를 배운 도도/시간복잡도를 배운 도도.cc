#include <stdio.h>

int main(){
	int n;
	int maxi = 0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		char buf[10001];
		scanf("%s",buf);
		int cnt = 0;
		for(int j=0; buf[j+2]!='\0'; j++){
			if(buf[j]=='f' && buf[j+1]=='o' && buf[j+2]=='r')cnt++;
		}
		for(int j=0; buf[j+4]!='\0'; j++){
			if(buf[j]=='w' && buf[j+1]=='h' && buf[j+2]=='i' && buf[j+3]=='l' && buf[j+4]=='e')
				cnt++;
		}
		maxi=maxi>cnt?maxi:cnt;
	}
	printf("%d", maxi);
}