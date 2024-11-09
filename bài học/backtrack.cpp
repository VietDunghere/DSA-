#include<bits/stdc++.h>
using namespace std;

int n, k;
int x[100000];
string dick[10000];
void print_result() {
    for (int i = 1; i <= k; i++) {
        cout << dick[x[i]] << " ";
    }
    cout << endl;
}

void resolve(int i) {
    for (int v = x[i - 1] + 1; v <= n - k + i; v++) {
        x[i] = v;
        if (i == k) {
            print_result();
        } else {
            resolve(i + 1);
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> k;
    x[0] = 0; 
    string a;
    set<string> s;
    for(int i=1;i<=n;i++){
        cin >> a;
        s.insert(a);
    }
    int length = 1;
    for(string x : s){
        dick[length] = x;
        length ++;
    }
    for(int i=1;i<=length;i++){
        cout << dick[i] << " ";
    }
}