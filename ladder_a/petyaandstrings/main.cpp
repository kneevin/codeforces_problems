/**
g++ -Wall -std=c++17 main.cpp -o main ; ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string line; cin >> line;
    char c;
    int i = 0;
    while(cin >> c){
        int d = tolower(line[i++]) - tolower(c);
        if(d == 0){ continue; }
        else{
            if(d > 0){ cout << "1\n"; return 0; }
            else{ cout << "-1\n"; return 0; }
        }
    }
    cout << "0\n";
}
