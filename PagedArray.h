//
// Created by Jose Pablo Ramos M on 8/19/2021.
//
/**
 * @file PagedArray.h
 * @version 1.0
 * @date 8/27/2021
 * @author Jose Pablo Ramos Madrigal
 * @brief Contiene los métodos de PagedArray
 */
#ifndef TAREA_1_JOSE_PABLO_RAMOS_PAGEDARRAY_H
#define TAREA_1_JOSE_PABLO_RAMOS_PAGEDARRAY_H

#include <fstream>
#include <string>
using namespace std;
class PagedArray {
public:
    fstream archivo_res;
    int pages0[10];
    int pages1[10];
    int pages2[10];
    int pages3[10];
    int pages4[10];
    int pages5[10];
    int count;
    string line;
    /**
     *
     * @param arr
     * @brief Rescribe la primera pagina del archivo
     */
    void rewrite_file(int arr[]);
    /**
     *
     * @param arr
     * @param saltarlinea
     * @brief Rescribe el archivo, pero no para efectos del programa no funciona
     */
    void rewriteFile(int arr[],int saltarlinea);
    /**
     *
     * @param a
     * @param array
     * @brief Guarda las paginas del archivo en arrays de tamaña 256
     */
    void asignPages(int saltarLineas,int array[]);
    /**
     *
     * @param position
     * @brief Sobrecargar el operador []
     */
    int &operator[](int position);
};


#endif //TAREA_1_JOSE_PABLO_RAMOS_PAGEDARRAY_H
