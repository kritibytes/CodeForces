#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int max_time = 4*60;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(max_time-i*5>=k){
            count++;
            max_time-=i*5;
        }
        else{
            break;
        }
    }
    cout << count;
    return 0;
}