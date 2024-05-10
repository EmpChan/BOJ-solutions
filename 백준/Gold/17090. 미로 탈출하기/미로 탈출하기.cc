#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using lld = long long;

int n,m;
string ss[500];
bool chk[500][500];
bool visited[500][500];
int cnt;

bool dfs(int x,int y){
    if(visited[x][y])return 0;
    visited[x][y] = 1;
    int dx,dy;
    if(ss[x][y] == 'U')dx = -1, dy= 0;
    else if(ss[x][y] == 'D')dx=1, dy=0;
    else if(ss[x][y] == 'L')dx=0,dy= -1;
    else dx=0, dy=1;
    int nx=x+dx;
    int ny=y+dy;
    if(nx < 0 || nx >=n || ny<0 || ny>=m || chk[nx][ny]){
        chk[x][y] = 1;
        return 1;
    }
    return chk[x][y] = dfs(nx,ny);
}

void sol(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(chk[i][j])continue; 
            dfs(i,j);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cnt+=chk[i][j];
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> ss[i];
    }
    sol();
    cout << cnt;
    
    return 0;
}