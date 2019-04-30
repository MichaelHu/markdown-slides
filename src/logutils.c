#include <stdio.h>

static void log_common(int type, char *str, int d) {
    if (1 == type) {
        fprintf(stderr, "# %s\n", str);
    }
    else {
        fprintf(stderr, "# %d\n", d);
    }
}

void log_str(char *str) {
    log_common(1, str, 0);
}

void log_int(int d) {
    log_common(2, "", d);
}


