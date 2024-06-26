#include <iostream>

using namespace std;

int main(){
	long long n,p,k=1;
	cin >> n >> p;
	if(n>=p){
		cout << 0;
		return 0;
	}
	for(int i=2; i<=n; i++){
		k=(k*i)%p;
	}
	cout << k;
	return 0;
}