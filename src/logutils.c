#include <stdio.h>

static void log(int type, char *str, int d) {
    if (1 == type) {
        fprintf(stderr, "# %s\n", str);
    }
    else {
        fprintf(stderr, "# %d\n", d);
    }
}

void log_str(char *str) {
    log(1, str, 0);
}

void log_int(int d) {
    log(2, "", d);
}


