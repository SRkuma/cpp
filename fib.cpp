#include <iostream>
#include <stdio.h>
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

long long int fibCnt = 0;
long long int fastFibCnt = 0;
long long int fastfib(int n,long long res,long long y){

    fastFibCnt++;
    
    if(n == 0) return res;
    if(n == 1) return y;

    return fastfib(n-1,res,res+y);
}

long long int fib(int n){

    return fastfib(n,0,1);
}

long long int slowFib(int n){

    fibCnt++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return slowFib(n-1)+slowFib(n-2);
}


int main(){

    int N;
    cin >> N;

    debug(fib(N));
    debug(fastFibCnt);
    debug(slowFib(N));
    debug(fibCnt);
    return 0;
}
