#include <stdio.h>
#include <stdlib.h>
#include "../CImg.h"
using namespace cimg_library;

int main() 
{
    int numberOfBins=256; // colour depth
    CImg<float> image("img/lenna.bmp");
    CImgDisplay main_disp(image,"Original Image",0); //display the original image
    
    const CImg< float > histogram = image.histogram( numberOfBins );
    main_disp.display( histogram ); // display 

    // wait until display is closed
   while ( !main_disp.is_closed) 
    main_disp.wait(); 
}   
   
  
