/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        string line; cin >> line;
        int k = line.size();
        if(k <= 10){ cout << line << '\n'; }
        else{ cout << line[0] << k - 2 << line[k - 1] << '\n'; }
    }
}
