#include<bits/stdc++.h>
using namespace std;
double rec(double x){
    
    if(x==1){
        return 1;
    }
    else{
        return (x*x +3*rec(x-1) + 7)/(x+1);
    }
}
double tbn(double x){
    if(x==1){
        return 1;
    }
    else{
        return rec(x) * tbn(x-1);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);std :: cin.tie(0);
    double n;
    cin >> n;
    cout << pow(tbn(n),1/n);
}
// 𝓥𝓲𝓮𝓽𝓓𝓾𝓷𝓰𝓱𝓮𝓻𝓮