/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, f7 = 0, f4 = 0; cin >> n;
    while(n >= 0){
        if(n % 7 == 0){
            f7 = n / 7;
            n = 0;
            break;
        }
        f4++;
        n -= 4;
    }
    if(n == 0){
        while(f4--){ cout << 4; }
        while(f7--){ cout << 7; }
        cout << '\n';
    }else{
        cout << "-1\n";
    }
}
