#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

long long a[200000];

int main(void){

    int N;
    int T;
    cin >> N >> T;

    if(N == 1){
        cout << T << endl;
        return 0;
    }

    REP(i,N){
        cin >> a[i];
    }

    long long plus  = 0;
    long long minus = 0;
    REP(i,N-1){
        long long diff = a[i+1] - (a[i] + T);
        if(diff > 0){
            plus += T;
        }else{
            minus += T+diff;
        }
        if(i == N-2){
            plus += T;
        }
    }

    long long ans = plus+minus;

    cout << ans << endl;
    
    return 0;
}
