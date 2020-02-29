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
    const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int pfc[101][25] = {0};
    for (int i = 1; i <= 100; ++i){
        int ii = i;
        for (int j = 0; ii != 1 && j < 25; ++j){
            while (ii % primes[j] == 0){
                pfc[i][j] += 1;
                ii /= primes[j];
            }
        }
    }

    int a, b, c, answer(0);
    scanf("%d%d%d", &a, &b ,&c);
    for (int i = 1; i <= a; ++i){
        for (int j = 1; j <= b; ++j){
            for (int k = 1; k <= c; ++k){
                int divisors = 1;
                for (int d = 0; d < 25; ++d){
                    divisors *= (1 + pfc[i][d] + pfc[j][d] + pfc[k][d]);
                }
                answer += divisors;
            }
        }
    }
    answer %= 1073741824;
    printf("%d\n", answer);
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}