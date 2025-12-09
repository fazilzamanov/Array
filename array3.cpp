#include <iostream>
using namespace std;
void mesafe(int arr[], int n){
    int s=-1, h=-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]==0){
            s=i;
            break;
        }
    }
    for(int j=n-1; j>0; j--){
        if(arr[j]==0){
            h=j;
            break;
        }
    }
    if(s==-1 || s==h){
        cout << "Mesafe tapilmadi:/ " << endl;

    }else{
        cout << "Mesafe " << h - s << " addimdir!" << endl;
    }
}
int main(){
    int arr[] = {12,23,45,0,12,23,3,4,45,65,56,23,43,0,32,23,32,49};
    int n = sizeof(arr) / sizeof(arr[0]);
    mesafe(arr, n);
    return 0;
}