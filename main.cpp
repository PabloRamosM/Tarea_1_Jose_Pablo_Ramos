#include <iostream>
#include "CopyFile.h"
#include "PagedArray.h"
#include "QuickSort.h"

using namespace std;

int main() {
    //Primero se copia el archivo
    CopyFile copyFile;
    copyFile.CopiarFile();

    //Asignar paginas del archivo
    PagedArray pagedArray;
    pagedArray.asignPages(0,pagedArray.pages0);
    pagedArray.asignPages(10,pagedArray.pages1);
    pagedArray.asignPages(20,pagedArray.pages2);

    //Hacer el quick Sort
    int n =sizeof(pagedArray.pages0)/sizeof(pagedArray.pages0[0]);
    QuickSort quickSort;
    //Quicksort de page
    quickSort.quickSort(pagedArray.pages0,0,n-1);
    quickSort.printArray(pagedArray.pages0,n);

    //Quicksort de page1
    quickSort.quickSort(pagedArray.pages1,0,10-1);
    quickSort.printArray(pagedArray.pages1,10);

    //Quicksort de page2
    quickSort.quickSort(pagedArray.pages2,0,10-1);
    quickSort.printArray(pagedArray.pages2,10);

    //Hacer el rewrite de la primera pagina
    pagedArray.rewrite_file(pagedArray.pages0);
    return 0;
}
