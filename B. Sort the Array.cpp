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

const int N = (int) 1e5 + 5;
int a[N], b[N];

void solve(){
    int n;
	cin >> n;
	loop(i,0,n) cin >> a[i], b[i] = a[i];
	map<int, int> mp;
	sort(b, b + n);
    loop(i,0,n) mp[b[i]] = i;
    loop(i,0,n) a[i] = mp[a[i]];
    // loop(i,0,n) cout << a[i] << " => " << i << endl;
	int L = -1;
    loop(i,0,n){
        if (a[i] != i){
            L = i;
            break;
        }
    }
	int R = -1;
    rloop(i,n-1,0){
        if (a[i] != i){
            R = i;
            break;
        }
    }
	if (L == -1 || R == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(a + L, a + R + 1);
		int ok = true;
        loop(i,0,n){
            if (a[i] != i) ok = false;
        }
		if (ok) {
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}