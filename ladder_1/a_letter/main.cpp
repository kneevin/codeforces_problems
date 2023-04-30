/**
g++ -Wall -std=c++17 main.cpp -o main | ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<string> paper(n);
    for(int i = 0; i < n; i++){
        cin >> paper[i];
    }
    int mn_r = n, mn_c = m, mx_r = -1, mx_c = -1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(paper[row][col] == '.'){ continue; }
            if(row < mn_r){ mn_r = row; }
            if(row > mx_r){ mx_r = row; }
            if(col < mn_c){ mn_c = col; }
            if(col > mx_c){ mx_c = col; }
        }
    }
    for(int row = mn_r; row <= mx_r; row++){
        for(int col = mn_c; col <= mx_c; col++){
            cout << paper[row][col];
        }
        cout << '\n';
    }
}
