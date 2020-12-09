//
// Created by renz2048 on 2020/12/9.
//
#include "countScore.h"

int pinOfFrame(char *scoreLine, int *status)
{
    int pin = 0;
    switch (*scoreLine) {
        case 'X': { //第一次击全
            if (!*(scoreLine) && !isspace(*(scoreLine+1))) {
                printf("a strike, only have one turn in one frame\n");
                exit(1);
            }
            pin += 10;
            *status = STRIKE;
            break;
        }
        case '-': { //第一次击空
            if (*(scoreLine + 1) == '/') {
                pin += 10;
                *status = SPARE;
            } else {
                pin += pinOfNextThrow(scoreLine + 1);
            }
            break;
        }
        default: { //第一次没有击全
            if (isdigit(*scoreLine)) {
                if (*(scoreLine + 1) == '/') {
                    pin += 10;
                    *status = SPARE;
                } else {
                    pin += *scoreLine - '0';
                    pin += pinOfNextThrow(scoreLine + 1);
                }
            } else {
                printf("wrong 1\n");
                exit(1);
            }
        }
    }

    return pin;
}

/*
 * 第二次击球，有击空，击中未补全，补全三种情况，计算击倒pin数
 */
int pinOfNextThrow(char *scoreLine)
{
    int pin = 0;
    switch (*scoreLine) {
        case '-': { //第二次击空
            break;
        }
        default: { //第二次没有补完
            if (isdigit(*scoreLine)) {
                pin = *scoreLine - '0';
            } else {
                printf("wrong 2\n");
                exit(1);
            }
        }
    }
    return pin;
}

int pinOfBonusThrow(char *scoreLine)
{
    int pin = 0;
    if (*scoreLine) {
        while (isspace(*scoreLine))
            scoreLine++;//排除空格
        switch (*scoreLine) {
            case 'X': {
                pin = 10;
                break;
            }
            case '-': { //第二次击空
                break;
            }
            default: { //第二次没有补完
                if (isdigit(*scoreLine)) {
                    pin = *scoreLine - '0';
                } else {
                    printf("wrong 2\n");
                    exit(1);
                }
            }
        }
    }
    return pin;
}

int countScore(char *scoreLine)
{
    int score = 0;
    int status = COMMON;

    for (int i = 0; i < 10; ++i) {
        score += pinOfFrame(scoreLine, &status);
        if (status == STRIKE) {
            scoreLine++;
            while (isspace(*scoreLine))
                scoreLine++;//排除空格
            score += pinOfFrame(scoreLine, &status);
            if (status == STRIKE) {
                score += pinOfBonusThrow(scoreLine + 1);
            }
        } else if (status == SPARE) {
            scoreLine += 2;
            score += pinOfBonusThrow(scoreLine);
        } else {
            scoreLine += 2;
        }
        while (isspace(*scoreLine))
            scoreLine++;//排除空格
    }
    return score;
}
