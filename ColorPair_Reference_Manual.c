#include "colorpair.h"

void PrintColorReferenceManual(void) {
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", i, colorPairNames);
    }
}


