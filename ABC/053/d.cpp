#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int card[100001];

int main(void){

    int N;
    cin >> N;

    int ans = 0;
    REP(i,N){
        int tmp;
        cin >> tmp;
        
        // kind of numbers
        if(card[tmp] == 0){
            ans++;
        }
        card[tmp]++;
    }

    if(ans % 2 == 0){
        cout << ans - 1 << endl;
    }else{
        cout << ans << endl;
    }
    
    return 0;
}
