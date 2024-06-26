#include <stdio.h>

int heap[300001]; // root = 1 
int size;

void push(int item){
	heap[++size] = item; // heap의 마지막에 아이템 추가 
	// 부모 자식 관계 부모는 자식의 index / 2
	// 자식은 부모의 index *2(왼쪽 자식) 또는 index * 2 + 1(오른쪽 자식)
	int now = size ;
	while(now>1 && heap[now] > heap[now/2]){
		int tmp = heap[now]; // swap 코드 
		heap[now] = heap[now/2];
		heap[now/2] = tmp;
		now/=2;
	}	
}
int pop(){
    if(size==0)
        return 0;
    int returnValue = heap[1];
    heap[1] = heap[size];
    size--;
    int now = 1;
    while(now<=size){
        if(now*2>size)return returnValue;
        else if(now*2+1>size){
            if(heap[now] < heap[now*2]){
                int tmp = heap[now];
                heap[now] = heap[now*2];
                heap[now*2]=tmp;
                now*=2;
            }
            else return returnValue;
        }
        else{
            if(heap[now*2] < heap[now*2+1]){
                if(heap[now*2+1] > heap[now]){
                    int tmp = heap[now];
                    heap[now] = heap[now*2+1];
                    heap[now*2+1] = tmp;
                    now = now*2+1;
                }
                else return returnValue;
            }
            else{
                if(heap[now*2] > heap[now]){
                    int tmp = heap[now];
                    heap[now] = heap[now*2];
                    heap[now*2] = tmp;
                    now = now*2;
                }
                else return returnValue;
            }
        }
    }
	return returnValue;
}

int main() {
	int query,inst;
	scanf("%d",&query);
	while(query--){
		scanf("%d",&inst);
		if(inst){
			push(inst);
		}
		else{
			printf("%d\n",pop());
		}
	}

    return 0;
}