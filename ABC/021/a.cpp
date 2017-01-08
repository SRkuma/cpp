#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)

using namespace std;

int main(void){

    int N;
    cin >> N;

    if(N % 2 == 1){
        N = (N-1) / 2;
        cout << N+1 << endl;
        cout << 1 << endl;
    }else{
        N = N / 2;
        cout << N << endl;
    }
        
    REP(i,N){
        cout << 2 << endl;
    }

    return 0;
}
