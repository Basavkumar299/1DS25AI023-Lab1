#include <stdio.h>

void traversal(int arr[5]){
    for(int i=0;i<5; i++){
        printf("%d ",arr[i]);
    }
}

void linear_search(int arr[5]){
    int key=4;
    for(int i=0; i<5; i++){
        if(arr[i]==key){
            printf("element %d found at %d ", key, i+1);
        }
    }
}

void max_min(int arr[5]){
    int max=arr[0];
    int min=arr[0];
    for(int i=1; i<5; i++){
     if(arr[i]>max){
         max=arr[i];
     }
     if (arr[i]<min){
         min=arr[i];
     }
    }
    printf("maximum element %d ", max);
    printf("minimum element %d ", min);
}

void insertion(int arr[5]){
    int key_element=6;
    printf("array before insertion \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("inserting an array at the begning \n");
    for(int i=4; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=key_element;
    for(int i=0; i<=5; i++){
        printf("%d ", arr[i]);
    }
}

void deletion(int arr[5]){
    int pos=2;
    printf("array before deletion\n");
    for(int i=pos; i<4; i++){
        arr[i]=arr[i+1];
    }
    printf("array after deletion :\n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}
void sum(int arr[5]){
    int sums=0;
    for(int i=0; i<5; i++){
        sums+=arr[i];
    }
    printf("sum of all the elements is: %d", sums);
}

int main() {
	int arr[5]={1,5,10,6,4};
	
	printf("\n");
	traversal(arr);
	printf("\n");
	linear_search(arr);
	printf("\n");
	max_min(arr);
	printf("\n");
	insertion(arr);
	printf("\n");
	deletion(arr);
	printf("\n");
	sum(arr);
	printf("\n");
	
	return 0;

}

