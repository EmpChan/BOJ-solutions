#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;
using lld = long long;

lld d,p,q;
lld mini;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> d>> p >> q;
    if(p<q)swap(p,q);
    lld k =0,t;
    lld mini = d/p*p+p;
    while(k*p <=d && k<q){
        if((d-k*p)%q) t=(d-k*p)/q+1;
        else{
            cout << d;
            return 0;
        }
        mini = min(t*q+k*p,mini);
        k++;
    }
    cout << mini;

    return 0;
}