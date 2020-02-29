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

int n;
mpii m;
vpii v;
vl f (1111111);

void solve(){
    cin >> n;

    loop(i,0,n){
        int a;
        cin >> a;
        m[a]++;
    }

    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        v.PB(mp(it->F, it->S));
    }

    loop(i,0,(int(v.size()))){
        int pr = i-1;
        while (pr >= 0 && v[pr].F + 1 == v[i].F) pr--;
        if (pr == -1) f[i] = 1LL * v[i].F * v[i].S;
        else f[i] = f[pr] + 1LL * v[i].F * v[i].S;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[int(v.size()) - 1] << endl;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}