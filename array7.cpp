#include <iostream>
using namespace std;
void kvadrat(int X[], int nX, int Y[], int nY){
    for(int i=0; i<nX-1; i++){
        if(X[i] == Y[i]*Y[i]){
            cout << X[i] << endl;

        }
    }
}
int main(){
    int X[] = {4,9,16,64,169};
    int Y[] = {2,3,4,5,8,13};
    int nX = sizeof(X) / sizeof(X[0]);
    int nY = sizeof(Y) / sizeof(Y[0]);
    kvadrat(X, nX, Y, nY);
    return 0;
}