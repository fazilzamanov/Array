#include <iostream>
using namespace std;
int musbet(int arr[], int n){
    int a = -1;
    for(int i=0; i<n-1; i++){
        if(arr[i]>0){
            if ( a==-1 || arr[i]<a ){
                a = arr[i];
            }
        }
    }
    return a; 
}
int main(){
    int arr[] = {11,0,3,2,4,-6,3,-2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Musbet en kicik eded: " << musbet(arr, n);
    return 0;
}