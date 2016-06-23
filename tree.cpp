#include "tree.hpp"

int main() {
    BinaryTree<int> t;

    t.print_left();

    int vals[] = {5, 4, 6, 1, 9, 2, 8, 3, 7, 0, 10};

    for (int i=0; i<=10; i++) {
        t.add(vals[i]);
    }

    t.print_left();
    t.print_right();

    t.in_order();
    t.depth_first();
}

