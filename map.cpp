#include <string>

int get_hash(int x) {
    return x;
}

#include "map.hpp"

int main() {
    HashMap<int, std::string> m(10);

    m.add(10, std::string("2.0"));
    m.add(20, std::string("3.0"));
    m.add(30, std::string("4.0"));
    m.add(40, std::string("5.0"));

    std::cout << m.find(30) << std::endl;
    std::cout << m.find(50) << std::endl;
    std::cout << m.find(53) << std::endl;
}
