#include <iostream>

//function to check if the word is a palindrome or not
bool isPalindrome(char word[]) {
    int wordLength = 0;
    while(word[wordLength] != '\0') {
        ++wordLength;
    }
    for(int i = 0; i <= (wordLength / 2); ++i) {
        if(word[i] != word[wordLength - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {

    //inputting the word
    char word[100];
    std::cout << "Enter the word: ";
    std::cin.getline(word, 100);
    std::cout << std::endl;

    //checking if it's palindrome or not
    if(isPalindrome(word)) {
        std::cout << "The word is a palindrome" << std::endl;
    }
    else {
        std::cout << "The word is not a palindrome" << std::endl;
    }

    return 0;
}