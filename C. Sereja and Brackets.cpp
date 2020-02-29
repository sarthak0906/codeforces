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

string str;
int n;
vi op;
vi en;
vi al;

void build(int node,int start,int end){
    // printf("%d %d %d\n",node,start,end);
    if (start == end){
        // cout << str[start] << endl;
        if (str[start] == '(') {
            op[node] = 1;
            en[node] = 0;
            al[node] = 0;
        }
        else {
            op[node] = 0;
            en[node] = 1;
            al[node] = 0;
        }
        return;
    }
    int mid = start + end;
    mid /= 2;
    build(2*node + 1,start,mid);
    build(2*node + 2,mid+1,end);
    int a = min(op[2*node + 1], en[2*node + 2]);
    al[node] = 2*a + al[2*node + 1] + al[2*node + 2];
    op[node] = op[2*node + 1] + op[2*node + 2] - a;
    en[node] = en[2*node + 1] + en[2*node + 2] - a;
    return;
}

P<int,pii> query(int node,int low, int high, int qhigh, int qlow){
    if (qhigh < low || qlow > high) return mp(0,mp(0,0));
    if (qlow <= low && qhigh >= high) return mp(al[node],mp(op[node],en[node]));
    int mid = low + high;
    mid /= 2;
    // printf("%d %d %d\n",low,high,mid);
    P<int,pii> a1,a2;
    a1 = query(2*node + 1,low,mid,qhigh,qlow);
    a2 = query(2*node + 2,mid+1,high,qhigh,qlow);
    a2.F += a1.F;
    int k = min(a1.S.F,a2.S.S);
    a2.S.F += (a1.S.F - k);
    a2.S.S += (a1.S.S - k);
    a2.F += 2*k;
    // cout << query(2*node + 1,low,mid,qhigh,qlow) + query(2*node + 2,mid+1,high,qhigh,qlow) << endl;
    return a2;
}

void solve(){
    // string str;
    cin >> str;
    int q;
    cin >> q;
    n = str.length();
    op = vi(4*n);
    en = vi(4*n);
    al = vi(4*n);
    // cout << "building \n";
    build(0,0,n-1);
    // cout << "built \n";
    // for (auto i:op) cout << i << "  ";
    // cout << endl;
    // for (auto i:en) cout << i << "  ";
    // cout << endl;
    // for (auto i:al) cout << i << "  ";
    // cout << endl;
    while (q--){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        cout << query(0,0,n-1,b,a).F << endl;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while (t--) solve();
}