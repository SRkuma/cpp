#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int A,B;
    cin >> A >> B;

    if(A == 1) A = 14;
    if(B == 1) B = 14;

    if(A > B){
        cout << "Alice" << endl;
    }else if(A < B){
        cout << "Bob" << endl;
    }else{
        cout << "Draw" << endl;
    }

    return 0;
}
