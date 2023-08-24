// Palindrome Number: 
int main()
{
    int i, orig, rev=0;
    cin>>i;
    orig=i;
    while(i>0){
        rev=(rev*10) + i%10;
        i=i/10;
    }
    if(rev==orig){
        cout<<"This is palindrome number!"<<endl;
    }
    else{
        cout<<"Not a palindrome number!"<<endl;
    }
    

    return 0;
}




// Prime number (efficient way!)
int main()
{
    int n;
    cin>>n;
    bool f=0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
        f=1;
        break;
        }
    }
    if(f==0){
        cout<<"Prime"<<endl;
    }
    

    return 0;
}


// Armstrong Number: 

int main()
{
    int n;
    cin>>n;
    int orig= n;
    int sum=0;
    while(n>0){
        int ld = n%10;
        sum+= pow(ld,3);
        n=n/10;
    }
    if(orig==sum){
        cout<<"Armstrong Number"<<endl;
        
    }
    else{
        cout<<"Not an anrmstong number"<<endl;
    }


    return 0;
}



//Perfect Number:

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Perfect number"<<endl;
    }
    else{
        cout<<"Not a perfect number"<<endl;
    }


    return 0;
}


// Strong Number: 

int fact(int n){
    return (n==1||n==0)?1:n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int orig=n;
    while(n!=0){
        int end = n%10;
        sum+=fact(end);
        n=n/10;
    }
    if(orig==sum){
        cout<<"Strong No."<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    

    return 0;
}
