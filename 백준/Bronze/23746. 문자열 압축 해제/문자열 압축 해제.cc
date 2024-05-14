#include<stdio.h>
#include<string.h>
char arr[26][1001],t;
char tmp[1001];
char ans[1000001];
int n,s,e,cnt=0;
int main(){
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s %c",tmp,&t);
		strcpy(arr[t-'A'],tmp);
	}
	scanf("%s",tmp);
	for(int i=0; tmp[i]!='\0'; i++){
		int len = strlen(arr[tmp[i]-'A']);
		for(int j=0; j<len; j++){
			ans[cnt++]=arr[tmp[i]-'A'][j];
		}
	}
	scanf("%d%d",&s,&e);
	for(int i=s-1; i<e; i++){
		printf("%c",ans[i]);
	}
}