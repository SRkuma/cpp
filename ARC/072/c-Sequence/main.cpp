#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){
    
    int N;
    cin >> N;
    
    int a[100000];

    REP(i,N){
        cin >> a[i];
    }
    
    ll oddOnlyPosAns = 0;
    ll oddOnlyNegAns = 0;

    ll sum = 0;
    REP(i,N){
        sum += a[i];
        if(i % 2 == 1 && sum <= 0){
            oddOnlyPosAns += abs(sum)+1;
            sum = 1;
        }else if(i % 2 == 0 && sum >= 0){
            oddOnlyPosAns += sum+1;
            sum = -1;
        }
    }

    sum = 0;
    
    REP(i,N){
        sum += a[i];
        if(i % 2 == 1 && sum >= 0){
            oddOnlyNegAns += sum+1;
            sum = -1;
        }else if(i % 2 == 0 && sum <= 0){
            oddOnlyNegAns += abs(sum)+1;
            sum = 1;
        }
    }

    ll ans = min(oddOnlyPosAns,oddOnlyNegAns);

    cout << ans << endl;
    
    return 0;
}
