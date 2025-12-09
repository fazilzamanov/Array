#include <iostream>
using namespace std;
void arr(int A[],int n,int b,int c){
    double s=0;

    for (int i=0; i<n-1; i++){
        if (b<A[i] && A[i]<c)
        s = s + A[i];
    }
    cout << "Edelerin cemi ---> " << s;
}
int main(){
    int A[] = {2,3,4,5,6,7,8,9,10};
    int n = sizeof(A) / sizeof(A[0]);
    int b;
    int c;
    cout << "ilk ededi daxil edin: ";
    cin >> b;
    cout << "Son ededi daxil edin: ";
    cin >> c;
    arr(A, n, b, c);
    return 0;
}