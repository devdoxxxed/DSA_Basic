#include<iostream>
using namespace std;
int FirstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans; 
}

int LastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
    }
    return ans; 
}


int main(){
int arr[] = { 0,1,2,3,3,3,5};
cout<< " the first occurrence is at index " << FirstOcc(arr, 7 , 3) << endl;
cout<< " the first occurrence is at index " << LastOcc(arr, 7 , 3) << endl;

}