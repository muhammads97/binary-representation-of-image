#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr=fopen("d.bmp","rb");
    unsigned char header[76];
    fread(header, sizeof(unsigned char),54,ptr);
    int w= *(int*)&header[18];
    int h= *(int*)&header[22];
    unsigned char bm = *(unsigned char *)&header[0];
    int size= *(int*)&header[34];
    int start=*(int*)&header[10];
    int hs=*(int*)&header[2];
    unsigned char bitsPerPixel= *(unsigned char*)&header[28];
    char p=*(char*)&header[0];
    printf("%d",hs);
    fclose(ptr);
    return 0;
}
