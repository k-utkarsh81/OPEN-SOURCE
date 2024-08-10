#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 1000

typedef struct {
    char word[MAX_WORD_LENGTH];
    int count;
} WordFrequency;

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int findWord(WordFrequency words[], int count, char *word) {
    for (int i = 0; i < count; i++) {
        if (strcmp(words[i].word, word) == 0) {
            return i;
        }
    }
    return -1;
}

void addWord(WordFrequency words[], int *count, char *word) {
    int index = findWord(words, *count, word);
    if (index != -1) {
        words[index].count++;
    } else {
        strcpy(words[*count].word, word);
        words[*count].count = 1;
        (*count)++;
    }
}

void printFrequencies(WordFrequency words[], int count) {
    printf("Word Frequencies:\n");
    for (int i = 0; i < count; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }
}

int main() {
    char paragraph[5000];
    WordFrequency words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    char *token = strtok(paragraph, " \t\n,.!?;:\"()[]{}");
    while (token != NULL) {
        toLowerCase(token);
        addWord(words, &wordCount, token);
        token = strtok(NULL, " \t\n,.!?;:\"()[]{}");
    }

    printFrequencies(words, wordCount);

    return 0;
}
