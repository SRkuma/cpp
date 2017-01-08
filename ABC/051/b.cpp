#include <iostream>
#include <stdio.h>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int K,sum;
    cin >> K >> sum;
    int ans = 0;
    REP(i,K+1){
        REP(j,K+1){
            int s = sum - i - j;
            if(0 <= s && s <= K){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
