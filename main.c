#include "countScore.h"
#define MAX_INPUT 32

int main() {
    //一局保龄球的成绩记录
    //char *scoreLine = "X X X X X X X X X X X X";
    char input[MAX_INPUT];
    //char *scoreLine = "9- 9- 9- 9- 9- 9- 9- 9- 9- 9-";
    //char *scoreLine = "-1 -2 -3 -4 -5 -6 -7 -8 -9 -1 ";//第一次击空，第二次击中
    //char *scoreLine = "-/ -/";//第一次击空，第二次补全
    //char *scoreLine = "1- 2- 3- 4- 5- 6- 7- 8- 9- 1-";//第一次击中，第二次击空
    //char *scoreLine = "11 22 33 44 55 66 77 88 99 11";//第一次击中，第二次击中
    //char *scoreLine = "5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5";//第一次击中，第二次击全
    int score = 0;
    while (fgets(input, MAX_INPUT, stdin) != NULL) {
        score = countScore(input);
        printf("Hello, World! score is %d\n", score);
    }
    return 0;
}