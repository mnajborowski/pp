//SelectionSort

//pseudokod

SelectionSort(A, n) {
    for i <- 0 to n-2 {
        iMin <- i
        for j <- i+1 to n-1 {
            if (A[j] < AiMin[]) iMin <- j
        }
        temp <- A[i]
        A[i] <- A[iMin]
        A[iMin] <- temp
    }
}

//C++

#include <iostream>
using namespace std;
void SelectionSort(int A[], n) {
    for (int i=0; i<n-1; i++) {
        int iMin = i;
        for (int j=i+1; j<n; j++) {
            if (A[j]<A[iMin]) iMin = j;
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

//zlozonosc: O(n^2)