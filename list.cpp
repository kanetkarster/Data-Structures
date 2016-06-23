#include "list.hpp"

int main() {
    LinkedList<int> l;
    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);


    l.remove(3);
    
    l.print();
    std::cout << l.get_length() << std::endl;    
    
    l.remove(5);
    l.remove(4);
    
    l.print();
    std::cout << l.get_length() << std::endl;    
    
    l.remove(2);
    l.remove(1);
    
    l.print();
    std::cout << l.get_length() << std::endl;    
    l.remove(10000);

    l.append(69);
    l.append(420);
    
    l.print();

    l.remove(10000);

    std::cout << l.get_length() << std::endl;    
}

