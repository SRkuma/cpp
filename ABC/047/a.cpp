#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;
#define pb(x) push_back(x)
#define MOD 1000000007

using namespace std;

int main(){

    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a,a+3);

    if(a[0] + a[1] == a[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
