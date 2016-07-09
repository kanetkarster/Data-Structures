#include <iostream>

template<class T> class LinkedList;
template<class T> class Node;

template<class T> class LinkedList {
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    unsigned long length = 0;

    public:

    // add an element to the end
    void append(T elem) {
        if (head == nullptr) {
            head = new Node<T>(elem);
            tail = head;
        }
        else {
            tail->next = new Node<T>(elem);
            tail = tail->next;
            tail->next = nullptr;
        }

        length++;
    }

    // remove an element with a value
    int remove(T elem) {
        if (head == nullptr) {
            return -1;
        }

        
        if (head->data == elem) {
            Node<T>* tmp = head;
            head = head->next;
            delete tmp;
            length--;
            return 0;
        }

        for (Node<T>* iter=head; iter->next != nullptr; iter=iter->next) {
            if (iter->next->data == elem) {
                Node<T>* tmp = iter->next;
                iter->next = tmp->next;
                delete tmp;
                length--;
                return 0;
            } 
        }

        // couldn't find number
        return -1;
    }

    unsigned long get_length() {
        return length;
    }

    void print() {
        for (Node<T>* iter=head; iter != nullptr; iter=iter->next) {
            std::cout << iter->data << ", ";
        }
        std::cout << std::endl;
    }
};

template<class T> class Node {
    
    Node<T>(T elem) {
        this->data = elem;
        this->next = nullptr;
    }

    private:
        T data;
        Node<T>* next;
    
    friend class LinkedList<T>;
};
