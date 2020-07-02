#include <stdio.h>
#include <string.h>

int main() {
    size_t length;  /*size_t je definsiana u string.h kao unsigned integer */
    char buf[80];

    while (1) {
        puts("\nEnter a line of text:");
        gets(buf);
        
        length = strlen(buf);

        if (length != 0)
            printf("\nThat line is %u characters long.", length);
        else
            break;

    }


    return 0;
}