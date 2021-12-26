//BubbleSort

//pseudokod

BubbleSort(A, n) {
    for i <- 1 to n-1 {
        for j <- 0  to n-2 {
            if (A[j]>A[j+1]) swap(A[j], A[j+1])
        }
    }
}

//C++

#include<iostream>
using namespace std;
void BubbleSort(int A[], int n) {
    for (int i=1; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if (A[j]>A[j+1]) swap(A[j], A[j+1]);
    }
}
}

//zlozonosc: O(n^2)