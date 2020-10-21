#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int n3 = 0, n5 = 0, n7 = 0;

        if (n == 1 || n == 2 || n == 4){
            cout << "-1\n";
        }
        else {
            if (n%3 == 0){
                cout << n/3 << " 0 0\n";
            }
            else if (n%5 == 0){
                cout << "0 " << n/5 << " 0\n";
            }
            else if (n%7 == 0){
                cout << "0 0 " << n/7 << endl;
            }
            else {
                int n3 = 0, n5=0, n7 =0;
                while(n >= 14){
                    n7++;
                    n -= 7;
                }
                switch(n){
                    case 7:
                        n7++;
                        break;
                    case 8:
                        n3++;
                        n5++;
                        break;
                    case 9:
                        n3+=3;
                        break;
                    case 10:
                        n5+=2;
                        break;
                    case 11:
                        n5++ ;
                        n3+=2;
                        break;
                    case 12:
                        n3+=4;
                        break;
                    case 13:
                        n3+=2;
                        n7++ ;
                        break;
                }
                cout << n3 << " " << n5 << " " << n7 << endl;
            }
        }
    }
}