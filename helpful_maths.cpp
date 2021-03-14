/*
Time Complexity: O(nLogn)
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi splitByPlus(string str)
{
    vi results;
    string temp = "";
    for (char i : str)
    {
        if (i == '+')
        {
            int num;
            stringstream ss(temp);
            ss >> num;
            results.push_back(num);
            temp = "";
        }
        else
        {
            temp += string(1, i);
        }
    }
    int num;
    stringstream ss(temp);
    ss >> num;
    results.push_back(num);
    return results;
}

int main()
{
    string inp;
    getline(cin,inp);
    vi vec = splitByPlus(inp);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << (i==vec.size()-1 ? "" : "+");
    }
    cout << endl;
    return 0;
}