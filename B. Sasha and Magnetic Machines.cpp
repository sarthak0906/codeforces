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
    int min1 = INT_MAX;
    int sum = 0;
    vector <vector<int> > vec(100);
    // V<vi> vec(100,vi());
    loop(i,0,n){
        cin >> arr[i];
        min1 = min(min1,arr[i]);
        sum += arr[i];
    }
    loop(i,0,99){
        for (auto a:arr){
            if (a%(i+1) == 0 && a != i+1) vec[i].PB(a);
        }
    }
    // cout << "yaata\n";
    int c,d;
    rloop(i,99,0){
        if (vec[i].size() > 1){
            c = vec[i][vec[i].size()-1];
            d = i;
            break;
        }
    }
    sum -= c;
    sum -= min1;
    sum += c/d;
    sum += min1*d;
    cout << sum << endl;
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}