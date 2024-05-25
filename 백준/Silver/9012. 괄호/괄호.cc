#include <stdio.h>
#include <stack>
#include <cstring>

void sol(){
    char a[51]={};
    scanf("%s",a);
    std::stack<char>left;
    int len=strlen(a);
    for(int i=0; i<len ; i++){
        if(a[i] == '('){
            left.push('(');
        }
        else{
            if(left.empty()){
                printf("NO\n");
                return;
            }
            left.pop();
        }
    }
    if(!left.empty()){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)sol();

    return 0;
}