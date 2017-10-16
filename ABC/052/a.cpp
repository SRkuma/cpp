#include <iostream>
#include <math.h>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)

using namespace std;

int main(void){

    int A,B,C,D;

    cin >> A >> B >> C >> D;

    int sq1 = A*B;
    int sq2 = C*D;

    cout << max(sq1,sq2) << endl;
    
    return 0;
}
