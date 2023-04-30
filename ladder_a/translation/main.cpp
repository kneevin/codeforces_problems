/**
g++ -Wall -std=c++17 main.cpp -o main | ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    char c;
    int i = s.size() - 1;
    while(cin >> c && s[i] == c){ i--; }
    if(i == -1){ cout << "YES\n"; }
    else{ cout << "NO\n"; }
}
