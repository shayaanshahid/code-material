#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "This is a sample sentence.";
    char word[] = "sample";

    char *result = strstr(sentence, word);

    if (result != NULL) {
        printf("'%s' found in the sentence at position %ld.\n", word, result - sentence);
    } else {
        printf("'%s' not found in the sentence.\n", word);
    }

    return 0;
}





