package com.datastructures.hashtable;

/**
 * Created by jit on 7/6/16.
 */
public class BST<T extends Comparable<T> > {

    private Node root = null;

    protected class Node<U extends Comparable<U>>{
        U data;
        Node left;
        Node right;

        private Node(U data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }

    }

    public BST() {
        root = null;
    }

    private void add_helper(Node root, T data) {

        if (root.data.compareTo(data) > 0) {
            if (root.left == null) {
                root.left = new Node(data);
            } else {
                add_helper(root.left, data);
            }
        } else {
            if (root.right == null) {
                root.right = new Node(data);
            } else {
                add_helper(root.right, data);
            }
        }
    }

    public void add(T data) {
        if (root == null) {
            root = new Node(data);
            return;
        }

        add_helper(root, data);

    }

    public boolean find(T value) {
        Node it = root;

        while (it != null) {
            //System.out.println(it.data);
            if (it.data == value) {
                return true;
            }
            else if (it.data.compareTo(value) > 0) {
                it = it.left;
            }
            else {
                it = it.right;
            }
        }

        return false;

    }

    private void in_order_helper(Node root) {

        if (root == null) {
            return;
        }

        in_order_helper(root.left);
        System.out.format("%d, ", root.data);
        in_order_helper(root.right);
    }

    public void in_order() {
        in_order_helper(root);
        System.out.println();
    }

}
