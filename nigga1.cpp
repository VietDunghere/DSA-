#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n;
    cin >> n;

   
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

  
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin >> ws, line);  
        stringstream ss(line);
        int neighbor;
        while (ss >> neighbor) {
            adjMatrix[i][neighbor - 1] = 1;  
            adjMatrix[neighbor - 1][i] = 1;  
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
