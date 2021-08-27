//
// Created by Jose Pablo Ramos M on 8/19/2021.
//

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
    void rewrite_file(int arr[]);
    void rewriteFile(int arr[],int saltarlinea);
    void asignPages(int a,int array[]);
    int &operator[](int position);
};


#endif //TAREA_1_JOSE_PABLO_RAMOS_PAGEDARRAY_H
