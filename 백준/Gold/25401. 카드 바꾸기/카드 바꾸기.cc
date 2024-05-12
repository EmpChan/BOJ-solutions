#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#define MAX 500

using namespace std;
using lld = long long;

int n;
vector<int>arr,tt;
int mini = MAX;
set<int>d;

void counting(int w){
    int k = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)tt[j]=arr[j];
        k=0;
        for(int j=i; j>0; j--){
            if(tt[j]-tt[j-1]!=w){
                tt[j-1]= tt[j]-w;
                k++;
            }
        }
        for(int j=i; j<n-1; j++){
            if(tt[j+1]-tt[j]!=w){
                tt[j+1] = tt[j]+w;
                k++;
            }
        }
        mini = min(k,mini);
    }
    
}

void sol(){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i==j)continue;
            d.insert((arr[i]-arr[j])/(i-j));
        }
    }
    for(auto i : d){ // i 씩 증가한다고 가정
        counting(i);
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    arr.resize(n);
    tt.resize(n);
    for(int i=0; i<n; i++)cin >> arr[i];
    sol();
    cout << mini;
    return 0;
}