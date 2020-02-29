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
    vl q1 (n+1,0);
    vl q2 (n+1,0);
    loop(i,0,n) cin >> arr[i];
    loop(i,1,n+1) q1[i] += q1[i-1] + arr[i-1];
    sort(arr.begin(),arr.end());
    loop(i,1,n+1) q2[i] += q2[i-1] + arr[i-1];
    // build2();
    int m;
    cin >> m;
    while (m--){
        int t,l,r;
        cin >> t >> l >> r;
        t--;
        // l--;
        // r--;
        if (t) cout << q2[r] - q2[l-1] << endl;
        else cout << q1[r] - q1[l-1] << endl;
    }
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}