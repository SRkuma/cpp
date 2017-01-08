#include <iostream>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;
    
    switch(N){
    case 1 : cout << "ABC" << endl;      break;
    case 2 : cout << "chokudai" << endl; break;
    default : return 0;
    }
    debug(N)
    return 0;
}
