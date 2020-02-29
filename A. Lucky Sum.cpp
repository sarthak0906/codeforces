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

typedef long long int ull;

ull sum=0, l, r, i;
vector<ull> lucky, LIST;
vector<ull>::iterator it;

void gen(int digit, ull val){
    if (digit > 10) return ;
    lucky.push_back(val);
    gen(digit+1, val*10+4);
    gen(digit+1, val*10+7);
}

main(){
    gen(0, 0);
    sort(lucky.begin(), lucky.end());
    scanf("%d%d", &l, &r);
    LIST.push_back(l-1);
    for (it=lucky.begin(); it != lucky.end(); it++){
        if (*it >= r) break;
        if (*it >= l) LIST.push_back(*it);
    }
    for (i=1; i < LIST.size(); i++){
        sum+=(LIST[i]-LIST[i-1])*LIST[i];
    }
    for (i=0; i < lucky.size()-1; i++){
        if (lucky[i] < r and r <= lucky[i+1]){
            sum+=(r-max(lucky[i], l-1))*lucky[i+1];
            break;
        }
    }
    cout << sum;
}