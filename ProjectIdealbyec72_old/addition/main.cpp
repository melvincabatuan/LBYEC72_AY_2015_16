#include <stdio.h>
#include <stdlib.h>
#include "../CImg.h"

using namespace cimg_library;

int main() {
    CImg<double> image("img/baby2.bmp"),image2("img/melvin_kyoto.bmp");
    CImgDisplay main_disp(image,"Original Image",0); //display the original image
    CImgDisplay second_disp(image2,"Second Image",0); //display second image

    CImg<double> sumimage(image.dimx(),image.dimy(),1,3,0); //storage of result 
    for (int i=0;i<image.dimx();i++)
        for (int j=0;j<image.dimy();j++)
            for (int k=0;k<3;k++)
                {
                sumimage(i,j,0,k)=image(i,j,0,k) + image2(i,j,0,k);
                printf("%f ",sumimage(i,j,0,k)); // print the sum image matrix
                }
            printf("\n");
    CImgDisplay sum_disp(sumimage,"Added Image",0); //display the result
   
    while (!main_disp.is_closed) // Wait while the image is not closed
    main_disp.wait(); 
    return 0;
}
