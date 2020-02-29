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

    vi arr = vi(n,0);
    vi vec;
    loop(i,0,n){
        cin >> arr[i];
        if (arr[i]){
            vec.PB(arr[i]);
        }
    }

    if (vec.size() == 0){
        cout << n << " ";
        loop(i,1,n) cout << i  << " ";
        return;
    }

    sort(vec.begin(), vec.end());
    stack<int> first;

    loop(j,1,vec[0]) first.push(j);
    loop(i,0,vec.size() -1){
        loop(j,vec[i] + 1,vec[i+1]) first.push(j);
    }
    loop(j,vec[vec.size() -1] + 1, n+1) first.push(j);

    // while (!first.empty()) 
    // { 
    //     cout << '\t' << first.front(); 
    //     first.pop(); 
    // } 
    // cout << '\n'; 

    loop(i,0,n){
        if (arr[i] == 0){
            int a = first.top();
            cout << endl << a << " " << i + 1 << endl;
            if (a == i+1){
                cout << endl << a << " " << i + 1 << endl;
                first.pop();
                int b = first.top();
                first.pop();
                first.push(a);
                cout << b;
            }
            else{
                cout << a;
                first.pop();
            }
        }
        else{
            cout << arr[i] ;
        }
        cout << " ";
    }
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}