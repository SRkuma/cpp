#include <bits/stdc++.h>
#define Col 3
#define Row 3
#define FOR(i,a,b) for(long long i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

double a[Col][Row] = {{2.0,3.0,3.0},{3.0,2.0,-1.0},{5.0,4.0,2.0}};
double      b[Col] = {5.0,-4.0,3.0};

double    D[Col][Row];
double invD[Col][Row];
double    G[Col][Row];

void Decomposition(){

    REP(i,Col){
        REP(j,Row){
            if(i == j){
                D[i][j] = a[i][j];
            }else{
                G[i][j] = a[i][j];
            }
        }
    }
    
}

void Inversion(){
    REP(i,Col){
        REP(j,Row){
            if(D[i][j] != 0)
                invD[i][j] = 1.0 /D[i][j];
        }
    }
}

void substBack(){
    for(int i = Col-1; i>=0; i--){
        FOR(j,i+1,Row){
            b[i] -= a[i][j] * b[j];
            a[i][j] = 0.0;
        }
        b[i] /= a[i][i];
        a[i][i] = 1.0;
    }
}


void printMatrix(double array1[][Row],double array2[Col]){
    REP(i,Col){
        REP(j,Row){
            printf("\t%lf ",array1[i][j]);
        }
        printf("\t%lf\n",array2[i]);
    }
    printf("\n");
}

int main(){
    
    Decomposition();
    Inversion();
    printMatrix(D,b);
    printMatrix(invD,b);
    //gaussElimination();
    substBack();
}
