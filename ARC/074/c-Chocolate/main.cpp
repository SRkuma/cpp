#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    ll H,W;

    cin >> H >> W;

    ll area = H*W;

    ll ans = (int)1e+9;;

    ll m,M;
    ll mtmp,tmpM;
    
    for(int i = area-2;i>0;--i){
        for(int k = area-i;k>0;--k){

            printf("%d,%d,%d\n",i,k,area-i-k);
            
            tmpM = max(i,k);
            mtmp = min(i,k);
            M = max(tmpM,area-i-k);
            m = min(mtmp,area-i-k);
            ans = min(ans,M-m);
            
        }
        
    }

    cout << ans << endl;
    
    return 0;
}
