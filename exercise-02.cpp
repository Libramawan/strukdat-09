/*
 * Author	: Prayudha Adhitia Libramawan
 * NPM		: 140810180008
 * Kelas	: B
 * Tanggal	: 07/05/2019
 * Deskripsi: Reverse a word using Stack Linked List
*/
#include<iostream>
using namespace std;

struct stackList{
    char word;
    stackList* next;
};
typedef stackList* pointer;
typedef pointer stack;

void createStack(stack& TOP);
void createElement(pointer& pNew);
void push(stack& TOP, pointer& pNew);
void print(stack TOP);

int main(){
    stack s;
    int n;
    pointer p;

    createStack(s);
    cout<<"How many letters in a word : "; cin>>n;
    for(int i=0; i<n; i++){
        createElement(p);   //input letter by letter
        push(s,p);
    }
    print(s);
    return 0;
}

void createStack(stack& TOP){
    TOP=NULL;
}

void createElement(pointer& pNew){
    pNew= new stackList;
    cout<<"Letter "; cin>> pNew->word;
    pNew->next =NULL;
}

void push(stack& TOP, pointer& pNew){
    if(TOP == NULL){
        TOP=pNew;
    } else{
        pNew->next=TOP;
        TOP=pNew;
    }
}

void print(stack TOP){
	pointer pBantu=TOP;
    cout<<"\nREVERSED : \n";
	if (TOP==NULL) cout << "Stack Kosong!" << endl;
	else{
		while (pBantu!=NULL)
		{
			cout << pBantu->word;
			pBantu=pBantu->next;
		}
	}
}