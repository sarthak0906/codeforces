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
    cin >> n;
    vi arr(n,0);
    int sum = 0;
    int odd = 0;
    int even = 0;
    loop(i,0,n){
        cin >> arr[i];
        sum += arr[i];
        if (arr[i]%2) odd++;
        else even++;
    }
    if (sum%2) cout << odd;
    else cout << even;
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}