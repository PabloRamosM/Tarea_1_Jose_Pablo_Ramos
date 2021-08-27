#include "CopyFile.h"
#include <iostream>
#include <limits>
using namespace std;
void CopyFile::CopiarFile()
{
    myFile.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo.txt",ios::in);
    archivores.open("C:\\Users\\Jose Pablo Ramos M\\CLionProjects\\Tarea 1 Jose Pablo Ramos\\archivo_resultado.txt",ios::out);
    if(myFile.is_open())
    {
        while (getline(myFile,line,','))
        {
            archivores<<line + "\n";
        }
    }
    myFile.close();
    archivores.close();
}


