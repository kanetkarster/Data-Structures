package com.datastructures.hashtable;

import static java.lang.Math.abs;

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

    @Override
    public boolean equals(Object obj) {
        if (obj == null || this.getClass() != obj.getClass()) {
            return false;
        }
        final Container other = (Container) obj;
        return (other.val == this.val);
    }

    public int get_hash() {
        return abs(val);
    }
}

