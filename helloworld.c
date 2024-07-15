#include <unistd.h>

void putchar(char a){
    write(1, &a, 1);
}

int main(void) {

    putchar('a');
    return (0);
}