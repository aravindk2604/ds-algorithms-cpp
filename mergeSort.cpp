#include <bits/stdc++.h>


void merge(int a[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

    for(i=0; i<n1; ++i){
        L[i] = a[l+i];

    }

    for(j = 0; j<n2; ++j) {
        R[j] = a[m + 1 + j];

    }

    i =0;
    j = 0;
    k =l;
    while(i <n1 && j<n2) {
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
            // k++;
        }

        else{
            a[k] = R[j];
            j++;
            
        }
        k++;
    }
        while(i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }

        while(j < n2) {
            a[k] = R[j];
            j++;
            k++;
        }




    }



void mergeSort(int ar[], int l, int r) {
    if(l < r) {
        int m = l + (r-l)/2;
        mergeSort(ar, l, m);
        mergeSort(ar, m+1, r);

        merge(ar, l, m, r);            
    }
}

void printArray(int arra[], int siz) {
    std::cout << "The array is: \n";
    for(int i=0; i<siz; ++i){
        std::cout << arra[i] << " ";
    }
    std::cout << "\n";
}

int main() {

    int ar[] = {15, 96, 3, 7,84, 2, 3};
    int ar_size = sizeof(ar)/sizeof(ar[0]);

    printArray (ar, ar_size); 

    mergeSort(ar, 0, ar_size - 1);

    printArray(ar, ar_size);

    return 0;
}