#include <iostream>
#include <queue>

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

        void breadth_first() {
            std::queue<std::pair<Node<T>*,int>> bfs;
            bfs.push(std::pair<Node<T>*, int>(this, 0));
            int last_level = 0;
            while (!bfs.empty()) {
                auto node = bfs.front();
                Node<T>* tmp = node.first;
                int level = node.second;
                
                if (level != last_level) {
                    std::cout << std::endl;
                    last_level = level;
                }
                
                std::cout << tmp->data << ", ";
                
                bfs.pop();
                
                if (tmp->left)
                    bfs.push(std::pair<Node<T>*,int>(tmp->left,level+1));
                if (tmp->right)
                    bfs.push(std::pair<Node<T>*,int>(tmp->right,level+1));
            }
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
        std::cout << "BFS ORDER" << std::endl;
        std::cout << "---------" << std::endl;

        root->breadth_first();
        
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
