#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long int> >
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long int,long long int> >
#define mpii map<int,int>
#define mpll map<long long int,long long int>
#define mpci map<char,int>
#define mpcl map<char,long long int>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
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

void solve(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    string str1 = str.substr(0, (str.length()/2));
    string str2 = str.substr((str.length()/2), str.length());
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    // str = str1 + str2;
    // cout << str;
    for (int i=0; i<str1.length(); i++) {
        if (!(((str1[0] < str2[0]) && (str1[i] < str2[i])) || ((str1[0] > str2[0]) && (str1[i] > str2[i])))) {
            // cout << str1[0] << "  " << str2[0] << endl;
            // cout << str1[i] << "  " << str2[i] << endl;
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}