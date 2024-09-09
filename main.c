#include <stdio.h>
#include <vips/vips.h>

const char characters[] = "`^\",:;Il!i~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";

int main(int argc, char **argv){int main()
    int x, y;
    VIPS_INIT(argv[0]);
    VipsImage *image = vips_image_new_from_file(argv[1], NULL);
    vips_resize(image, &image, 0.25, NULL);
    int width = vips_image_get_width (image);
    int height = vips_image_get_height (image);
    for(y=0; y < height; y++){
        double *vector;
        int n;
        for(x=0; x < width; x++){
            int c = 0;
            vips_getpoint(image, &vector, &n, x, y, NULL);
            double brightness = (vector[0] + vector[1] + vector[2]) / 3;
            c = brightness / 4;
            printf("%c", characters[c]);
            if(x == width - 1)
                printf("\n");
            //printf("%d, %d: %g %g %g, ave: %lf \n", x, y, vector[0], vector[1], vector[2], brightness);
            g_free(vector);
        }
    }
    return 0;
}
