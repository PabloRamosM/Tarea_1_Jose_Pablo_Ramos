//
// Created by Jose Pablo Ramos M on 8/19/2021.
//

#include "PagedArray.h"
#include <iostream>
#include <sstream>
///
/// \param arra
//Meterle un array como parametro
void PagedArray::store_results(int *arra) {
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt");
    count=0;
    if(!archivo_res){
        cout<< "Error al abrir archivo";
    }
    while (!archivo_res.eof()){

        archivo_res>>arra[count];
        count++;
    }
    archivo_res.close();
}
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
void PagedArray::asig(int *arrays,int i,int x) //Resolver problema de exit code
{
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt",ios::in);
    count=0;
    int pos=0;
    int num=0;
    if(!archivo_res)
    {
        cout<<"Error";
    }
    while (getline(archivo_res,line))
    {
        count++;
        if(count>=(10*i) && count<=(10*x)){
            if(pos>=10){
                archivo_res.close();
                break;
            }
            //num= atoi(line.c_str());
            arrays[pos]= stoi(line);
            //archivo_res>>arrays[pos];No hay diferencia entre uno y el otro
            pos++;
        }
    }
    archivo_res.close();
}
int &PagedArray::operator[](int position)
{

    pagefull[0]=*pages;
    pagefull[1]=*pages1;
    return pagefull[position];
}

