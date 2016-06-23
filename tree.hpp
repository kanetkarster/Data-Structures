#include <iostream>

template<class T> class BinaryTree;
template<class T> class Node;

template<class T> class Node {
    private:
        T data;
        Node<T>* left;
        Node<T>* right;

        void add(T elem) {
            if (elem < data) {
                if (left == nullptr) {
                    left = new Node<T>(elem);
                }
                else {
                    left->add(elem);
                }
            }
            else {
                if (right == nullptr) {
                    right = new Node<T>(elem);
                }
                else {
                    right->add(elem);
                }
            }
        }

        void in_order() {
            if (left != nullptr) {
                left->in_order();
            }

            std::cout << data << ", ";

            if (right != nullptr) {
                right->in_order();
            }
        }
        
        void depth_first() {
            if (left != nullptr) {
                left->depth_first();
            }

            if (right != nullptr) {
                right->depth_first();
            }
            
            std::cout << data << ", ";
        }

    friend class BinaryTree<T>;

    public:
        Node<T>(T elem) {
            data = elem;
            left = nullptr;
            right = nullptr;
        }
};

template<class T> class BinaryTree {
    Node<T>* root = nullptr;

    public:
    void add(T elem) {
        // initial node
        if (root == nullptr) {
            root = new Node<T>(elem);
            return;
        }
        root->add(elem);
    }

    void print_left() {
        Node<T>* tmp = root;
        while (tmp != nullptr) {
            std::cout << tmp->data << ", ";
            tmp = tmp->left;
        }
        std::cout << std::endl;
    }

    void print_right() {
        Node<T>* tmp = root;
        while (tmp != nullptr) {
            std::cout << tmp->data << ", ";
            tmp = tmp->right;
        }
        std::cout << std::endl;
    }

    void in_order() {
        std::cout << "IN ORDER" << std::endl;
        std::cout << "--------" << std::endl;

        root->in_order();
        
        std::cout << std::endl;
        std::cout << "--------" << std::endl;
    }

    void breadth_first() {
        std::cout << "DFS ORDER" << std::endl;
        std::cout << "---------" << std::endl;

        root->depth_first();
        
        std::cout << std::endl;
        std::cout << "---------" << std::endl;
        
    }

    void depth_first() {
        std::cout << "DFS ORDER" << std::endl;
        std::cout << "---------" << std::endl;

        root->depth_first();
        
        std::cout << std::endl;
        std::cout << "---------" << std::endl;
    }
};
