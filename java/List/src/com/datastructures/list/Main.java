package com.datastructures.list;

public class Main {

    public static void main(String[] args) {
	    // write your code here

        //System.out.println("Hello World");

        MyLinkedList<Integer> l = new MyLinkedList<>();

        for (int i=0; i<20; i++) {
            l.add(i);
        }

        l.print();

        l.remove(12);
        l.remove(5);
        l.remove(l.getLength());
        l.remove(l.getLength()-1);
        l.print();
    }
}
