/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, soldiers[101], min_d = INT_MAX; cin >> n;
    pair<int, int> res;
    cin >> soldiers[0];
    for(int i = 1; i < n; i++){
        cin >> soldiers[i];
        if(abs(soldiers[i] - soldiers[i - 1]) < min_d){
            res = {i - 1, i};
            min_d = abs(soldiers[i] - soldiers[i - 1]);
        }
    }
    if(abs(soldiers[0] - soldiers[n - 1]) < min_d){
        res = {0, n -1};
    }
    cout << res.first + 1 << ' ' << res.second + 1 << '\n';
}
