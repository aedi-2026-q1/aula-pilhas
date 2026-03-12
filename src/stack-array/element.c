#include "element.h"

#include <limits.h>

#include <stdio.h>

void element_print(Element e) {
    printf("%d", e);
}

Element element_null(void) {
    return INT_MIN;
}