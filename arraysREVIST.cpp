#include <iostream>
using namespace std;

// int getMax(int num[], int n)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         // if (num[i] > max)
//         // {
//         //     max = num[i];
//         // }
//         maxi = max(maxi,num[i]); 
//     }
//     return maxi;
// }

// int getMin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     cout << "enter the size of array";

//     int size;
//     cin >> size;
//     cout << "enter the array elements" << endl;

//     int num[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "maximum value is " << getMax(num, size) << endl;
//     cout << "manimum value is " << getMin(num, size) << endl;
// }

int main(){
    cout<<"enter size"<<endl;
    int size;
    cin>>size;
     int arr[size];
          int sum = 0;

     for (int i = 0; i < size; i++){
        cin>>arr[i];
        sum += arr[i];
     }
     cout<<"sum of the array is: " << sum << endl;
    
}