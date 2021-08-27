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
//Falta parametro
void PagedArray::asignPages(int a,int *array) {
    archivo_res.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt",ios::in);
    int contador=0;
    int integer=20;
    if(!archivo_res){
        cout<< "Error";
    }
    for (int i = 0; i < a; ++i) {
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

//No funciona
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






/*while (getline(archivo_res,line,'\n')){
    line=to_string(arr[contador]);
    archivo_res<<line+ "\n";
    contador++;
    if(contador==10){
        archivo_res.close();
        break;
    }
}*/







/*void PagedArray::asig(int *arrays,int i,int x) //Resolver problema de exit code
{
     for (int i = 0; i < 10; ++i) {
        archivo_res<<to_string(arr[i]);
    }
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
}*/

int &PagedArray::operator[](int position)
{

}

