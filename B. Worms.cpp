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
    cin >> n ;
    mpii map;
    ll prefix = 0;
    loop(i,0,n){
        int a;
        cin >> a;
        int p = prefix;
        prefix += a;
        while (p != prefix){
            map[p+1] = i+1;
            p++;
        }
    }
    int m;
    cin >> m;
    loop(i,0,m){
        int a;
        cin >> a;
        cout << map[a] << endl;
    }
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}