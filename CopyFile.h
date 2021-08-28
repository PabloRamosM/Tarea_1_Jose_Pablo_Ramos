//
// Created by Jose Pablo Ramos M on 8/19/2021.
//
/**
 * @file CopyFile.h
 * @version 1.0
 * @date 8/27/2021
 * @author Jose Pablo Ramos Madrigal
 * @brief Contiene el método para copiar el archivo resultado
 */
#ifndef TAREA_1_JOSE_PABLO_RAMOS_COPYFILE_H
#define TAREA_1_JOSE_PABLO_RAMOS_COPYFILE_H

#include <fstream>
#include <string>
#include <iostream>
#include <limits>
using namespace std;
class CopyFile {
public:
    fstream myFile;
    fstream archivores;
    string line;
    /**
     * @brief Crea una copia del archivo original
     */
    void CopiarFile();
};


#endif //TAREA_1_JOSE_PABLO_RAMOS_COPYFILE_H
