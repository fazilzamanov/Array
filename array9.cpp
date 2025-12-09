#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int A[] = {10, 20, 30, 40};
    int B[] = {100, 200, 300};
    int nA = sizeof(A) / sizeof(A[0]);   
    int nB = sizeof(B) / sizeof(B[0]);   
    int k;
    cout << "K-deyerini daxil edin:(0.." << nA-1 << " arasinda): ";
    cin >> k;
    k = k - 1;
    int a = nA + nB;
    int C[a];
    int index = 0;
    for (int i=0; i<=k; i++){
        C[index++] = A[i];
    }
    for (int j=0; j<nB; j++){
        C[index++] = B[j];
    }
    for (int i=k+1;i<nA;i++){
        C[index++] = A[i];
    }
    cout << "\nNetice --> " << endl;
    for(int i=0; i<a; i++){
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}