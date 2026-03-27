#include <stdio.h>

#include "util.h"

void logger_global(char* message) {
    static int count = 0;
    printf("log %2d: %s\n", ++count, message);
}

void task2() {
    for(int i = 0; i < 4; i++) {
        logger_static_inline("task2");
        logger_global("task2");
    }
}
