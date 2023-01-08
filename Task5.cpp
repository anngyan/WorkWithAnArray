#include <iostream>

int main() {

    //inputing the sentence
    char sentence[1000];
    std::cout << "Enter the sentence: ";
    std::cin.getline(sentence, 100);

    //calculating the sentense's character length
    int sentenceLength = 0;
    while(sentence[sentenceLength] != '\0') {
        ++sentenceLength;
    }

    //changing every first letter to uppercase
    for(int i = 1; i < sentenceLength; ++i) {
        if(sentence[i - 1] == ' ') {
            sentence[i] -= 32; 
        }
    }

    //outputing the result
    for(int i = 0; i < sentenceLength; ++i) {
        std::cout << sentence[i];
    }
    std::cout << std::endl;

    return 0;
}