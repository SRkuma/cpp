#include <iostream>
#include <stdio.h>       // prinf,scanf
#include <stdlib.h>     // atoi
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip> // setprecision
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0

using namespace std;

void Merge(int A[],int left,int mid,int right);
void MergeSort(int A[],int left, int right);

int cnt = 0;
int main(void){
  int n;
  cin >> n;
  int A[n];
  REP(i,n) cin >> A[i];
  MergeSort(A,0,n);
  REP(i,n){
    if(i) cout << " ";
    cout << A[i];
  }
  cout << endl << cnt << endl;
  return 0;
}

void Merge(int A[],int left,int mid,int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1];
  int R[n2];
  REP(i,n1) L[i] = A[left + i]; 
  REP(i,n2) R[i] = A[mid + i];

  const int INF = 1 << 29;
  L[n1] = INF;
  R[n2] = INF;
  int i = 0, j = 0;
  
  FOR(k,left,right){
    if(L[i] <=R[j]){
      A[k] = L[i];
      ++i;
      ++cnt;
    }else{
      A[k] = R[j];
      ++j;
      ++cnt;
    }
  }
}

void MergeSort(int A[],int left, int right){

  if(left + 1 < right){
  int mid = (left + right)/2;
  MergeSort(A, left, mid);
  MergeSort(A, mid, right);
  Merge(A, left, mid, right);
  }
}
