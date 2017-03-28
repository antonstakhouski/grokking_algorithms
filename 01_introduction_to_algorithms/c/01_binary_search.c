#include <stdio.h>

#define size 5

int binary_search(int* array, int array_size, int item);

int binary_search(int* array, int array_size, int item){
    int high = size - 1;
    int low = 0;
    int mid, guess;

    while(low <= high){
        mid = (low + high) / 2;
        guess = array[mid];
        if(guess == item){
            return mid;
        }
        if(guess > item){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    // if item was not found
    return -1;
}

int main(){
    int my_array[size] = {1, 3, 5, 7, 9};

    printf("%d\n", binary_search(my_array, size, 3)); // => -1
    printf("%d\n", binary_search(my_array, size, -1)); // => -1
    return 0;
}
