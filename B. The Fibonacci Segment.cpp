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
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    vi arr(n,0);
    loop(i,0,n) cin >> arr[i];
    if (n == 1){
        cout << 1 << endl;
        return;
    }
    vi ans(n,0);
    loop(i,2,n) ans[i] = (arr[i] == arr[i-1] + arr[i-2])?1:0;
    int res = 0;
    int s = 0;
    loop(i,2,n){
        if (ans[i]){
            s++;
            res = max(s,res);
        }
        else {
            s = 0;
        }
    }
    cout << res + 2 << endl;
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}