
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int linearSearch(vector<int> arr, int n, int key){
    for(int i= 0; i<n; i++){
        if(arr.at(i)==key){
            return i;
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
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;
    
    return 0;
}
