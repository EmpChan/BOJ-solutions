#include <stdio.h>

int minheap[100001];
int last = 0;

void insertheap(int a){
	minheap[++last] = a;
	int p = last;
	while (p > 1){
		if (minheap[p] <= minheap[p / 2]){
			int tmp = minheap[p/2];
			minheap[p/2]=minheap[p];
			minheap[p]=tmp;
			p = p / 2;
		}
		else
			break;
	}
}

int popheap(){
	int c = minheap[1];
	if (last <= 0)
		return 0;
	minheap[1] = minheap[last--];
	minheap[last + 1] = 0;
	int p = 1;
	while (p <= last){
		if (minheap[p * 2] < minheap[p * 2 + 1]){
			if (minheap[p] > minheap[p * 2] && p * 2 <= last){
				int tmp = minheap[p*2];
				minheap[p*2]=minheap[p];
				minheap[p]=tmp;
				p = p * 2;
			}
			else if (minheap[p] > minheap[p * 2 + 1] && p * 2 + 1 <= last){
				int tmp = minheap[p*2+1];
				minheap[p*2+1]=minheap[p];
				minheap[p]=tmp;
				p = p * 2 + 1;
			}
			else{
				break;
			}
		}
		else{
			if (minheap[p] > minheap[p * 2 + 1] && p * 2 +1 <= last){
				int tmp = minheap[p*2+1];
				minheap[p*2+1]=minheap[p];
				minheap[p]=tmp;
				p = p * 2 +1;
			}
			else if (minheap[p] > minheap[p * 2] && p * 2<= last){
				int tmp = minheap[p*2];
				minheap[p*2]=minheap[p];
				minheap[p]=tmp;
				p = p * 2;
			}
			else{
				break;
			}
		}
	}
	return c;
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int cup;
		scanf("%d",&cup);
		if (cup != 0){
			insertheap(cup);
		}
		else{
			cup=popheap();
			printf("%d\n",cup);
		}
	}

	return 0;
}