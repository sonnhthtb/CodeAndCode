#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
bool checkSoChan(int n);
bool checkSoLe(int n);
int main(){
    int T=1;
    cin >> T;
    while(T--){
        unsigned int n;
        cin >> n;
        if(checkSoChan(n)==true) cout <<n<<" la so chan."<<endl;
        else cout << n << " la so le."<<endl;
    }
    return 0;
}
bool checkSoChan(int n){
    if(n==0) return true;
    if(n==1) return false;
    else return checkSoLe(n-1);
}
bool checkSoLe(int n){
    return checkSoChan(n-1);
}