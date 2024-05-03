#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using lld = long long;

int n;
priority_queue<int>pq;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    bool flag = 0;
    lld s = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int lim,p;
        cin >> lim >> p ;
        //cout << lim << ' ' << p << ' ' << s << '\n';
        if(lim >= s){
            s+=p;
            pq.push(p);
            continue;
        }
        if(flag){
            cout << "Zzz";
            return 0;
        }
        flag=1;
        if(lim < s-pq.top()){
            continue; 
        }
        s+=p;
        pq.push(p);    
        s-=pq.top();
        pq.pop();
    }
    cout << "Kkeo-eok";

    return 0;
}