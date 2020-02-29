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

int main(){

    long n(0); scanf("%ld", &n);
    const long maxSquare = n * n;

    int total(0);
    for(long a = 1; a < n; a++){
        for(long b = a; b < n; b++){
            long sumOfSquares = a * a + b * b;
            if(sumOfSquares > maxSquare){break;}
            int temp = sqrt(sumOfSquares);
            if(temp * temp == sumOfSquares){++total;}
        }
    }

    printf("%d\n", total);
    return 0;
}