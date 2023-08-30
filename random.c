#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
    char a = rand() % (90 + 1 - 65) + 65;
    return a;
}