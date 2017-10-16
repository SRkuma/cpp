#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    int N;
    cin >> N;

    if(N >= 1200){
        cout << "ARC" << endl;
    }else{
        cout << "ABC" << endl;
    }

    return 0;
}
