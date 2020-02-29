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
#define MOD 1000000007;
using namespace std;

typedef long long int ll;

V <V <V<ll> > > dp;
string a,b;
int m,d;

ll calc(string a,ll pos = 0, ll state = 1, ll rem = 0){
    if (pos == a.size() && rem == 0) return 1;

    if(pos == a.size() && rem !=0)return 0;

    if (dp[pos][state][rem] != -1) return dp[pos][state][rem];

    int last = 9;

    if (state) last = a[pos] - '0';
    dp[pos][state][rem] = 0;
    if (pos%2){
        for (int i=0; i<last+1; ++i){
            ll newrem = rem + i*pow(10,a.size()-1-pos);
            if (state && i == last) dp[pos][state][rem] += calc(a,pos+1,1,newrem % m);
            else dp[pos][state][rem] += calc(a,pos+1,0,newrem % m);
        }
    }
    else {
        for (int i=0; i<last+1; ++i){
            if (i == d) continue;
            ll newrem = rem + i*pow(10,a.size()-1-pos);
            if (state && i == last) dp[pos][state][rem] += calc(a,pos+1,1,newrem % m);
            else dp[pos][state][rem] += calc(a,pos+1,0,newrem % m);
        }
    }

    return dp[pos][state][rem];
}

void solve(){
    cin >> m >> d;

    cin >> a;
    cin >> b;

    dp = V<V<V<ll> > > (a.size() + 1, V<V<ll> >(2,V<ll>(m, -1)));

    ll res = calc(b);
    res = res  % MOD;
    cout << res << endl;

    for (int i=a.size()-1;i>=0;i--){
        if (a[i] != '0'){
            a[i] = char(a[i] - 1);
            break;
        }
    }

    dp = V<V<V<ll> > > (a.size() + 1, V<V<ll> >(2,V<ll>(m, -1)));
    res -= calc(a);
    res = res % MOD;

    cout << res << endl;
    return;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}