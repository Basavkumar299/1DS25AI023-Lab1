#include <stdio.h>

void traversal(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}

void linearSearch(int arr[5]) {
    int key = 3;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            return;
        }
    }

    printf("Element %d not found\n", key);
}

void max_min(int arr[5]) {
    int max = arr[0]; 
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
}

void insert_beginning(int arr[5]) {
    int key = 10;

    
    for (int i = 4; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = key;

    printf("Array after insertion at beginning:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", arr[i]);
    }
}

void deletion(int arr[5]) {
    int pos = 2;

 
    for (int i = pos; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }
}

void sum(int arr[5]){
    int sum=0;
    for (int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    printf("sum of the values is: %d", sum);
}

int main() {
    int arr[5] = {1,5,10,16,4};

    printf("Array traversal:\n");
    traversal(arr);

    printf("\n");
    linearSearch(arr);

    printf("\n");
    max_min(arr);

    printf("\n");
    insert_beginning(arr);

    printf("\n");
    deletion(arr);
    
    printf("\n");
    sum(arr);

    return 0;
}
 