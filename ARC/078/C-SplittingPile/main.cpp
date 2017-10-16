#include <iostream>
#include <numeric>    // accumulate

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;
    
    ll array[N];

    REP(i,N){
        cin >> array[i];
    }

    ll sunukeSum = array[0];
    ll araiSum = accumulate(&array[1],&array[N],(ll)0);

    ll ans = (ll)1e+10;
    ll diffAbs;
    
    FOR(i,1,N){
        //debug(sunukeSum)
        //debug(araiSum)
        diffAbs = abs(sunukeSum-araiSum);
        ans = min(diffAbs,ans);
        sunukeSum += array[i];
        araiSum -= array[i];
    }

    cout << ans << endl;
    
    return 0;
}
