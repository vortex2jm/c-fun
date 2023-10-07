#include <stdio.h>

int main(int argc, char const *argv[])
{
    char byte = 0x0;

    // 01001000 - 0x48 - H
    byte = byte | 1 << 3;
    byte = byte | 1 << 6;
    printf("%c", byte);

    // 01100101 - 0x65 - e
    byte = byte & 1 << 6;
    byte = byte | 1;
    byte = byte | 1 << 2;
    byte = byte | 1 << 5;
    printf("%c", byte);

    // 01101100 - 0x6c - l
    byte = byte & ~(1);
    byte = byte | 1 << 3;    
    printf("%c%c", byte, byte);

    // 01101111 - 0x6f - o
    byte = byte | 1;
    byte = byte | 1 << 1;
    printf("%c", byte);

    // 00100000 - 0x20 - space
    byte = byte & 1 << 5;
    printf("%c", byte);

    // 01110111 - 0x77 - w
    byte = byte | 1;
    byte = byte | 1 << 1;
    byte = byte | 1 << 2;
    byte = byte | 1 << 4;
    byte = byte | 1 << 6;
    printf("%c", byte);

    // 01101111 - 0x6f - o
    byte = byte & ~(1 << 4);
    byte = byte | 1 << 3;
    printf("%c", byte);

    // 01110010 - 0x72 - r
    byte = byte & ~(1);
    byte = byte & ~(1 << 2);
    byte = byte & ~(1 << 3);
    byte = byte | 1 << 4;
    printf("%c", byte);

    // 01101100 - 0x6c - l
    byte = byte & ~(1 << 1);
    byte = byte | 1 << 2;
    byte = byte | 1 << 3;
    byte = byte & ~(1 << 4);
    printf("%c", byte);

    // 01100100 - 0x64 - d
    byte = byte & ~(1 << 3);
    printf("%c", byte);

    // 00100001 - 0x21 - !
    byte = byte & ~(1 << 6);
    byte = byte & ~(1 << 2);
    byte = byte | 1;
    printf("%c", byte);

    // 00001010 - 0x0a - \n
    byte = byte ^ byte;
    byte = byte | 1 << 1;
    byte = byte | 1 << 3;
    printf("%c", byte);

    return 0;
}
