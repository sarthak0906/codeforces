#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m, si, sj;
    cin >> n >> m >> si >> sj;
    int i=si;
    for (int i=1;i<=n;++i){
        if (i&1) for (int j=1;j<=m;++j) printf("%d %d\n",(i+si-2)%n+1,(j+sj-2)%m+1);
        else for (int j=m;j>=1;j--)  printf("%d %d\n",(i+si-2)%n+1,(j+sj-2)%m+1);
    }
    return 0;
}