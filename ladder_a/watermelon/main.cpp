/**
g++ -Wall -std=c++17 main.cpp -o main | ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int sum = 0, w = 0;
    while(cin >> w){ sum += w; }
    if(w % 2 || w == 2){ cout << "NO\n"; }
    else{cout << "YES\n"; }
}
