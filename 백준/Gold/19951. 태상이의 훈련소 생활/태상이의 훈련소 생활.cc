#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n,m;
vector<int>arr(100001);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>sq;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>eq;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  cin >> n >> m;
  for(int i=1; i<=n; i++)cin >> arr[i];
  int a,b,c;
  for(int i=0; i<m; i++){
    cin >> a >> b >> c;
    sq.push({a,c});
    eq.push({b,c});
  }
  int w=0;
  for(int i=1; i<=n; i++){
    while(!sq.empty() && sq.top().first==i){w+=sq.top().second;sq.pop();}
    while(!eq.empty() && eq.top().first==i-1){w-=eq.top().second;eq.pop();}
    arr[i]+=w;
  }
  for(int i=1; i<=n; i++){
    cout << arr[i] << ' ';
  }
  
  return 0;
}