# Image to ASCII Converter

This is a simple C program that converts images to ASCII art using the `libvips` library. The program reads an image file, resizes it, and then maps the pixel brightness to corresponding ASCII characters.

## Features
- Converts any image format supported by `libvips` to ASCII art.
- Simple and lightweight codebase.

## Prerequisites
- [libvips](https://libvips.github.io/libvips/): An image processing library that needs to be installed on your system.


## Build Instructions

1. Clone the repository or download the source code.
2. Compile the code using the following command:
   ```bash
   gcc -o img_to_ascii main.c `pkg-config vips --cflags --libs`
   ```

## Usage

To convert an image to ASCII art, run the following command:
```bash
./img_to_ascii <image_file>
```

For example:
```bash
./img_to_ascii sample.jpg
```

