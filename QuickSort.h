//
// Created by Jose Pablo Ramos M on 8/21/2021.
//
/**
 * @file QuickSort.h
 * @version 1.0
 * @date 8/27/2021
 * @author Jose Pablo Ramos Madrigal
 * @brief Contiene los métodos del QuickSort
 */
#ifndef TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H
#define TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H

using namespace std;
class QuickSort {
public:
    /**
     *
     * @param a
     * @param b
     * @brief Hace un swap con el elemento a y b
     */
    void swap(int* a,int* b);
    /**
     *
     * @param arr
     * @param low
     * @param high
     * @return
     * @brief El último elemento es el pivote, luego el pivote se coloca en
     * la posiciíon correcta en el sorted array y después hace la partición
     * de los elementos conforme si son mayores o menores que el array
     */
    int partition(int arr[],int low,int high);
    /**
     *
     * @param arr
     * @param low
     * @param high
     * @brief Realiza el algoritmo de QuickSort
     */
    void quickSort(int arr[],int low,int high);
    /**
     *
     * @param arr
     * @param size
     * @brief Imprime en patalla el array dado
     */
    void printArray(int arr[], int size);

};


#endif //TAREA_1_JOSE_PABLO_RAMOS_QUICKSORT_H
