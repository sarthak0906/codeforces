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

//eratosthenes seive to find prime numbers
void seive(int n){
    bool prime[n+1];
    //this is a function to put same value in splice of an array
    memset(prime,true,sizeof(prime));
    prime[1] = false;
    for (int i=2;i*i <= n;++i){
        if (prime[i] == true){
            for (int j=i*2;j<=n;j += i){
                prime[j] = false;
            }
        }
    }
    int n1;
    cin >> n1;
    loop(i,0,n1){
        ll a;
        cin >> a;
        if (ll(sqrt(a)) == sqrt(a)){
            if (prime[ll(sqrt(a))]) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    // int count = 0;
    // for (int p=2; p<=n; p++) {
    //     if (prime[p]) {
    //         //cout << p << ' , ' ;
    //         count ++;
    //     }
    // }
    // cout << count ;
}

void solve(){
    
    // loop(i,0,n) cout << prime[i] << " ";
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) seive(1111111Y);
}