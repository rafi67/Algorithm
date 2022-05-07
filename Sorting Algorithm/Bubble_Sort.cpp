#include <bits/stdc++.h>

using namespace std;

void bubble_Sort(int* a, int size) {

    int i=0, j = 0;
    while(size) {
        if(a[j]>a[j+1]) {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        j++;
        if(j==size) {
            size--;
            ++i;
            j = 0;
        }
    }

}

int main() {

    ios::sync_with_stdio(0);

    int a[] = {3, 5, 2, 1, 4, 6, 8, 7};

    int size = sizeof(a) / sizeof(a[0]);

    bubble_Sort(a, size-1);

    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;

}