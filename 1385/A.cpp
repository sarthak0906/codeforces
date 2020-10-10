#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;++i)
#define rloop(i,a,b) for(int i=a;i>b;i--)
#define vi vector<int>
#define vl vector<long long int>
#define F first
#define S second

using namespace std;

typedef long long int ll;

void solve(){
    map<int, int> p;
    int x,y,z;
    cin >> x >> y >> z;
    p[x] = 1;
    if (p.find(y) != p.end()){
        p[y] ++;
    }
    else p[y] = 1;
    if (p.find(z) != p.end()){
        p[z]++;
    }
    else p[z]=1;
    int a,b,c;
    if (p.size() == 3) cout << "NO\n";
    else if (p.size() == 1) cout << "YES\n" << x << " " << x << " " << x << "\n";
    if (p.size() == 2){
        auto it = p.begin();
        auto it1= it++;
        if ((it->F > it1->F) && (it->S > it1->S)){
            cout << "YES\n1 " << it->F << " " << it1->F << endl;
        }
        else if ((it->F < it1->F) && (it->S < it1->S)){
            cout << "YES\n1 " << it->F << " " << it1->F << endl;
        }
        else cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}