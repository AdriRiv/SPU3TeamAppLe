#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* selectRandomLine(char* path  ){
    srand(time(NULL));
    
    
    FILE* file =  fopen("paises.txt", "r"); 
    char currentLine[10];

    //int x = 0;
    

    while (  fscanf( file, "%s", currentLine ) != EOF  )
    {
        
        int line = 0;
        if(line==rand()%21)
        {   

            char* fila = currentLine;
            
            
            return fila;
        }
        
    
    }   
    
    fclose(file);  
    char* line = currentLine;
    return line;
};