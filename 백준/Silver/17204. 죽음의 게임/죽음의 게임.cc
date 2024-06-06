#include <stdio.h>

int n,m,now=0,cnt;
int dir[151];

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n; i++){
        scanf("%d",&dir[i]);
    }
    while(dir[now]!=-1){
        if(now==m){
            printf("%d",cnt);
            return 0;
        }
        int t=dir[now];
        dir[now]=-1;
        now=t;
        cnt++;
    }
    printf("-1");
}