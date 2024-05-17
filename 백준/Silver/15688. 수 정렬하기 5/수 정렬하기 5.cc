#include <stdio.h>

int arr[1000001];
int tmp[1000001];

void merge(int s,int e){
    int mid = (s+e)/2;
    int l=s,r=mid+1,k=s;
    while(l<=mid && r<=e){
        if(arr[l]<=arr[r])tmp[k++]=arr[l++];
        else tmp[k++] = arr[r++];
    }
    while(l<=mid)tmp[k++]=arr[l++];
    while(r<=e)tmp[k++]=arr[r++];
    for(int i=s;i<=e; i++)arr[i]=tmp[i];
}

void partition(int s,int e){
    if(s>=e)return;
    int mid=(s+e)/2;
    partition(s,mid);
    partition(mid+1,e);
    merge(s,e);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)scanf("%d",arr+i);
    partition(0,n-1);
    for(int i=0; i<n; i++)printf("%d\n",arr[i]);
    return 0;
}