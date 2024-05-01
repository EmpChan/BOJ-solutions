#include <iostream>
#include <vector>
#include <queue>

using namespace std;



int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int delA,delB,delC;
    int dmA,dmB,dmC,hp,t=0;
    cin >> delA >> dmA >> delB >> dmB >> delC >> dmC;
    cin >> hp;
    while(hp>0){
        if(t%delA==0)hp-=dmA;
        if(t%delB==0)hp-=dmB;
        if(t%delC==0)hp-=dmC;
        t++;
    }
    cout << t-1;
    return 0;
}