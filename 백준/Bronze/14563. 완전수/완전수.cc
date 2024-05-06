#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
using lld = long long;

void sol(){
    int t;
    cin >> t;
    int s = 0;
    for(int i=1; i<t; i++){
        if(t%i==0)s+=i;
    }
    if(t<s)cout << "Abundant\n";
    else if(t>s)cout << "Deficient\n";
    else cout << "Perfect\n";
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    cin >> n;
    while(n--)sol();

    return 0;
}