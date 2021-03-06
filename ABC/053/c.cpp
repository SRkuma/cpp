#include <iostream>
#include <algorithm>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    long long N;
    cin >> N;

    long long ans = 0;

    ans += 2*(N / 11);
    N = N % 11;
    int cnt = 1;
    while(N > 0){
        if(cnt % 2 != 0){
            N -= 6;
        }else{
            N -= 5;
        }
        ans++;
        cnt++;
    }
    cout << ans << endl;
    return 0;
}
