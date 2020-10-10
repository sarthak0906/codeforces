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

int n,q;
vi arr(n,0);
vi tree(4*n,0);
vi cnt(4*n,0);

void build(int node,int start,int end){
    if (start == end){
        tree[node] = arr[start];
        cnt[node] = 1;
        return;
    }
    else{
        int mid = (start + end)/2;
        build(2*node + 1,start,mid);
        build(2*node + 2,mid+1,end);
        tree[node] = min(tree[2*node + 2],tree[2*node + 1]);
        if (tree[node] == tree[2*node + 2]) cnt[node] += cnt[2*node + 2];
        if (tree[node] == tree[2*node + 1]) cnt[node] += cnt[2*node + 1];
        return;
    }
}

pair<int, int> query(int node,int low,int high,int qlow,int qhigh){
    if (qhigh < low || qlow > high) return mp(INT_MAX, 1);
    if (qlow <= low && qhigh >= high) return mp(tree[node], cnt[node]);
    int mid = (low + high)/2;
    pair<int, int> l = query(2*node + 1,low,mid,qlow,qhigh);
    pair<int, int> h = query(2*node + 1,mid+1,high,qlow,qhigh);
    int x = min(l.F,h.F);
    int c = 0;
    if (x == l.F) c += l.S;
    if (x == h.F) c += h.S;
    return mp(x, c);
}

void update(int node,int low,int high,int loc,int val){
    if (low == high){
        tree[node] = val;
        cnt[node] = 1;
        return;
    }
    int mid = (low+high)/2;
    if (mid >= loc) update(2*node + 1,low,mid,loc,val);
    else {
        update(2*node + 2,mid+1,high,loc,val);
    }
    tree[node] = min(tree[2*node + 1],tree[2*node + 2]);
    cnt[node] = 0;
    if (tree[node] == tree[2*node + 1]) cnt[node] += cnt[2*node + 1];
    if (tree[node] == tree[2*node + 2]) cnt[node] += cnt[2*node + 2];
}

int main(){
    cin >> n >> q;
    arr = vi(n,0);
    tree = vi(4*n,0);
    cnt = vi(4*n,0);
    loop(i,0,n) cin >> arr[i];
    build(0,0,n-1);
    while (q--){
        char c;
        int l,r;
        cin >> c >> l >> r;
        if (c == '1'){
            // l--;
            // r--;
            update(0,0,n-1,l,r);
            // for (auto i:tree) cout << i << "    ";
        }
        else {
            // l--;
            r--;
            pair<int, int> res = query(0,0,n-1,l,r);
            cout << res.F << " " << res.S << endl;
        }
    }
    return 0;
}