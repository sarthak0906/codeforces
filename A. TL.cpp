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
    int n,m;
    cin >> n >> m;
    int amin = INT_MAX, amax = INT_MIN;
    int bmin = INT_MAX, bmax = INT_MIN;
    loop(i,0,n){
        int a;
        cin >> a;
        amin = min(amin, a);
        amax = max(amax, a);
    }
    loop(i,0,m){
        int b;
        cin >> b;
        bmin = min(bmin, b);
        bmax = max(bmax, b);
    }

    loop(i,amax,bmin) {
        if (amin * 2 <= i){
            cout << i ;
            return;
        }
    }

    cout << -1;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}