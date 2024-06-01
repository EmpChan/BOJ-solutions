#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using lld = long long;

priority_queue<int, vector<int>, greater<int>>start;
priority_queue<int, vector<int>, greater<int>>e;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int a, b, n;
	cin >> n;
	int cnt = 0, mcnt = 0;;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		start.push(a);
		e.push(b);
	}
	while (!start.empty()) {
		if (start.top() < e.top()) {
			cnt++;
			mcnt = max(mcnt, cnt);
			start.pop();
		}
		else {
			cnt--;
			e.pop();
		}
	}
	cout << mcnt;
	return 0;
}