#include <bits/stdc++.h>
#define Col 3
#define Row 3
#define FOR(i,a,b) for(long long i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

//double a[Col][Row] = {{2.0,3.0,3.0},{3.0,2.0,-1.0},{5.0,4.0,2.0}};
//double a[Col][Row] = {{5.0, 1.0, 0.0},{1.0, 3.0, 1.0},{0.0, 1.0, 4.0}};
double a[Col][Row] = {{0.0,1.0,-1.0},{1.0,0.0,-1.0},{1.0,1.0,0.0}};
//double      b[Col] = {5.0,-4.0,3.0};
//double      b[Col] = {7.0,10.0,14.0};
double      b[Col] = {2.0,0.0,1.0};

void pivotSelect(){

    double p;
    double pMax;
    REP(k,Col){
        p = k;
        pMax = fabs(a[k][k]);
        FOR(i,k+1,Col){
            if(a[i][k] > pMax){
                p = i;
                pMax = fabs(a[i][k]);
            }
        }
        if((int)p != k){
            FOR(i,k,Col){
                swap(a[k][i],a[(int)p][i]);
            }
            swap(b[k],b[(int)p]);
        }
    }
}

void gaussElimination(){

    REP(k,Col){
        FOR(i,k+1,Col){
            double tmp = a[i][k] / a[k][k];
            REP(j,Row){
                a[i][j] -=  tmp*a[k][j];
            }
            b[i] -= tmp*b[k];
        }
    }

}
void pGaussElimination(){
    
    pivotSelect();

    REP(k,Col){
        FOR(i,k+1,Col){
            double tmp = a[i][k] / a[k][k];
            REP(j,Row){
                a[i][j] -=  tmp*a[k][j];
            }
            b[i] -= tmp*b[k];
        }
    }
}


void substBack(){
    for(int i = Col-1; i >= 0; i --){
        FOR(j,i+1,Row){
            b[i] -= a[i][j] * b[j];
            a[i][j] = 0.0;
        }
        b[i] /= a[i][i];
        a[i][i] = 1.0;
    }
}


void printMatrix(){
    REP(i,Col){
        REP(j,Row){
            printf("\t%lf ",a[i][j]);
        }
        printf("\t%lf\n",b[i]);
    }
    printf("\n");
}

int main(){
    
    printf("\tInitial Matrix\n\n");
    printMatrix();
    //pGaussElimination();
    gaussElimination();
    substBack();
    printf("\tAnswer Matrix\n\n");
    printMatrix();
    
}
