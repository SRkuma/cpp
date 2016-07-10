#include <iostream>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;

int main(void){
                        //     ____
    const int h = 2;    //     |_|_|
    const int w = 2;    //     |_|_|

    int dp[h+1][w+1] = {};
    dp[0][0] = 1;
    REP(i,h+1){
        REP(j,w+1){
            if(i != 0) dp[i][j] += dp[i-1][j];
            if(j != 0) dp[i][j] += dp[i][j-1];
        }
    }
    cout << dp[h][w] << endl;
    return 0;
}
