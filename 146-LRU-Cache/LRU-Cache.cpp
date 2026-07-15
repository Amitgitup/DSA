#include <bits/stdc++.h>
using namespace std;



class Node {
public:
    int key;
    int val;

    Node* next;
    Node* prev;

    Node(int k, int v) {
        key = k;
        val = v;
        next = nullptr;
        prev = nullptr;
    } 
};

class LRUCache {
public: 
    unordered_map<int, Node*> mpp;
    int capacity1;
    Node* head;
    Node* tail;

    void insertAfterHead(Node* node) {
        Node* curAfterhead = head->next;
        head->next = node;
        node->next = curAfterhead;
        curAfterhead->prev = node;
        node->prev = head;
    }

    void deleteNode(Node* node) {
        Node* prevNode = node->prev;
        Node* afterNode = node->next;

        prevNode->next = afterNode;
        afterNode->prev = prevNode;
    }

    LRUCache(int capacity) {
        capacity1 = capacity;
        mpp.clear();

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (mpp.find(key) == mpp.end()) return -1;
        Node* node = mpp[key];

        // delete the node & re-insert it after the head 
        deleteNode(node);
        insertAfterHead(node);

        return node->val;
    }
    
    void put(int key, int value) {
        if (mpp.find(key) != mpp.end()) {
            Node * node = mpp[key];
            node->val = value;
            deleteNode(node);
            insertAfterHead(node);
        }
        else {
            // if capacity is already full, delete the least recently used 
            if (mpp.size() == capacity1) {
                Node* node = tail->prev;
                deleteNode(node);
                mpp.erase(node->key);
                delete node;
            }
            Node* node = new Node(key, value);
            mpp[key] = node;
            insertAfterHead(node);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */