#include <iostream>

#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int main(void){

    string A,B;
    cin >> A >> B;

    string conc = A+B;

    int ans = stoi(conc);

    cout << ans * 2 << endl;

    return 0;
}
