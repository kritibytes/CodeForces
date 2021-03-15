#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    cin >> inp;
    sort(inp.begin(), inp.end());

    for (int i=inp.size()-1; i>=0;i--){
        cout << inp[i];
        if (inp[i]!=inp[i-1]){
            break;
        }
    }
    cout << endl;
}