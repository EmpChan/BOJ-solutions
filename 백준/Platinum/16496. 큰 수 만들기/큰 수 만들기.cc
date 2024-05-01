#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

vector<string>str;

bool compare(string a,string b){
    unsigned long long aa = stoi(a);
    unsigned long long bb = stoi(b);
    unsigned long long ra = aa*pow(10,b.size())+bb,rb = bb*pow(10,a.size())+aa; 
    if(ra > rb){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);    
    int n;
    cin >> n;
    str.resize(n);
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    sort(str.begin(),str.end(),compare);
    if(str[0] == "0"){
        cout << 0;
        return 0;
    }
    for(auto i : str){
        cout << i;
    }

    return 0;
}