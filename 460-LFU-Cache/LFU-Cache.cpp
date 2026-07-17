#include <bits/stdc++.h>
using namespace std;



class Node {
public:
    int key;
    int val;
    int freq;

    Node* next;
    Node* prev;

    Node(int k, int v) {
        key = k;
        val = v;
        freq = 1;
        next = nullptr;
        prev = nullptr;
    }
};

class List {
public:
    int size;
    Node *head, *tail;

    List() {
        size = 0;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addFront(Node* node) {
        Node* temp = head->next;

        head->next = node;
        node->next = temp;

        temp->prev = node;
        node->prev = head; 

        size++;
    }

    void removeNode(Node* node) {
        Node* delPrev = node->prev;
        Node* delNext = node->next;

        delPrev->next = delNext;
        delNext->prev = delPrev;

        size--; 
    }
};


class LFUCache {
public:
    int capacity;
    int minFreq;
    int currSize;

    unordered_map<int, Node*> keyNode;
    unordered_map<int, List*> freqList;

    LFUCache(int capacity) {
        this->capacity = capacity;
        currSize = 0;
        minFreq = 0; 
    }
    
    void updateFreq(Node* node) {
        keyNode.erase(node->key);
        
        freqList[node->freq]->removeNode(node);    

        if(node->freq == minFreq && freqList[node->freq]->size == 0)
            minFreq++;

        node->freq++;

        if (freqList.find(node->freq) == freqList.end())
            freqList[node->freq] = new List();

        freqList[node->freq]->addFront(node);

        keyNode[node->key] = node;
    }

    int get(int key) {
        if(keyNode.find(key) == keyNode.end())
            return -1;

        Node* node = keyNode[key];

        int ans = node->val;

        updateFreq(node);

        return ans;
    }
    
    void put(int key, int value) {
        if (capacity == 0)
            return;

        if (keyNode.find(key) != keyNode.end()) {
            Node* node = keyNode[key];

            node->val = value;

            updateFreq(node);

            return;
        }

        if (currSize == capacity) {
            List* list = freqList[minFreq];

            Node* nodeToDelete = list->tail->prev;

            keyNode.erase(nodeToDelete->key);

            list->removeNode(nodeToDelete);

            delete nodeToDelete;

            currSize--;
        }

        currSize++;

        minFreq = 1;

        Node* node = new Node(key, value);

        if(freqList.find(minFreq) == freqList.end())
            freqList[minFreq] = new List();

        freqList[minFreq]->addFront(node);

        keyNode[key] = node;
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */