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
    int pages[10];
    int pages1[10];
    int pagefull[2];
    int count;
    string line;
    void store_results(int arr[]);
    void rewrite_file(int arr[]);
    void asig(int arrrays[],int i,int x);
    int &operator[](int position);
};


#endif //TAREA_1_JOSE_PABLO_RAMOS_PAGEDARRAY_H
