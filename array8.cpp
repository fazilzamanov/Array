#include <iostream>
#include <cmath>
using namespace std;
void massiv(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    double s = 0, g = 1;
    double h = 1;
    for(int i=0; i<n;i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min =arr[i];
        }
        s = s + arr[i];
        h = h * arr[i];
    }

    s = s / n;
    g = pow(h, 1.0 / n);
    cout << "Max--> " << max << endl;
    cout << "Min--> " << min << endl;
    cout << "Ededi orta--> " << s << endl;
    cout << "Hendesi orta--> " << g << endl;
}
int main(){
    int arr[] = {10,10,10,10,1,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    massiv(arr,n);

    return 0;
}