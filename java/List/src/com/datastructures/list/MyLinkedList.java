package com.datastructures.list;

/**
 * Created by jit on 7/6/16.
 */
public class MyLinkedList<T> {
    protected Node<T> tail, head;

    public int getLength() {
        return length;
    }

    protected int length = 0;

    protected static class Node<U> {
        protected U data;
        protected Node<U> next, prev;

        // create a Node
        Node(U item) {
            this.data = item;
            this.next = null;
            this.prev = null;
        }
    }

    MyLinkedList() {
        this.head = this.tail = null;
        length = 0;
    }

    public void add(T val) {

        if (head == null) {
            head = new Node<>(val);
            tail = head;
        }
        else {
            tail.next = new Node<>(val);
            tail.next.prev = tail;
            tail = tail.next;
        }
        length++;
    }

    public void remove(int pos) {

        if (pos >= length) {
            return;
        }

        Node<T> iter = head;
        for (int i=0; i<pos; i++) {
            iter = iter.next;
        }

        iter.prev.next = iter.next;
        length--;
    }

    void print() {
        Node<T> iter = head;
        while (iter != null) {
            System.out.format("%d, ", iter.data);
            iter = iter.next;
        }
        System.out.println();
    }

}
