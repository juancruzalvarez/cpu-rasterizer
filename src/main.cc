#include <iostream>
#include <vector>

#include <stdint.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "../lib/stb_image_write.h"

#include "math.h"

struct Color{
    uint8_t r,g,b;
};

struct Triangle {
    Color color;
    math::Vec3 p1, p2, p3;
};

const char* kRenderedImagePath = "render.jpg";
const int kImageWidth = 500;
const int kImageHeight = 500;

double z_buffer[kImageWidth][kImageHeight];
Color frame_buffer[kImageWidth][kImageHeight];



int main() {
    uint8_t data[kImageWidth*kImageHeight*3];
    for(int y = 0; y<kImageHeight;y++){
        for(int x = 0; x < kImageWidth; x++){
            data[(y*kImageWidth + x)*3 + 0] = (y/(float)kImageHeight) *255;   //red
            data[(y*kImageWidth + x)*3 + 1] = (x/(float)kImageWidth) *255;   //green
            data[(y*kImageWidth + x)*3 + 2] = ((x/(float)kImageWidth)+(y/(float)kImageHeight))/2.0f*255; //blue
        }
    }
    stbi_write_bmp(kRenderedImagePath, kImageWidth, kImageHeight, 3, data);
    return 0;
}