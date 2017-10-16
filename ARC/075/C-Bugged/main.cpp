#include <iostream>
#include <algorithm>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;
    int probScore[N];

    int sum = 0;


    REP(i,N){
        cin >> probScore[i];
        sum += probScore[i];
    }

    if(sum % 10 == 0){

        sort(&probScore[0],&probScore[N]);

        REP(i,N){
            if(probScore[i] % 10 != 0){
                sum -= probScore[i];
                cout << sum << endl;
                return 0;
            }
        }

        // All of the problem is a multiple of 10.
        cout << 0 << endl;

    }else{
        cout << sum << endl;
        return 0;
    }
    
    
    return 0;
}
