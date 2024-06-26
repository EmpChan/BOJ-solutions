#include <iostream>

using namespace std;

int arr[26][2];

void routineA(int inp) {//전위 
	if (inp == -1)
		return;
	cout << char(inp + 'A');
	routineA(arr[inp][0]);
	routineA(arr[inp][1]);
}

void routineB(int inp) {
	if (inp == -1)
		return;
	routineB(arr[inp][0]);
	cout << char(inp + 'A');
	routineB(arr[inp][1]);
}

void routineC(int inp) {
	if (inp == -1)
		return;
	routineC(arr[inp][0]);
	routineC(arr[inp][1]);
	cout << char(inp + 'A');
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		if (b == '.')
			arr[a - 'A'][0] = -1;
		else
			arr[a - 'A'][0] = b - 'A';
		if (c == '.')
			arr[a - 'A'][1] = -1;
		else
			arr[a - 'A'][1] = c - 'A';
	}
	routineA(0);
	cout << '\n';
	routineB(0);
	cout << '\n';
	routineC(0);
	return 0;
}