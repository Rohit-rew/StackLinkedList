#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


class Stack{
    Node* head;
public:

    int push(int val){
        Node* NewNode = new Node();
        NewNode->data = val;

        if(head==NULL){
            head = NewNode;
        }else{
            NewNode->next = head;
            head = NewNode;
        }
    }

    int pop(){
        if(size() > 0){
            int popedVal = head->data;
            head = head->next;
            return popedVal;
        }else{
            cout << "notthing to remove" <<endl;
            return -1;
        }
    }

    void print(){
        Node* currentNode = head;
        cout << "print starts" <<endl;
        while (currentNode->next != NULL)
        {
            cout << currentNode->data <<endl;
            currentNode = currentNode->next;
        }
        cout << currentNode->data <<endl;
        cout << "print ends" << endl;
    }

    int size(){
        int count = 0;
        Node* currentNode = head;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
            count++;
        }

        return count+1;
    }

};


int main(){
    Stack* stack1 = new Stack();
    stack1->push(33);
    stack1->push(34);
    stack1->push(35);
    stack1->push(36);
    stack1->push(37);
    stack1->push(38);


    stack1->pop();
    stack1->print();
    cout << "size of stack : " << stack1->size() <<endl;
}