#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using lld = long long;

int arr[10001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    for(int i=1; i<=10000; i++){
        if(arr[i])continue;
        cout << i << '\n';
        int now = i;
        while(now<=10000){
            arr[now]=1;
            int tmp = now;
            while(tmp>0){
                now+=tmp%10;
                tmp/=10;
            }
        }
    }
    return 0;
}