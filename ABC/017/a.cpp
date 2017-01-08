#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cerr << #x << " = " << x << endl;
using namespace std;

int main(void){

    int ans = 0;
    REP(i,3){
        int score,rate;
        cin >> score >> rate;
        ans += score*rate/10;
    }
    cout << ans << endl;

    return 0;
}
