#include <iostream>
#include <cmath>
using namespace std;
void massiv(int arr[], int n){
    int s=0, o=0;
    double g;
    double h =1;
    int y = n - (n/2);
    for(int i=0;i<=(n/2)-1;i++){
        s = s + arr[i];
        o = s / (n/2);
    }
    for(int j=n/2;j<=n-1; j++){
        h = h * arr[j];
    }
    g = pow(h, 1.0 / y ); 
    cout << "Ededi orta " << o << " Hendesi orta " << g << endl;
}

int main (){
    int arr[] = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    int n = sizeof(arr) / sizeof (arr[0]);
    massiv(arr,n);
    return 0;
}