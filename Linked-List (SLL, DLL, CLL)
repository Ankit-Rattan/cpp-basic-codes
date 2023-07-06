// Singly Linked List

#include<iostream>
using namespace std;

class Node{
    public :
        int data;
        Node* next;

    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }    
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp-> next = head;

    head = temp;

}

void insertAtAny(Node* &head, int d, int pos){
    if(pos ==1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count =1;
    while(count<pos-1){
        temp = temp-> next;
        count++;
    }
    Node* insertNode = new Node(d);
    insertNode -> next = temp -> next;
    temp -> next = insertNode;
}

void print(Node* &head){
    Node* temp = head;
    cout<<endl;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<endl;
}

void delPos(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        head  = head -> next;
        temp-> next = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int count=1;
    while(count<pos){
        prev = curr;
        curr = curr-> next;
        count++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

}

void delVal(Node* &head, int v ){
    Node* temp = head;
    int p =1;
    while(temp -> data != v){
        temp  =temp-> next;
        p++;
    }
    if(p == 1){
        Node* t = head;
        head = head-> next;
        t -> next = NULL;
        delete t;
        return;
    }

    Node* curr= head;
    Node* prev = NULL;
    int count =1;
    while(count<p){
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev-> next = curr -> next;

    curr-> next = NULL;
    delete  curr;

}
int main()
{
    int val;

    int first;
    cout<<"Enter the first value: ";
    cin>>first;

    Node* node1 = new Node(first);

    Node* head = node1;
    while(val!= 4){

    cout<<"1. Inserting Value "<<endl;
    cout<<"2. Deleting By Value "<<endl;
    cout<<"3. Deleting By Position "<<endl;
    cout<<"4. Show List"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter the value: ";
    cin>>val;

    if(val ==1){
        int n;
        cout<<"Enter Value: ";
        cin>>n;
        int pos; 
        cout<<"Enter Position: ";
        cin>>pos;
        insertAtAny(head, n, pos);
        print(head);
    }

    else if(val == 2){
        int v;
        cout<<"Enter value  to delete: ";
        cin>>v;
        delVal(head, v);
        print(head);
    }
    else if(val == 3){
        int pos;
        cout<<"Enter the postion: ";
        cin>>pos;
        delPos(head , pos);
        print(head);
    }
    else if(val == 4){
        print(head);
    }

    else{
        break;
    }

    }

    cout<<"Thank You"<<endl;
    return 0;


}


// Doubly Linked List

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node*  head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;

}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head-> prev = temp;
    
    head = temp ;
}


void insertAtTail(Node* &tail, int d){
    Node* temp =  new Node(d);

    temp->prev = tail; 
    tail -> next = temp;

    tail = temp;
}

void insert(Node* &head, int pos ,int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;

    int count = 1;
    while(count < pos-1){
        temp = temp-> next;
        count ++;
    }

    Node* insertVal = new Node(d);

    insertVal ->next = temp -> next;
    temp->next->prev = insertVal;
    insertVal -> prev  = temp;
    temp -> next = insertVal;
}

void dele(Node* head, int pos){

    if(pos == 1){
        

    }
    Node* temp = head;

    int count = 1;
    while(count < pos-1){
        temp = temp-> next;
        count ++;
    }

    Node* toDelete = temp -> next;

    temp -> next = temp -> next -> next;
    temp -> next -> prev = temp -> next -> prev -> prev;
    cout<<"Deleted element : "<<toDelete -> data<<endl;
    delete toDelete;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 15);
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insert(head, 2,50);
    print(head);
    dele(head, 1);
    print(head);

    return 0;
}


// Circular Linked-List

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next; 

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertNode(Node* &tail, int ele, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);

        tail = newNode;

        newNode -> next = newNode;
        return;
    }

    Node* temp = tail;

    while(temp -> data != ele){
        temp = temp -> next;
    }

    Node* newNode = new Node(d);

    newNode -> next = temp -> next;
    temp -> next  = newNode;

}

void del(Node* &tail, int ele){

    if(tail == NULL){
        cout<<"This is Emply LL"<<endl;
        return;
    }

    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr-> data != ele){
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;

    // for single data CLL

    if(curr == prev){
        tail = NULL;
    }

    // for >2 and for deleting tail data
    if(tail == curr){
        tail = prev;
    }

    curr -> next = NULL;
    cout<<"Deleted element: "<<curr -> data<<endl;
    delete curr;
}

void print(Node* &tail){

    Node* temp = tail;

    if(tail == NULL){
        cout<<"Empty List"<<endl;
        return;
    }

    do{
        cout<<temp -> data<<" ";
        temp = temp -> next;

    }while(temp != tail);

    cout<<endl;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 1);
    print(tail);

    insertNode(tail, 1, 2);
    print(tail);
    
    insertNode(tail, 1, 3);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    del(tail, 1);
    print(tail);


    return 0;
}

