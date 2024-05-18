#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<int,vector<int>,greater<int>>pq;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,cnt=0;
    int t;
    cin >> n;
    while(n--){
        cin >> t;
        pq.push(t);
    }
    while(pq.size()>=2){
        int now = pq.top();
        pq.pop();
        int now2=pq.top();
        pq.pop();
        pq.push(now+now2);
        cnt+=now+now2;
    }
    cout << cnt;

    return 0;
}