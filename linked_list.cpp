#include "linked_list.h"
#include <stdio.h>

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::~LinkedList() {}  

bool LinkedList::push_front(int key){
    Node* no = new Node{key, nullptr};
    if(!no){ //verificar se foi criado
        return false;
    } 
    no->next = this->head;
    this->head = no;
    return true;
}

bool LinkedList::pop_front() {
    return true;
}

bool LinkedList::push_back(int key) {
    return true;
}

bool LinkedList::equals(LinkedList* other) {
    return false;
}

int LinkedList::get(int pos) {
    return 0;
}

void LinkedList::print() {
    Node* no = this->head;
    while(no){
        cout<<"->"<< no->key;
}

int LinkedList::size() {
    return 0;
}

Node* find(int key) {
    return nullptr;
}

bool insert_after(int key, Node* pos) {
    return true;
}

bool remove_after(Node* pos) {
    return true;
}

bool insert(int pos) {
    return true;
}

bool remove(int pos) {
    return true;
}

bool remove(int key) {
    return true;
}

bool pop_back() {
    return true;
}

bool empty() {
    return true;
}
