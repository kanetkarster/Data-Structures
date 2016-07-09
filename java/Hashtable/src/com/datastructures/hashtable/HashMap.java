package com.datastructures.hashtable;

import java.util.ArrayList;

/**
 * Created by jit on 7/9/16.
 */
public class HashMap<T extends Hashable> {
    ArrayList<T>[] ls;
    final int sz;
    HashMap(int length) {
        sz = length;
        ls = new ArrayList[sz];
    }

    void insert(T data) {
        int hash = data.get_hash() % sz;
        ls[hash].add(data);
    }

    boolean contains(T data) {
        int hash = data.get_hash() % sz;
        ArrayList<T> where = ls[hash];
        for (T val : where) {
            if (val.equals(data)) {
                return true;
            }
            System.out.println(data);
        }
        return false;
    }

}
