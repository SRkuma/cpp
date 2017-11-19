#include <iostream>
#include <stdio.h>
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

long long int fibCnt = 0;
long long int fastFibCnt = 0;
long long int fastfib(int n,long long res1,long long res2){

    fastFibCnt++;
    
    if(n == 0) return res1;
    if(n == 1) return res2;

    return fastfib(n-1,res2,res1+res2);
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
