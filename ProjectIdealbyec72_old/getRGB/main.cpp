#include <stdio.h>
#include <stdlib.h>
#include "../CImg.h"
using namespace cimg_library;

FILE *f;

int main()  
{
    f = fopen("results.txt", "w+"); // write only txt file
    
    // test for files not existing. 
    if (f == NULL) 
            {   
              printf("Error! Could not open file\n"); 
              exit(-1);   
            } 
    
    CImg<int> src("img/melvin2.bmp");
    int width = src.dimx();
    int height = src.dimy();
    fprintf(f,"%d x %d Image \n", width, height);  
    for (int r = 0; r < height; r++)
        for (int s = 0; s < width; s++)
        {
            fprintf(f, "( %d , %d  ) =", r,s);
            fprintf(f, " R%d", (int)src(s,r,0,0));
            fprintf(f, " G%d", (int)src(s,r,0,1));
            fprintf(f, " B%d\n", (int)src(s,r,0,2)); 
         } //EndFor
    fclose (f);
    system("pause"); 
    return 0;
}
