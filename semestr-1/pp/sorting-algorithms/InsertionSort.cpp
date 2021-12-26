//InsertionSort

//pseudokod

InsertionSort(A, n) {
    for i <- 1 to n-1 {
        value <- A[i]
        hole <- i
        while(hole>0 && A[hole-1]>value) {
            A[hole] <- A[hole-1]
            hole <- hole-1
        }
        A[hole] <- value
    }
}

//C++

#include<iostream>
using namespace std;
void InsertionSort(A[], n) {
    for (int i=0; i<n; i++) {
        int value = A[i];
        int hole = i;
        while (hole>0 && A[hole-1]>value) {
            A[hole] = A[hole-1];
            hole = hole - 1;
        }
        A[hole] = value;
    }
}

//zlozonosc: O(n^2)