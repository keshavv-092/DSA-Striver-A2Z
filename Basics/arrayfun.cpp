#include<iostream>
using namespace std;
int dosomething(int arr[] , int n){
    arr[0] = 100;
    cout << "Inside function: " << arr[0] << endl;
    return 0;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout <<"Enter element " ;
        cin >> arr[i];
    }
    dosomething(arr , n);
    cout << "Outside Function: " << arr[0] << endl;
    return 0;
}
// Array is passed by reference to the function, so any changes made to the array inside the function will affect the original array in the main function. In this case, the first element of the array is changed to 100 inside the `dosomething` function, and this change is reflected when we print the first element outside the function.