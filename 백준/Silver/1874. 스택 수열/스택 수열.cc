#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

stack<int>s;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m, now=1, goal = 0;
    string ans = "";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> goal;
        while(now <= goal){
            s.push(now++);
            ans+='+';
        }
        if(s.top() > goal || s.empty()){
            cout << "NO";
            return 0;
        }
        if(s.top() == goal){
            s.pop();
            ans+='-';
        }
    }
    for(auto i : ans){
        cout << i << '\n';
    }
    return 0;
}