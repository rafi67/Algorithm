#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int leftPos, int rightPos, int rightEnd) {

    int n1 = rightPos - leftPos + 1;
    int n2 = rightEnd - rightPos;

    auto *L = new int[n1], *M = new int[n2];

    for(int i=0; i<n1; i++) L[i] = a[leftPos+i];

    for(int i=0; i<n2; i++) M[i] = a[rightPos+1+i];

    auto i = 0, j = 0;
    int k = leftPos;

    while(i<n1 && j<n2) {
        if(L[i]<=M[j]) {
            a[k] = L[i];
            i++;
        } 
        else {
            a[k] = M[j];
            j++;
        }
        k++;
    }

    while(i<n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while(j<n2) {
        a[k] = M[j];
        j++;
        k++;
    }

}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << "\n";
}

void mergesort(int a[], int left, int right) {

    if(left==right) return;
    
    auto center = (left+right) / 2;
    mergesort(a, left, center);
    mergesort(a, center+1, right);
    merge(a, left, center, right);

} 

int main() {

    ios::sync_with_stdio(0);

    int a[] = {3, 5, 6, 7, 8, 2, 1, 4};

    int size = sizeof(a) / sizeof(a[0]);

    cout << "Before sorted:\n";

    printArray(a, size);

    mergesort(a, 0 , size-1);

    cout << "After sorted:\n";

    printArray(a, size);

    return 0;

}