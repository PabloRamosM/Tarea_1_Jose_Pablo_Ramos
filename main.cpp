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
    pagedArray.asignPages(0,pagedArray.pages);
    pagedArray.asignPages(10,pagedArray.pages1);
    pagedArray.asignPages(20,pagedArray.pages2);

    //Hacer el quick Sort
    int n =sizeof(pagedArray.pages)/sizeof(pagedArray.pages[0]);
    QuickSort quickSort;
    //Quicksort de page
    quickSort.quickSort(pagedArray.pages,0,n-1);
    quickSort.printArray(pagedArray.pages,n);

    //Quicksort de page1
    quickSort.quickSort(pagedArray.pages1,0,10-1);
    quickSort.printArray(pagedArray.pages1,10);

    //Quicksort de page2
    quickSort.quickSort(pagedArray.pages2,0,10-1);
    quickSort.printArray(pagedArray.pages2,10);
    return 0;
}
