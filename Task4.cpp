#include <iostream>

int main() {
    
    //inputting the word
    char word[100];
    std::cout << "Enter the word: ";
    std::cin.getline(word, 100);

    //calculating the word length
    int wordLength = 0;
    while(word[wordLength] != '\0') {
        ++wordLength;
    }

    //outputting the word in opposite direction
    for(int i = wordLength - 1; i >= 0; --i) {
        std::cout << word[i];
    }
    std::cout << std::endl;

    return 0;
}