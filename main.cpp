#include <iostream>
#include "CopyFile.h"
#include "PagedArray.h"
#include "QuickSort.h"

using namespace std;

int main() {
    //Primero se copia el archivo
    CopyFile copyFile;
    copyFile.CopiarFile();

    //Primer resulatdos
    PagedArray pagedArray;
    pagedArray.store_results(pagedArray.pages);

    //Hacer el quick Sort
    int n =sizeof(pagedArray.pages)/sizeof(pagedArray.pages[0]);
    QuickSort quickSort;
    quickSort.quickSort(pagedArray.pages,0,n-1);

    //cout<<sizeof(pagedArray.pages)/sizeof(pagedArray.pages[0])<<endl;
    quickSort.printArray(pagedArray.pages,n);

    //Hacemos el rewrite
    //pagedArray.rewrite_file(pagedArray.pages);

    // FASE DOS Hacemos la segunda pagina
    //PagedArray pagedArray1;
    //pagedArray1.asig(pagedArray1.pages1,2,3);
    //int a= sizeof(pagedArray1.pages1)/ sizeof(pagedArray1.pages1[0]);
    //quickSort.quickSort(pagedArray1.pages1,0,a-1);
    //quickSort.printArray(pagedArray1.pages1,a);
    //pagedArray.asig(pagedArray.pages1,1);
    //int a=sizeof(pagedArray.pages1)/sizeof(pagedArray.pages1[0]);
    //quickSort.quickSort(pagedArray.pages1,0,a-1);
    //quickSort.printArray(pagedArray.pages1,a);



    return 0;
}
