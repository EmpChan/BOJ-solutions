#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n,t,mx,my;
  cin >> n >> t;
  mx=n,my=n;
  while(t--){
    int a,b;
    cin >> a >> b;
    if(a>=mx || b>=my)continue;
    if(mx*b == my*a)mx=a;
    else if(mx*b>my*a)my=b;
    else mx=a;
  }

  cout <<mx*my;

  return 0;
}