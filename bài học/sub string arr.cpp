// ◆ᴠɪᴇᴛᴅᴜɴɢʜᴇʀᴇ◆
#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Phan Nguyen Viet Dung";
    string a[100];
    int last_index = 0; 
    int i = name.find(' ');
    while(i != string::npos){
        a[last_index] =  name.substr(0,i);
        last_index++;
        name = name.substr(i+1);
        i = name.find(' ');
    }
    a[last_index] = name;
    for(int i=0;i<=last_index;i++){
        cout << a[i] << endl;
    }
}
// 𝓥𝓲𝓮𝓽𝓓𝓾𝓷𝓰𝓱𝓮𝓻𝓮