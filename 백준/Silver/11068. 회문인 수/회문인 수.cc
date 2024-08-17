#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 1000000007

using namespace std;
using lld = long long;
using dou = double;

void sol() {
    int n, j;
    cin >> n;
    for (int i = 2; i <= min(64, n); i++) {
        int arr[100];
        int tn = 0, k = i;
        int tmp = n;
        while (k <= tmp) {
            k *= i;
        }
        k /= i;
        while (k > 0) {
            //cout << tmp << ' ' << k << ' ' << tmp/k << '\n';
            arr[tn++] = tmp / k;
            tmp %= k;
            k = k / i;
        
        }
        j = tn - 1;
        bool flag = 0;
        for (int i = 0; i < j; i++, j--) {
            if (arr[i] == arr[j]) {
                continue;
            }
            else {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--)sol();

    return 0;
}