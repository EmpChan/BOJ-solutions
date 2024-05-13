#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;
using lld = long long;
using info = pair<double,pair<int,int>>;

int n;
double ans;
vector<pair<double,double>>stars;
priority_queue<info,vector<info>,greater<info>>pq;
int parent[101];
int getP(int i){
    return parent[i]==i?i:parent[i]=getP(parent[i]);
}

void merge(int i,int j){
    int pi = getP(i);
    int pj = getP(j);
    parent[pj] = pi;
}

void sol(){
    while(!pq.empty()){
        int f=pq.top().second.first;
        int s=pq.top().second.second;
        double dis = pq.top().first;
        pq.pop();
        if(getP(f)==getP(s))continue;
        merge(f,s);
        ans+=dis;
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    // setting;
    for(int i=0; i<n; i++){
        double a,b;
        cin >> a >> b;
        stars.push_back({a,b});
        parent[i]=i;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            double dist = sqrt(pow(stars[i].first-stars[j].first,2)+pow(stars[i].second-stars[j].second,2));
            pq.push({dist,{i,j}});
        }
    }
    sol();
    cout << ans;
    return 0;
}