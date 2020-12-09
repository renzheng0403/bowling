//
// Created by renz2048 on 2020/12/9.
//

#ifndef BOWLING_COUNTSCORE_H
#define BOWLING_COUNTSCORE_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pinOfFrame(char *scoreLine, int *status);
int pinOfNextThrow(char *scoreLine, int *status);
int pinOfBonusThrow(char *scoreLine);
int countScore(char *scoreLine);

enum {
    COMMON,
    STRIKE,
    SPARE,
};

#endif //BOWLING_COUNTSCORE_H
