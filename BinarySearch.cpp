#include <iostream>
#include <math.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

bool Check(int mid,int N,int M,int a[]);

using namespace std;

int main(void){                 // AOJ ALDS1_4_D
    
    int n,m; 
    cin >> n >> m;
    
    int baggage[n];
    
    REP(i,n) cin >> baggage[i];
    
    int right = 1e+9;
    int left = -1;
    
    while(abs(right-left) > 1){
        
        int mid = (right+left) / 2;
        
        if(Check(mid,n,m,baggage)){
            right = mid;
        }else{
            left = mid;
        }
        
    }
    
    cout << right << endl;

    return 0;
}


bool Check(int mid,int N,int M,int a[]){

    int sum = 0;
    int cnt = 1;
    
    REP(i,N){

        if(a[i] > mid) return false;
        
        sum += a[i];

        if(sum > mid){
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= M;
}
