package com.datastructures.hashtable;

/**
 * Created by jit on 7/9/16.
 */
public class Container implements Hashable {
    int val;

    Container(int x) {
        val = x;
    }

    @Override
    public String toString(){
        return Integer.toString(val);
    }

    public int get_hash() {
        return val;
    }
}

