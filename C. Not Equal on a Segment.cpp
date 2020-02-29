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

int n,q;
vi arr(n,0);
vi mn(4*n,0);
vi mx(4*n,0);

void build(int node,int start,int end){
    if (start == end){ // single elemnt is left in range
        mn[node] = start; // OR tree[node] = arr[end]
        mx[node] = start; // OR tree[node] = arr[end]
        return;
    }
    int mid = (start + end)/2;
    build(2*node + 1,start,mid);
    build(2*node + 2,mid+1,end);
    mn[node] = (arr[mn[2*node + 1]] < arr[mn[2*node+2]])?mn[2*node+1]:mn[2*node+2];
    mx[node] = (arr[mx[2*node + 1]] > arr[mx[2*node+2]])?mx[2*node+1]:mx[2*node+2];
    return;
}

int query(int node,int low,int high,int qlow,int qhigh,int data){
    if (qhigh < low || qlow > high) return -2;
    if (qlow <= low && qhigh >= high){
        //  return tree[node];
        if(arr[mn[node]] != data) return mn[node];
        if(arr[mx[node]] != data) return mx[node];
        return -2;
    }
    int mid = (low + high)/2;
    return max(query(2*node + 1,low,mid,qlow,qhigh,data),query(2*node + 2,mid+1,high,qlow,qhigh,data));
}

int main(){
    FAST;
    cin >> n >> q;
    arr = vi(n,0);
    mn = vi(4*n,0);
    mx = vi(4*n,0);
    loop(i,0,n) cin >> arr[i];
    build(0,0,n-1);
    // for (auto i:mn) cout << arr[i] << "    ";
    // cout << endl;
    // for (auto i:mx) cout << arr[i] << "    ";
    // cout << endl;
    while (q--){
        int l,r,d;
        cin >> l >> r >> d;
        l--;
        r--;
        cout << query(0,0,n-1,l,r,d) + 1 << endl;
    }
    return 0;
}