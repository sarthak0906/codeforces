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
    int a,b;
    cin >> a >> b;
    if (a >= 0 && b >= 0) printf("0 %d %d 0",a+b,a+b,0);
    else if (a >= 0) printf("0 %d %d 0",-1*a + b,a-b);
    else if (b >= 0) printf("%d 0 0 %d",-1*(b-a),b-a);
    else printf("%d 0 0 %d",(a+b),(a+b));
}

int main(){
    int t=1;
    // cin >> t;
    while (t--) solve();
}