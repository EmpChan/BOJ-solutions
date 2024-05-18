#include <stdio.h>
#define MAX 1001

int arr[MAX];

void bubblesort(int size) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubblesort(n);
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
