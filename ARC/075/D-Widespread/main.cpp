#include <iostream>
#include <math.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int N,A,B;
int enemyLP[100000];

bool check(ll mid){

    ll cnt = 0;
    int addDmg = A-B;
    int splashDmg = B;

    ll T = mid;

    REP(i,N){
        
        if(enemyLP[i] > splashDmg * mid){
            cnt += (enemyLP[i] - splashDmg * mid) / addDmg;
            if((enemyLP[i] - splashDmg * mid) % addDmg != 0) cnt++;
        }
        
    }
    if(cnt <= mid){
        return true;
    }else{
        return false;
    }
}

int main(void){

    cin >> N >> A >> B;

    REP(i,N){
        cin >> enemyLP[i];
    }

    int ok = (int)1e+9;
    int ng = -1;
    
    while(abs(ok - ng) > 1){

        ll mid = (ok + ng) / 2;

        if(check(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    
    return 0;
}
