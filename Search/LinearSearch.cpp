#include <bits/stdc++.h>

using namespace std;

int main() {

    int a[] = {12, 23, 44, 22};

    int item;

    scanf("%d", &item);

    for(auto i : a)
        if(i==item) {
            printf("Item found\n");
            return 0;
        }
    
    printf("Item not found\n");

    return 0;

}