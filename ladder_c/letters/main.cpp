/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector<long long int> dorms(n + 1);
    for(int i = 1; i <= n; i++){ cin >> dorms[i]; dorms[i] += dorms[i - 1]; }
    while(m--){
        long long letter; cin >> letter;
        long long dorm = lower_bound(dorms.begin(), dorms.end(), letter) - dorms.begin();
        cout << dorm << " " << letter - dorms[dorm - 1] << '\n';
    }
}
