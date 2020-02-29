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
vi lazy(4*n,0);

int fn(int a,int b){
    return min(a,b);
}

void build(int node,int start,int end){
    if (start == end){ // single elemnt is left in range
        tree[node] = arr[start]; // OR tree[node] = arr[end]
        return;
    }
    else{
        int mid = (start + end)/2;
        build(2*node + 1,start,mid);
        build(2*node + 2,mid+1,end);
        tree[node] = fn(tree[2*node + 2],tree[2*node + 1]);
        return;
    }
}

void updaterange(int val, int node = 0 ,int low = 0 ,int high = n-1){
    if (low == high){
        tree[node] = max(lazy[node], tree[node]);
        lazy[node] = 0;
        return;
    }
    if (lazy[node] == 0){
        lazy[node] = val;
        return;
    }
    int mid = (low + high)/2;
    updaterange(2*node + 1, low,mid,lazy[2*node + 1]);
    updaterange(2*node + 2,mid+1,high,lazy[2*node + 2]);
    lazy[node] = val;
    return;
}

void update(int node,int low,int high,int loc,int val){
    if (low == high){
        tree[node] = val;
    }

    int mid = (low+high)/2;
    if (mid >= loc) update(2*node + 1,low,mid,loc,val);
    else {
        update(2*node + 2,mid+1,high,loc,val);
    }
    tree[node] = fn(tree[2*node + 1],tree[2*node + 2]);
}

int main(){
    int n;
    cin >> n;
    arr = vi(n,0);
    tree = vi(4*n,0);
    loop(i,0,n) cin >> arr[i];

    build(0,0,n-1);

    int q;
    cin >> q;
    while (q--){
        int a;
        cin >> a;
        if (a == 1){
            int loc, val;
            cin >> loc >> val;
            update(0,0,n-1,loc, val);
        }
        else {
            int val;
            cin >> val;
            updaterange(val);
        }
    }
    int a = log2(n) + 1;
    while (a--){
        updaterange(0);
    }
    loop(i,0,n) cout << tree[i];
    return 0;
}