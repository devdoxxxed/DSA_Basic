#include<iostream>
using namespace std;
bool Search(int arr[], int size, int key ){
    for(int i = 0; i < size; i ++){
        if( arr[i] == key){
            return 1; 
        }
    }    
    
    return 0;
}
int main(){
    int arr[8] = {5,8,23,0,12,6,-1,8};
    //check wheter keye is present or not
    cout <<"enter the key to be searched" << endl; 
    int key;
    cin >> key; 
    bool found = Search(arr, 8 , key);

    if( found) {
        cout<< "key is present" << endl;

    }
    else {
        cout<< " key is not present" << endl;
    }


}