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
    int m,s;
    cin >> m >> s;
    int s1 = s;
    string minNo;
    string maxNo;
    minNo.resize(m);
    maxNo.resize(m);
    rloop(i,m-1,1){
        if (s <= 0){
            minNo = "-1" ;
            // cout << minNo << endl;
            break;
        }
        else if (s > 9){
            minNo[i] = '9';
            s -= 9;
        }
        else{
            minNo[i] = (s-1) + '0';
            s = 1;
        }
    }
    loop(i,0,m-1){
        if (s <= 0){
            maxNo = "-1";
            break;
        }
        if (s1 < 9){
            maxNo[i] = s1 + '0';
            s1 = 0;
        }
        else{
            maxNo[i] = '9';
            s1 -= 9;
        }
    }
    if ((s <= 9 && s > 0) || (m == 1 && s == 0)){
        minNo[0] = s + '0';
        cout << minNo << " ";
    }
    else {
        cout << "-1 ";
    }
    if ((s <= 9 && s > 0) || (m == 1 && s == 0)){
        maxNo[m-1] = s1 + '0';
        cout << maxNo << "\n";
    }
    else {
        cout << "-1 ";
    }
    // if ((s1 > 9 || s1 < 0) || (!(m == 1 && s == 0))){
    //     cout << "-1 ";
    // }
    // else{
    //     maxNo[m-1] = s1 + '0';
    //     cout << maxNo << "\n";
    // }
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}