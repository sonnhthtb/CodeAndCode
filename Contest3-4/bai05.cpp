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

void Solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    long long sum=0;
    for(int i=0;i<n;i++){ cin >> a[i]; sum+=a[i];}
    sort(a,a+n);
    long long sum1=0;
    if(k>n-k) k=n-k;
    for(int i=0;i<k;i++) sum1+=a[i];
    long long sum2=sum-sum1;
    cout << abs(sum2-sum1)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}