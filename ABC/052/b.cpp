#include <iostream>
#include <math.h>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
using namespace std;

int main(void){

    int N;
    string str;
    cin >> N >> str;

    int x = 0;
    int ans = 0;
    
    REP(i,N){
        switch(str[i]){
        case 'I' : x++; break;
        case 'D' : x--; break;
        default  : break;
        }
        ans = max(ans,x);
    }
    
    cout << ans << endl;
    
    return 0;
}
