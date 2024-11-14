#include <stdio.h>
#include <string.h>

int hashScore(char sentence[], int range);

int main() {
    char sentence[50];
    int range, result;

    // Get the sentence input
    printf("Enter a sentence (max 50 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if there is one
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    // Get the prime number input from the user
    printf("Enter a prime number: ");
    scanf("%d", &range);

    // Compute the hash score
    result = hashScore(sentence, range);

    // Output 
    printf("The hash score for the given sentence is: %d\n", result);

    return 0;
}

int hashScore(char sentence[], int range) {
    int length = strlen(sentence);
    int sum = 0;

    // Multiply each ASCII value by its index and get the sum
    for (int i = 0; i < length; i++) {
        sum += sentence[i] * i;
    }

    // Apply modulo operation with the given prime number
    return sum % range;
}
