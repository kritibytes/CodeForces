#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vi list;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cin >> k;
            list.push_back(k);
        }
        sort(list.begin(), list.end());
        bool flag = true;
        for (int j = 0; j < x - 1; j++)
        {
            if ((list[j + 1] - list[j]) <= 1)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
}