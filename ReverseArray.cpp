#include<iostream>
using namespace std;
void  Print(int arr[], int size){
    for(int i = 0; i < size; i ++){
        cout<< arr[i] << " "; 
    }
    cout << endl; 
}

void Reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}
int main() { 
    cout<< " enter the size of array " << endl;
    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i< n; i++){
        cin>>arr[i];

    }
    Reverse(arr,n );
    Print(arr, n );

}