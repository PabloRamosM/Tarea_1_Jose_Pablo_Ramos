//
// Created by Jose Pablo Ramos M on 8/21/2021.
//

#ifndef TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H
#define TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H

using namespace std;
class QuickSort {
public:
    void swap(int* a,int* b);
    int partition(int arr[],int low,int high);
    void quickSort(int arr[],int low,int high);
    void printArray(int arr[], int size);

};


#endif //TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H
