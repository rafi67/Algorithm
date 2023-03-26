#include <bits/stdc++.h>

using namespace std;

int binary(int data, int* a, int low, int hi) {
    int mid = (low+hi)/2;
    while(low<=hi) {
        if(a[mid]>data) hi = mid-1;
        else if(a[mid]<data) low = mid+1;
        else return mid;
        mid = (low+hi)/2;
    }
    return -1;
}

int main() {

    int a[] = {12, 44, 100, 233};

    int item;
    scanf("%d", &item);

    int index = binary(item, a, 0, 3);

    if(index>=0) printf("Item found\n");
    else printf("Item not found\n");

    return 0;

}