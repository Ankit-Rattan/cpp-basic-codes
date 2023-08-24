
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector <int> arr, int n, int key){
    int s = 0;
    int e = n;
    while(s<=n){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    vector <int> arr;
    int n; // lenght of array
    int ele; // for adding element to the array
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int key;
    cout<<"Enter the key to find in the array: "<<endl;
    cin>>key;
    sort(arr.begin(), arr.end());
    cout<<"The sorted array : "<<endl;
    for(int i = 0; i<n; i++){
        
        cout<<arr.at(i)<<" ";
    }    
    cout<<endl;
    cout<<binarySearch(arr, n, key)<<endl;
    
    return 0;
}
