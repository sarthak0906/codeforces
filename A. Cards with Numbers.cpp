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

bool comp(P<int, int> a, P<int, int> b) {
    return (a.F < b.F);
}

void solve(){
    int n;
    cin >> n;
    
    vpii arr(2*n);
    ll sum = 0;
    loop(i,0,2*n){
        cin >> arr[i].F;
        sum += arr[i].F;
        arr[i].S = i;
    }
    // cout << sum << endl;
    // cout << sum/2*n << endl;
    // cout << int(sum/2*n) << endl;
    if (sum % (2*n)) {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end(), comp);
    int a = arr[0].F + arr[(2*n)-1].F;
    loop(i,0,n){
        if (arr[i].F + arr[(2*n)-i-1].F != a){
            cout << -1 << endl;
            return;
        }
    }
    loop(i,0,n){
        cout << arr[i].S+1 << " " << arr[(2*n)-i-1].S+1 << endl;
    }
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}