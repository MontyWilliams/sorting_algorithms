#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


void heap_sort(int *array, size_t size) {

int i, t;
if (array == NULL){
    return;
}
if (size < 2){
    return;
}
for (i = size/2 - 1; i >= 0; i--)
    heap_m(array, size, i, size);
for (i = size - 1; i >= 0; i--){
    t = array[0];
    array[0] = array[i];
    array[i] = t;
    if (i > 0){
        print_array(array, size);
    }
    heap_m(array, i, 0, size);
}

}


void heap_m(int a[], int n, int i, size_t size){
int t;
int max = i;
int l = 2 * i + 1;
int r = 2 * i + 2;
if (l < n && a[l] > a[max])
    max = l;
if (r < n && a[r] > a[max])
    max = r;
if (max != i){
    t = a[i];
    a[i] = a[max];
    a[max] = t;
    print_array(a, size);
    heap_m(a, n, max, size);
}
}
