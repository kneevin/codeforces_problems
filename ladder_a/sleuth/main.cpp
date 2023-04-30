/**
g++ -Wall -std=c++17 main.cpp -o main | ./main < input.txt
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    char prior, cur;
    char vowels[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    while(cin >> cur){
        if(isalpha(cur)){ prior = cur; }
    }
    for(int i = 0; i < 6; i++){
        if(toupper(prior) == vowels[i]){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
