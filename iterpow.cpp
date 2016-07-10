#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <functional>
#include <algorithm>
#include <iomanip>
#define mod 1000000007
#define debug(x) cout << #x << " = " << x << endl
#define debret(x) cout << #x << " = " << x << endl; return 0
using namespace std;

long long int iter_pow(long long int x, long long int n);

long long int iter_pow(long long int x, long long int n){
    
    if(n == 0){
        return 1;
    }
    else if((n % 2) == 0){
        return iter_pow(x * x % mod, n >> 1);
    }
    else{
        return x * iter_pow(x, n - 1) % mod;
    }
}

int main(void){

    int n,m;

    cin >> n >> m;

    cout << iter_pow(n,m) << endl;
    
}
