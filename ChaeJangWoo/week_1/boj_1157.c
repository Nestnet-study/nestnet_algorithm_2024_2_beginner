#include<stdio.h>
#include<string.h>

int main(void){
    char s[1000000];
    int n[26] = { 0, };
    long len;
    int max = 0;
    int k = 0;
    int m = 0;
    scanf("%s", s);
    len = strlen(s);
    
    for(int i = 0 ; i < len; i++){
        for(int j = 'a'; j <= 'z'; j++){
            if(s[i] == j) n[j-'a']++;
        }
    }
    for(int i = 0 ; i < len; i++){
        for(int j = 'A'; j <= 'Z'; j++){
            if(s[i] == j) n[j-'A']++;
        }
    }
    
    max = n[0];
    for(int i = 0; i < 26; i++){
        if(max < n[i])
        {
            max = n[i];
            k = i;
        }
    }
    for(int i = 0; i < 26; i++){
        if(max == n[i])
            m++;
    }
    if(m > 1)
        printf("?\n");
    else
        printf("%c", k+'A');
}