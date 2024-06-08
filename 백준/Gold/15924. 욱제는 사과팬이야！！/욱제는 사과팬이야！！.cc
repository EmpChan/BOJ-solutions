#include <iostream>
#define MAX 1000000009

using namespace std;

string map[3000];
int dp[3000][3000];
int n,m;

void sol(){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      dp[i][j]= max(1,dp[i][j]);
      if(map[i][j]=='B' || map[i][j] == 'S'){
        dp[i+1][j] = (max(1,dp[i+1][j])+dp[i][j])%MAX;
      }
      if(map[i][j]=='B' || map[i][j] == 'E'){
        dp[i][j+1] = (max(1,dp[i][j+1])+dp[i][j])%MAX;
      }
    }
  }
}

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  cin >> n >> m;
  for(int i=0; i<n; i++)cin >> map[i];
  sol();
  cout << dp[n-1][m-1]%MAX;
}