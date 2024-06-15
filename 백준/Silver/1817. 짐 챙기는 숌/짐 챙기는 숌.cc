#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n,m,t,now=0,cnt=1;
  cin >> n >> m;
  if(n==0){
    cout << 0;
    return 0;
  }
  for(int i=0; i<n; i++){
    cin >> t;
    if(now+t <=m)now+=t;
    else{
      now=t;
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}