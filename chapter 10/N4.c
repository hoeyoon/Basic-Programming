#include <stdio.h>

#define MAX_LENGTH 128 //�Է� ���ڿ� �ִ� ����
#define MAX_WORDS 32 //�ܾ��� �ִ� ����
#define MAX_WORD_LENGTH 32 //�ܾ��� �ִ� ����

int main() {

    char input[MAX_LENGTH];
    char sliced[MAX_WORDS][MAX_WORD_LENGTH];

    int wordCount = 0;
    int wordLength = 0;

    gets(input);

    for (int i = 0; i < MAX_LENGTH; i++) {


        if (input[i] != ' ') { //����(space)�� �ƴ� �� wordCount��° �ܾ� ����

            sliced[wordCount][wordLength] = input[i];

            wordLength++;

        }
        else if (input[i] == ' ') { //����(space)�� �� wordCount��° �ܾ� ���� ����

            sliced[wordCount][wordLength] = '\0';

            wordLength = 0;
            wordCount++;

        }
        if (input[i] == '.') { //���� ����(\0)�� �� ���� ����

            sliced[wordCount][wordLength - 1] = '\0';
            break;

        }

    }

    //���ڿ� �ܾ� ������ �Ųٷ� ���
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