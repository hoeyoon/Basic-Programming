#include <stdio.h>

#define MAX_LENGTH 128 //입력 문자열 최대 길이
#define MAX_WORDS 32 //단어의 최대 개수
#define MAX_WORD_LENGTH 32 //단어의 최대 길이

int main() {

    char input[MAX_LENGTH];
    char sliced[MAX_WORDS][MAX_WORD_LENGTH];

    int wordCount = 0;
    int wordLength = 0;

    gets(input);

    for (int i = 0; i < MAX_LENGTH; i++) {


        if (input[i] != ' ') { //공백(space)가 아닐 때 wordCount번째 단어 저장

            sliced[wordCount][wordLength] = input[i];

            wordLength++;

        }
        else if (input[i] == ' ') { //공백(space)일 때 wordCount번째 단어 저장 종료

            sliced[wordCount][wordLength] = '\0';

            wordLength = 0;
            wordCount++;

        }
        if (input[i] == '.') { //공백 문자(\0)일 때 저장 종료

            sliced[wordCount][wordLength - 1] = '\0';
            break;

        }

    }

    //문자열 단어 단위로 거꾸로 출력
    for (int i = wordCount; i >= 0; i--) {

        for (int j = 0; j < MAX_WORD_LENGTH; j++) {

            if (sliced[i][j] != '\0') {

                printf("%c", sliced[i][j]);

            }
            else {

                break;

            }

        }

        if (i > 0) {

            printf(" ");

        }

    }

    printf(".");

    return 0;

}