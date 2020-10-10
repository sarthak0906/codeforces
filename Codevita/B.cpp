#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int x = min(a,b);
    int y = max(a,b);
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i=0;i<n;++i) cin >> arr[i];
    double xsum = 0;
    double ysum = 0;
    vector<double> arrx(n, -1);
    vector<double> arry(n, -1);
    for (int i=0;i<n;++i){
        if (i < x-1) xsum += arr[i];
        else {
            xsum -= arr[i-x];
            xsum += arr[i];
            arrx[i] = xsum / x;
        }
        if (i < y-1) ysum += arr[i];
        else {
            ysum -= arr[i-y];
            ysum +=  arr[i];
            arry[i] = ysum / y;
        }
        cout << "SUM\n";
        cout << xsum << " " << ysum << endl;
        cout << "AVG\n";
        cout << arrx[i] << " " << arry[i] << endl;
    }
    int res = 0;
    for (int i=y-1;i<n;++i){
        cout << arrx[i] << " " << arry[i] << endl;
        if (arrx[i] <= arry[i] && arrx[i-1] > arry[i]) res++;
        if (arrx[i] >= arry[i] && arrx[i-1] < arry[i]) res++;
    }
    cout << res;
    return 0;
}