#include <iostream>
using namespace std;
void massivler(int A[], int nA, int B[], int nB){
    int maxA = A[0] , idA = 0;
    for(int i=1; i<nA; i++){
        if (A[i]>maxA){
            maxA = A[i];
            idA = i;
        }
    }
    int maxB = B[0], idB=0;
    for(int j=1; j<nB; j++){
        if(B[j]>maxB){
            maxB = B[j];
            idB = j;
        }
    }
    int t = A[idA];
    A[idA] = B[idB];
    B[idB] = t;
}
int main(){
    int A[] = {12,1,2,3,4,12,45,2,3,4};
    int B[] = {87,29,27,6,3,6,90,1,23};
    int nA = sizeof(A) / sizeof(A[0]);
    int nB = sizeof(B) / sizeof(B[0]);
    massivler(A, nA, B, nB);
    cout << "A massivi sonradan: ";
    for(int i=0; i<nA; i++) cout << A[i] << " ";
    cout << "\nB massivi sonradan: ";
    for (int j=0; j<nB; j++) cout << B[j] << " ";
    return 0;
}