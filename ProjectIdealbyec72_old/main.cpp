#include <stdio.h>
#include <stdlib.h>
#include "CImg.h"
using namespace cimg_library;

int main() {
    CImg<unsigned int> image("img/melvin2.bmp");
    //retrieve image dimensions
    const unsigned int width = image.dimx();
    const unsigned int height = image.dimy();
    
    //display dimensions
    printf("The height of the image is %d\n",height);
    printf("The width of the image is %d\n",width);
    system("PAUSE");

    CImgDisplay main_disp(image,"Image",0); //display the original image
    //CImg<double> darkimage(image.dimx(),image.dimy(),1,3,0);
    for (int i=0;i<image.dimx();i++)
        for (int j=0;j<image.dimy();j++)
            for (int k=0;k<3;k++)
                {
                printf("%d ",image(i,j,0,k)); // print the original image matrix
                //darkimage(i,j,0,k)=image(i,j,0,k)/2;
                //printf("%f ",darkimage(i,j,0,k)); // print the dark image matrix
                }
            printf("\n");
    //CImgDisplay dark_disp (darkimage,"Dark Image",0); //display dark image

/*
    CImg<double> subimage(image.dimx(),image.dimy(),1,3,0);
    for (int i=0;i<image.dimx();i++)
        for (int j=0;j<image.dimy();j++)
            for (int k=0;k<3;k++)
                {
                subimage(i,j,0,k)=image(i,j,0,k) - darkimage(i,j,0,k);
                printf("%f ",subimage(i,j,0,k)); // print the dark image matrix
                }
            printf("\n");
    CImgDisplay sub_disp(subimage,"Subtracted Image",0); //display dark image

*/

  /*
    CImg<double> image2("img/baby.bmp");
    CImgDisplay main_disp2(image2,"Image2",0);
    CImg<double> darkimage2(image2.dimx(),image2.dimy(),1,3,0);
    for (int i=0;i<image2.dimx();i++)
        for (int j=0;j<image2.dimy();j++)
            for (int k=0;k<3;k++)
                darkimage2(i,j,0,k)=image2(i,j,0,k);
    CImgDisplay dark_disp2(darkimage2,"Dark Image",0); //Display dark image
    */
    
    while (!main_disp.is_closed) // Wait while the image is not closed
    main_disp.wait();
    
    return 0;
}
