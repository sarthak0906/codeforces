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

bool coprime(int a,int b,int c){
    if (__gcd(a,b) == 1 && __gcd(b,c) == 1 && __gcd(a,c) == 1) return true;
    return false;
}

bool coprime(int a,int b){
    if (__gcd(a,b) == 1) return true;
    return false;
}

void solve(){
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 ;
        return;
    }
    ll ans = n*(n-1);
//    int k = 0;
    for (ll i=n-2;i>=1;i--){
        ll d = n*(n-1);
        ll s = d* i;
        s /= __gcd(d,i);
        // cout << s << "    " << i << endl;
        ans = max(ans,s);
        // cout << ans << endl;
    }
    cout << ans;
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}