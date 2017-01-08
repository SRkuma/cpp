#include <iostream>
#include <set>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

int func(int n){

    if(n % 2 == 0){
        func(n/2);
    }else{

        return n;
    }
}

int main(void){
    
    int N;
    cin >> N;

    set <int> st;

    REP(i,N){
        int tmp;
        cin >> tmp;
        st.insert(func(tmp));
    }

    cout << st.size() << endl;

    return 0;
}
