#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        int m; cin >> m;
        long long int res = 0, fireball = 1;
        vector<int> monsters(m);
        for(int i = 0; i < m; i++){ cin >> monsters[i]; }
        sort(monsters.begin(), monsters.end());
        for(int i = 0; i < m; i++){
            if(fireball > monsters[i]){ continue; }
            res += monsters[i] - fireball++;
        }
        cout << res << '\n';
    }
}
