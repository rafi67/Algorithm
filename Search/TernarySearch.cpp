#include <bits/stdc++.h>

using namespace std;

int ternary(int data, int* a, int left, int right) {
    int mid1 = left+(right-left)/3;
    int mid2 = right-(right-left)/3;
    while(left<=right) {
        if(a[mid1]==data) return mid1;
        else if(a[mid2]==data) return mid2;
        else if(a[mid1]>data) right = mid1 - 1;
        else if(a[mid2]<data) left = mid2 + 1;
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
        mid1 = left+(right-left)/3;
        mid2 = right-(right-left)/3;
    } 
    return -1;
}

int main() {

    int a[] = { 12, 23, 100, 200 };

    int item;
    scanf("%d", &item);

    int index = ternary(item, a, 0, 3);

    if(index>=0) printf("Item found\n");
    else printf("Item not found\n");

    return 0;

}