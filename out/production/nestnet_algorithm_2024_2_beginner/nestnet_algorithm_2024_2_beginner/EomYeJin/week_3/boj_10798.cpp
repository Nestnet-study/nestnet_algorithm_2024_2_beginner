#include <iostream>
#include <cstring>
using namespace std;


char word[5][15];

int main() {
    memset(word, '\0', sizeof(word));

    for(int i = 0; i<5; i++) {
        cin >> word[i];
    }
    
    for( int j = 0; j<15; j++) {
        for (int i = 0; i<5; i++) {
            if(word[i][j] !='\0') {
                cout << word[i][j]; 
            } 
        }
    }
    return 0;
}