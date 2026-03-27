#include<iostream>
using namespace std;
int BinarySearch( int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    //int mid = (start + end)/2;
    // Do not use above statement as it can cause overflow array when start and end both are 10^26 + 10 ^ 26;
    int mid = start + ( end - start)/2;
    while(start<=end){
        if( arr[mid] == key){
            return mid;
        }
        if( key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
int even[] = { 0,2,3,4,5,8,11,13, 15};
int index = BinarySearch(even, 8 , 13);
cout<< " the Index of 11 is " << index << endl;
int odd[] = { 3,5,7,9,13,15,17};
}