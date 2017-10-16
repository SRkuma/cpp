#include <iostream>

#define FOR(i,a,b) for(long long int i = (a); i <(b);++i)
#define REP(i,n) FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

long long dp[100000];


int main(void){

    int N;
    cin >> N;
    dp[0] = 1;
    FOR(i,1,100000){
        dp[i] = dp[i-1] + (i+1);
    }

    REP(i,100000){
        if(dp[i] >= N){
            cout << i+1 << endl;
            return 0;
        }
    }
    
    return 0;
}
