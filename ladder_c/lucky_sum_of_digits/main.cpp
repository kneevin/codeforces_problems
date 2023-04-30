/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    if(n <= 7){
        if(n == 4){ cout << "4\n"; return 0; }
        else if(n == 7){ cout << "7\n"; return 0; }
        else{ cout << "-1\n"; return 0; }
    }
    vector<pair<int, int>> lucky(n + 1, {0, 0});
    lucky[4] = {1, 0}; lucky[7] = {0, 1};
    for(int i = 8; i <= n; i++){
        int s4 = lucky[i - 4].first + lucky[i - 4].second;
        int s7 = lucky[i - 7].first + lucky[i - 7].second;
        if(!(s4 && s7)){
            if(s4){ lucky[i] = lucky[i - 4]; lucky[i].first++; }
            else if(s7){ lucky[i] = lucky[i - 7]; lucky[i].second++; }
        }else{
            if(s4 > s7){
                lucky[i] = lucky[i - 7]; lucky[i].second++;
            } else if(s7 > s4){
                lucky[i] = lucky[i - 4]; lucky[i].first++;
            } else{
                if(lucky[i - 4].first >= lucky[i - 7].first){
                    lucky[i] = lucky[i - 4]; lucky[i].first++;
                }
                else{ lucky[i] = lucky[i - 7]; lucky[i].second++; }
            }
        }

    }

    if(lucky[n].first + lucky[n].second){
        while(lucky[n].first--){ cout << 4; }
        while(lucky[n].second--){ cout << 7; }
        cout << '\n';
    }else{ cout << "-1\n"; }
}
