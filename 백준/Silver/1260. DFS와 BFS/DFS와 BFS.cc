#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>>edge;

bool visit[1001];
int n,m,k;

// DFS
void dfs(int node){
    visit[node] = 1;
    cout << node << ' ';
    for(auto i : edge[node]){
        if(visit[i])continue;
        dfs(i);
    }
}

// BFS
void bfs(int node){
    queue<int>q;
    visit[node] = 0;
    q.push(node);
    while(!q.empty()){
        queue<int>tmp; // 다음에 탐색할 정점들 
        while(!q.empty()){
            int now = q.front();
            cout << now << ' ';
            q.pop();
            for(auto i : edge[now]){
                if(!visit[i])continue;
                visit[i] = 0;
                tmp.push(i);
            }
        }
        swap(tmp,q);
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m >> k;
    edge.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        sort(edge[i].begin(),edge[i].end());
    }
    dfs(k);
    cout << '\n';
    bfs(k);   

    return 0;
}