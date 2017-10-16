#include <iostream>

#define FOR(i,a,b) for(long long int i = (a); i <(b);++i)
#define REP(i,n) FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    long long  S,C;

    cin >> S >> C;

    long long ans = 0;

    long long idealC = S*2;
    long long lackC = idealC-C;

    if(idealC <= C){
        C = C -idealC;
        ans = S;
    }else{
        C = 0;
        ans = S;
        ans = ans - ((lackC+1)/2);
    }
    
    ans += C / 4;

    cout << ans << endl;

    return 0;
}
