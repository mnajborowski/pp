package com.company;

public class Counter {
    protected long count = 0;
    synchronized public void add(long value) {
        this.count = this.count + value;
    }
    public long getCount() {
        return count;
    }
}
