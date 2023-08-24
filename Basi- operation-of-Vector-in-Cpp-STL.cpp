#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> v1){
    for(int i=0; i<v1.size(); i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1;
    int t;
    int n;
    cout<<"size of the given array: "<<endl;
    cin>>n;
    for(int i= 0; i<n; i++){
        cin>>t;
        v1.push_back(t);
    }
    vector <int> v2(5,7);
    cout<<"Before swap"<<endl;
    display(v1);
    
    // vector<int>:: iterator iter;
    // iter = v1.begin();
    
    
    display(v2);
    v1.swap(v2);
    
    cout<<"After Swap:"<<endl;
    
    display(v1);
    display(v2);  
    


    return 0;
}
