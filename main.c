#include "countScore.h"
#define MAX_INPUT 32

int main() {
    //һ�ֱ�����ĳɼ���¼
    //char *scoreLine = "X X X X X X X X X X X X";
    char input[MAX_INPUT];
    //char *scoreLine = "9- 9- 9- 9- 9- 9- 9- 9- 9- 9-";
    //char *scoreLine = "-1 -2 -3 -4 -5 -6 -7 -8 -9 -1 ";//��һ�λ��գ��ڶ��λ���
    //char *scoreLine = "-/ -/";//��һ�λ��գ��ڶ��β�ȫ
    //char *scoreLine = "1- 2- 3- 4- 5- 6- 7- 8- 9- 1-";//��һ�λ��У��ڶ��λ���
    //char *scoreLine = "11 22 33 44 55 66 77 88 99 11";//��һ�λ��У��ڶ��λ���
    //char *scoreLine = "5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5/ 5";//��һ�λ��У��ڶ��λ�ȫ
    int score = 0;
    while (fgets(input, MAX_INPUT, stdin) != NULL) {
        score = countScore(input);
        printf("Hello, World! score is %d\n", score);
    }
    return 0;
}