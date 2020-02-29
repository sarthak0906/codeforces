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
    string str;

    cin >> str;

    vi arr(4,0);
    int cx=0, cy=0;
    int minx=0, miny=0;
    int maxx=0, maxy=0;

    for (auto i:str){
        if (i == 'A'){
            arr[0]++;
            cx -= 1;
            minx = min(minx, cx);
            maxx = max(maxx, cx);
        }
        if (i == 'D'){
            arr[1]++;
            cx += 1;
            minx = min(minx, cx);
            maxx = max(maxx, cx);
        }
        if (i == 'S'){
            arr[2]++;
            cy -= 1;
            miny = min(miny, cy);
            maxy = max(maxy, cy);
        }
        if (i == 'W'){
            arr[3]++;
            cy += 1;
            miny = min(miny, cy);
            maxy = max(maxy, cy);
        }
    }

    double height = maxy - miny + 1;
    double width = maxx - minx + 1;

    double area = height * width;

    if (height > 2){
        area = min(area, (width*(height-1)));
    }
    if (width > 2){
        area = min(area, ((width-1)*height));
    }

    cout << area << endl;
}

int main(){
    int t=1;
    cin >> t;
    while (t--) solve();
}