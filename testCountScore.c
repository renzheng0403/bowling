//
// Created by renz2048 on 2020/12/9.
//
#include "countScore.h"

void countAndPrint(char *scoreLine);

int main()
{

    char *scoreLineArray[16] = {
            "X X X X X X X X X X X X",
            "9- 9- 9- 9- 9- 9- 9- 9- 9- 9-",
            "5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/5",
            "X X X X X X X X X X X 1",
            "X X X X X X X X X X X -",
            "X X X X X X X X X X 11",
            "X X X X X X X X X X 1/",
            "X X X X X X X X X -/ X",
            "X X X X X X X X X -/ -",
            "X X X X X X X X X -/ 1",
            "X X X X X X X X X 1/ X",
            "X X X X X X X X X 11",
            "X X X X X X X X X 1-",
            "11 11 11 11 11 11 11 11 11 11",
            "-- -- -- -- -- -- -- -- -- --",
            "-/ -/ -/ -/ -/ -/ -/ -/ -/ -/ -"
    };

    for (int i = 0; i < 16; ++i) {
        countAndPrint(scoreLineArray[i]);
    }


    /*
    char *scoreLine = "11 11 11 11 11 11 11 11 11 11";
    countAndPrint(scoreLine);
     */

    return 0;
}

void countAndPrint(char *scoreLine)
{
    int score = 0;
    fputs(scoreLine, stdout);
    score = countScore(scoreLine);
    printf(" | %3d\n", score);
}
