#include<bits/stdc++.h>
using namespace std;
int n;
int a[9][9];
bool ok = false;
vector<vector<bool>> check(n,vector<bool>(n,false));
void refill(vector<vector<bool>> v){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j] == false;
        }
    }
}
void resolve(int i,int j,string s){
    if(i==n-1 && j==n-1){
        ok = true;
        cout << s << " ";
        refill(check);
        return ;
    }
    else {
        if(i<n-1 && a[i+1][j]==1 && check[i+1][j] == false){
            check[i][j] == true;
            resolve(i+1,j,s+'D');
        }
        if(j<n-1 && a[i][j+1]==1 && check[i][j+1] == false){
            check[i][j] == true;
            resolve(i,j+1,s+'R');
        }
        if(i>0 && a[i-1][j] == 1 && check[i-1][j] == false){
            check[i][j] == true;
            resolve(i-1,j,s+'U');
        } 
        if(j>0 && a[i][j-1] == 1 && check[i][j-1] == false){
            check[i][j] == true;
            resolve(i,j-1,s+'L');
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        ok=false;
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        resolve(0,0,"");
        if(!ok){
            cout << "-1";
        }
        cout << endl;
    }
}
