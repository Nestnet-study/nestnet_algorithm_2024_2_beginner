#include <stdio.h>
#include <string.h>

 int arr[26]; 
 char word[1000000]; 

int main () {

    int size; 
    int max = 0; 
    char c; 

   scanf("%s",word); 
   size = strlen(word); 

    for(int i = 0; i < size; i++) 
        if(word[i] >= 'a') 
        arr[word[i] - 'a']++;
        else arr[word[i]- 'A']++;

    for(int i = 0; i < 26; i++)
        if(arr[i] == max){ 
            c = '?';
        }
        else if(arr[i] > max){
            max = arr[i];
            c = i + 'A';
        }

    printf("%c", c);

    return 0;
}