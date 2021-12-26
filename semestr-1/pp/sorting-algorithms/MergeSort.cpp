//MergeSort

//pseudokod

Merge(L, R, A) {
    nL <- length(L)
    nR <- length(R)
    i <- 0
    j <- 0
    k <- 0
    while (i<nL && j<nR) {
        if (L[i]<=R[j]) {
            A[k] <- L[i]
            i <- i+1
        }
        else {
            A[k] <- R[j]
            j <- j+1
        }
        k <- k+1
    }
    while (i<nL) {
        A[k] <- L[i]
        i <- i+1
        k <- k+1
    }
    while (j<nR) {
        A[k] <- R[j]
        j <- j+1
        k <- k+1
    }
}

MergeSort(A) {
    n <- length(A)
    if (n<2) return
    mid <-n/2
    left <- array_of_size(mid)
    right <- array_of_size(n-mid)
    for i <- 0 to mid-1 {
        left[i] <- A[i]
    }
    for i <- mid to n-1 {
        right[i-mid] <- A[i]
    }
    MergeSort(left)
    MergeSort(right)
    Merge(left,right,A)
}