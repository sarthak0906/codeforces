#include <bits/stdc++.h>
#define loop(i, a, n) for (int i = a; i < n; ++i)
#define rloop(i, n, a) for (int i = n; i >= a; i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long int, long long int>>
#define mpii map<int, int>
#define mpll map<long long int, long long int>
#define mpci map<char, int>
#define mpcl map<char, long long int>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define V vector
#define P pair
#define F first
#define S second
#define PB push_back
#define mp make_pair
#define IT iterator
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

void solve()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    if (str1.length() != str2.length()){
        cout << "NO\n";
        return;
    }
    vi vec;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            vec.PB(i);
        }
    }

    if (vec.size() != 2)
    {
        cout << "NO\n" ;
        return;
    }
    if (str1[vec[0]] == str2[vec[1]] && str1[vec[1]] == str2[vec[0]])
    {
        cout << "YES\n";
        return;
    }
    // cout << str1[vec[0]] << "==" << str2[vec[1]] << endl; 
    // cout << str1[vec[1]] << "==" << str2[vec[0]] << endl; 
    cout << "NO\n";
    return;
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}