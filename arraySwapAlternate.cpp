#include<iostream>
using namespace std;
void PrintArray(int arr[], int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
}
void SwapAlternate(int arr[], int size){
    for ( int i =0; i < size; i +=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[6] = {2,4,5,7,9,2};
    int odd[5] = {3,4,7,5,2};
    SwapAlternate(even , 6);
    PrintArray(even , 6);
    SwapAlternate(odd , 5);
    PrintArray ( odd, 5);
}