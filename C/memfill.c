#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

int main() {
    char *p;
    size_t s = 100 * 1024 * 1024;

    for (;;)
    {
        p = malloc(s);
        bzero(p, s);
        sleep(1);
    }

    /* unreached */
}
