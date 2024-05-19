#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        a=min(a,b-a);
        unsigned long long k = 1;
        for(int i=b; i>=b-a+1; i--){
            k*=i;
        }
        for(int i=2; i<=a; i++)
            k/=i;
        cout << k << '\n';
    }

    return 0;
}