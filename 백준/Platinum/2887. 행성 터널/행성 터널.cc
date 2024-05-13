#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;
using lld = long long;
using info = pair<int,int>;
using pinf = pair<int,pair<int,int>>;

vector<info>x,y,z;
int n;
lld ans = 0;
priority_queue<pinf,vector<pinf>,greater<pinf>>pq;
int parent[100000];

int getP(int i){
    return i==parent[i]?i:parent[i]=getP(parent[i]);
}

void merge(int i,int j){
    int pi = getP(i);
    int pj = getP(j);
    i<j?parent[pj]=pi:parent[pi]=pj;
}

void sol(){
    while(!pq.empty()){
        int f=pq.top().second.first;
        int s=pq.top().second.second;
        int d=pq.top().first;
        pq.pop();
        if(getP(f)==getP(s)){
            continue;
        }
        merge(f,s);
        ans+=d;
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        x.push_back({a,i});
        y.push_back({b,i});
        z.push_back({c,i});
        parent[i]=i;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());
    for(int i=1; i<n; i++){
        pq.push({abs(x[i].first-x[i-1].first),{x[i].second,x[i-1].second}});
        pq.push({abs(y[i].first-y[i-1].first),{y[i].second,y[i-1].second}});
        pq.push({abs(z[i].first-z[i-1].first),{z[i].second,z[i-1].second}});
    }
    sol();

    cout << ans << endl;

    return 0;
}