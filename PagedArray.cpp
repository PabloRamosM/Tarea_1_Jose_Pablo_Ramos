//
// Created by Jose Pablo Ramos M on 8/19/2021.
//

#include "PagedArray.h"
#include <iostream>
#include <limits>
//Cambiar archivo
/**
 *
 * @param arr
 * Rescribe el archivo
 */
void PagedArray::rewrite_file(int *arr)
{
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt");
    if(!archivo_res){
        cout<< "Error";
    }
    for (int i = 0; i < 10; ++i) {
        archivo_res<<to_string(arr[i]) +"\n";
    }
    archivo_res.close();
}
/**
 *
 * @param saltarLineas
 * @param array
 * @brief Guarda las paginas del archivo en arrays de tamaña 256
 */
void PagedArray::asignPages(int saltarLineas, int *array) {
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt",ios::in);
    int contador=0;
    int integer=20;
    if(!archivo_res){
        cout<< "Error";
    }
    for (int i = 0; i < saltarLineas; ++i) {
        archivo_res.ignore(integer,'\n');
    }
    while ( !archivo_res.eof() ){
        archivo_res>>array[contador];
        contador++;
        if(contador==10){
            archivo_res.close();
            break;
        }
    }
    archivo_res.close();
}

//No funciona para efectos de la tarea
void PagedArray::rewriteFile(int *arr,int saltarlinea){
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt");
    int integer=20;
    int contador=0;
    if(!archivo_res){
        cout<< "Error";
    }
    archivo_res.seekg(std::ios::beg);
    for (int i = 0; i < saltarlinea-1; ++i) {
        archivo_res.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    for (int i = 0; i < 9; ++i) {
        archivo_res<<to_string(arr[i]) +"\n";
    }
    archivo_res.close();
}

// No se logro la sobrecarga del operador [] para efectos de la tarea
int &PagedArray::operator[](int position)
{

}
