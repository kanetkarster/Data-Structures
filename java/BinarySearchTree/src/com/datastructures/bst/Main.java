package com.datastructures.hashtable;

public class Main {

    public static void main(String[] args) {
	// write your code here
        BST<Integer> tree = new BST<>();
        tree.add(10);

        tree.add(15);
        tree.add(17);
        tree.add(13);

        tree.add(5);
        tree.add(3);
        tree.add(1);
        tree.add(4);


        tree.in_order();

        System.out.println(tree.find(13));
        System.out.println(tree.find(4));

        System.out.println(tree.find(10));
        System.out.println(tree.find(1));
        System.out.println(tree.find(3));
        System.out.println(tree.find(11));
        System.out.println(tree.find(-2));
        System.out.println(tree.find(130));

        tree.in_order();

    }
}
