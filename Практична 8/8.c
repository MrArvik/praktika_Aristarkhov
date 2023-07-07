#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Функція для обчислення факторіалу числа
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Функція для підрахунку кількості анаграм слів
int countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0}; // Масив для збереження частоти кожного символу
    // Обчислення частоти кожного символу у слові
    for (int i = 0; i < length; i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            frequency[word[i] - 'a']++;
    }

    int denominator = 1; // Обчислення знаменника для кількості анаграм
    // Це добуток факторіалів частот більше ніж 1
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1)
            denominator *= factorial(frequency[i]);
    }

    int numerator = factorial(length); // Обчислення чисельника для кількості анаграм
    int anagramCount = numerator / denominator; // Обчислення кількості анаграм
    return anagramCount;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);
    int anagramCount = countAnagrams(word); // Підрахунок кількості анаграм
    printf("Number of anagrams: %d\n", anagramCount);

    return 0;
}
