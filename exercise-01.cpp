/*
 * Author	: Prayudha Adhitia Libramawan
 * NPM		: 140810180008
 * Kelas	: B
 * Tanggal	: 07/05/2019
 * Deskripsi: Reverse a word using Stack Array
*/
#include<iostream>
using namespace std;

const int maxElement = 255;
struct stackArray{
    char word[maxElement];
    int TOP;
}; 
stackArray s;

void createStack(stackArray& s);
void push(stackArray& s, char newElement);
void pop(stackArray& s, char& savedElement);
void print(stackArray s);


int main(){
    stackArray s,x;
    int n;
    char stack1, stack2;

    createStack(s);
    createStack(x);
    cout<<"How many letters in a word : "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Letter "<<i+1<<" : "; 
        cin>>stack1;        //input letter by letter
        push(s, stack1);
    }
    for(int i=0; i<n; i++){
        pop(s, stack2);
        push(x, stack2);
    }
    print(x);
    return 0;
}
void createStack(stackArray& s){
    s.TOP = -1;
}

void push(stackArray& s, char newElement){
    if(s.TOP == maxElement-1){
        cout<<"Stack is full\n";
    } else{
        s.TOP++;
        s.word[s.TOP] = newElement;
    }
}

void pop(stackArray& S, char& savedElement){
	if (S.TOP<0) cout << "Stack is empty." << endl;
	else{
		savedElement=S.word[S.TOP];
		S.TOP=S.TOP-1;
	}	
}

void print(stackArray s){
    cout<<"\nOutput : ";
    for(int i=0; i<=s.TOP; i++){
        cout<<s.word[i];
    }
}