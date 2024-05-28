# Image-Segmentation-Pro

This repository offers an efficient Graph-Based Image Segmentation implementation. Originally introduced by Pedro F. Felzenszwalb and Daniel P. Huttenlocher in the International Journal of Computer Vision, Volume 59, Number 2, in September 2004. More information can be found [here](http://people.cs.uchicago.edu/~pff/segment/).

The project includes codes for Visual Studio 2015 and Matlab mex solutions.

## Execution Guide

1. In the 'VisualStudio' folder, Debug and Release include 32-bit files, while x64 houses the 64-bit files. To execute, use the following command in windows command line: `EGSeg.exe sigma k min_z input output`. Here, both input and output must be of ppm image file type.
For example: `EGSeg.exe 0.5 1000 20 emir.ppm out.ppm`
After execution, you can obtain the segmented output as `out.ppm` image.

2. Insi