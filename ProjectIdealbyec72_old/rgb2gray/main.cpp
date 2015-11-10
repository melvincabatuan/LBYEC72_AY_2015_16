#include<stdio.h>
#include "../CImg.h"
using namespace cimg_library;

FILE *f;
 
int main() {
     
     f = fopen("gray.txt", "w+"); // write only txt file
    
    // test for files not existing. 
    if (f == NULL) 
            {   
              printf("Error! Could not open file\n"); 
              exit(-1);   
            } 
     
	//Construct image from reading an image file. 
	CImg<double> src("img/melvin2.bmp"); 
 
	int width = src.dimx();
	int height = src.dimy();
	int depth = src.dimz();
 
	//New grayscale images.
	CImg<double> gray1(width,height,depth,1);
	CImg<double> gray2(width,height,depth,1);
 
 
	double r,g,b;
	double gr1 = 0;
	double gr2 = 0;
 
	/* Convert RGB image to grayscale image */
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
 
			//Return a pointer to a located pixel value. 
			r = src(i,j,0,0); // First channel RED
			g = src(i,j,0,1); // Second channel GREEN
			b = src(i,j,0,2); // Third channel BLUE
 
 
			//PAL and NTSC
			//Y = 0.299*R + 0.587*G + 0.114*B
			gr1 = round(0.299*((double)r) + 0.587*((double)g) + 0.114*((double)b));
 
			//HDTV 
			//Y = 0.2126*R + 0.7152*G + 0.0722*B
			gr2 = round(0.2126*((double)r) + 0.7152*((double)g) + 0.0722*((double)b));
 
			gray1(i,j,0,0) = gr1;
			gray2(i,j,0,0) = gr2;
		}
 
	}
	
	for (int i=0;i<width;i++)
        for (int j=0;j<height;j++)       
              fprintf(f,"%.0f ",gray1(i,j,0,0)); // print the difference image matrix
                
	fclose (f);
 
	//save the new grayscale images
	gray1.save("imgout/gray5.bmp");
	gray2.save("imgout/gray6.bmp");
 
	//show all images
	(src).display("Source Image");
   (gray1).display("RGB to Grayscale1");
   (gray2).display("RGB to Grayscale2");
	return 0;
}
