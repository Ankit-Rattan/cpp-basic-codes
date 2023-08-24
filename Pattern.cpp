// 1->
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j;
            
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
       
        cout<<endl;
    }

    return 0;
}


/*
Output of the above code:(let n=5)
12345
23451
34512
45123
51234
*/

// 2-> Inverted full lengh pyramid
int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=0; j<=n-i; j++){
            cout<<" ";
            }
        for(int j=0; j<i-1; j++){
            cout<<"*";
        }    
        for(int j=i; j<=i-1; j++ ){
            cout<<"*";
        }
        for(int j=i; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}

//3-> Full Lenght pyramid:

int main()
{
    int n, k;
    cin>>n;
    for(int i=1; i<=n; i++, k=0){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
    }


    return 0;
}

//4-> Inverted half pyramid

int main()
{
    int n, k;
    cin>>n;
    for(int i=1; i<=n; i++, k=0){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        while(k!=i-1){
            cout<<" ";
            k++;
        }
        cout<<endl;
    }


    return 0;
}

//5 -> Hollow rectangle using arrays(2d)
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(i==0 || i==c-1 || j==0 || j==r-1){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}

//6-> Hollow Rectangle using loops

int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1; i<=c; i++){
        for(int j=1; j<=r; j++){
            if(i==1 || i==c || j==1 || j==r){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}
 
//7-> Hollow pyramid
int main()
{
    int n, k;
    cin>>n;
    for(int i=1; i<=n; i++, k=0){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        while(k!=2*i-1){
            
            if(k==0 || k==2*i-2 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            k++;
        }
        cout<<endl;
    }
        for(int l=1; l<=2*n-1; l++){
            cout<<"*";
        }
    return 0;
}




