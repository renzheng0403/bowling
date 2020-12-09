//
// Created by renz2048 on 2020/12/9.
//
#include "countScore.h"

void countAndPrint(char *scoreLine);

int main()
{
    char scoreLine1[] = "X X X X X X X X X X X X";
    char scoreLine2[] = "9- 9- 9- 9- 9- 9- 9- 9- 9- 9-";
    char scoreLine3[] = "5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/5";

    countAndPrint(scoreLine1);
    countAndPrint(scoreLine2);
    countAndPrint(scoreLine3);

    return 0;
}

void countAndPrint(char *scoreLine)
{
    int score = 0;
    score = countScore(scoreLine);
    fputs(scoreLine, stdout);
    printf("score is %d\n", score);
}