#include <iostream>
#include <vector>
#include <queue>

using namespace std;

char stack[1000001];
int top=-1;
char ppap[]="PAPP";
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    string s;
    cin >> s;
    for(auto i : s){
        stack[++top]=i;
        if(top<3)continue;
        bool flag = 0;
        for(int j=0; j<4; j++){
            if(ppap[j]==stack[top-j])continue;
            flag=1;
            break;
        }
        if(!flag){
            top-=4;
            stack[++top]='P';
        }
    }
    if(!top && stack[top]=='P'){
        cout << "PPAP";
        return 0;
    }
    cout << "NP";
    return 0;
}