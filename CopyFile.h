//
// Created by Jose Pablo Ramos M on 8/19/2021.
//

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
    void CopiarFile();


};


#endif //TAREA_1_JOSE_PABLO_RAMOS_COPYFILE_H
