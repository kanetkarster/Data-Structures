package com.datastructures.hashtable;

public class Main {

    public static void main(String[] args) {
	// write your code here
        System.out.println("Hello World");
        Container c;
        HashMap<Container> map = new HashMap<>(10);

        for (int i=0; i<20; i++) {
            c = new Container(i*i);
            map.insert(c);
            c = new Container(i*i + 1);
            map.insert(c);
            c = new Container(i*i + i);
            map.insert(c);
            c = new Container(i*i + i + 1);
            map.insert(c);
        }

        for (int i=0; i<20; i++) {
            c = new Container(i*i);
            if (!map.contains(c)) { System.out.println("Error, should contain: " + c.toString() ); }
            c = new Container(i*i + 1);
            if (!map.contains(c)) { System.out.println("Error, should contain: " + c.toString() ); }
            c = new Container(i*i + i);
            if (!map.contains(c)) { System.out.println("Error, should contain: " + c.toString() ); }
            c = new Container(i*i + i + 1);
            if (!map.contains(c)) { System.out.println("Error, should contain: " + c.toString() ); }
            c = new Container(20*20+1+i);
            if (map.contains(c)) { System.out.println("Error, shouldn't contain: " + c.toString() ); }
        }

    }
}
