#include <iostream>
#include <algorithm>
#define MAX 1000001

using namespace std;

int arr[MAX];

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) cout << arr[i] << '\n';

	return 0;
}

/* 머지? 머지는 합병입니다.*/