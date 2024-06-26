#include <stdio.h>

int Heap[100001], size;

void Push(int item) {
   Heap[++size] = item;
   int now = size;
   while (now > 1 && Heap[now] > Heap[now/2]) {
      int tmp = Heap[now];
      Heap[now] = Heap[now / 2];
      Heap[now / 2] = tmp;
      now /= 2;
   }
}

int Pop() {
   if (size == 0)
      return 0;
   int rtnVal = Heap[1];
   Heap[1] = Heap[size];
   size--;
   int now = 1;
   while (now <= size) {
      if (now * 2 > size)
         return rtnVal;
      else if (now * 2 + 1 > size) {
         if (Heap[now] < Heap[now * 2]) {
            int tmp = Heap[now];
            Heap[now] = Heap[now * 2];
            Heap[now * 2] = tmp;
            now *= 2;
         }
         else
            return rtnVal;
      }
      else {
         if (Heap[now * 2] < Heap[now * 2 + 1]){
            if (Heap[now * 2 + 1] > Heap[now]) {
               int tmp = Heap[now];
               Heap[now] = Heap[now * 2 + 1];
               Heap[now * 2 + 1] = tmp;
               now = now * 2 + 1;
            }
			else return rtnVal;
         }
         else{
            if (Heap[now * 2] > Heap[now]) {
               int tmp = Heap[now];
               Heap[now] = Heap[now * 2];
               Heap[now * 2] = tmp;
               now *= 2;
            }
			else return rtnVal;
		 }
      }
   }
   return rtnVal;
}

int main(void) {
   int ask, inst;
   scanf("%d", &ask);
   while (ask--) {
      scanf("%d", &inst);
      if (inst)
         Push(inst);
      else
         printf("%d\n", Pop());
   }
}