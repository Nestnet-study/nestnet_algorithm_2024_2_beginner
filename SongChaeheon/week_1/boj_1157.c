/*
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
단, 대문자와 소문자를 구분하지 않는다. 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 
주어지는 단어의 길이는 1,000,000을 넘지 않는다. 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 
단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET 26

int main() {
    char word[1000001];
    int frequency[ALPHABET] = { 0 };

    scanf("%s", word);
    
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);  
        frequency[ch - 'a']++;
    }

    int max_freq = 0;
    char max_char = '?';
    int count = 0;

    for (int i = 0; i < ALPHABET; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            max_char = 'A' + i;  
            count = 1;
        }
        else if (frequency[i] == max_freq) {
            count++;
        }
    }

    if (count > 1) {
        printf("?\n");
    }
    else {
        printf("%c\n", max_char);
    }

    return 0;
}
