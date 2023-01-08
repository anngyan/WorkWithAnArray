#include <iostream>

int main() {

    //inputting the number of cards
    std::cout << "Enter the number of cards(it should be a positive integer): ";
    int N = 0;
    std::cin >> N;
    std::cout << std::endl;

    //inputting the numbers of cards
    int cards[N];
    for(int i = 0; i < N - 1; ++i) {
        std::cout << "Enter the number of the card(from 1-" << N << "): ";
        std::cin >> cards[i];
    }
    std::cout << std::endl;

    //finding the missing number
    int missingNumber = 0;
    for(int i = 1; i <= N; ++i) {
        missingNumber += i;
    }
    for(int i = 0; i < N - 1; ++i) {
        missingNumber -= cards[i];
    }

    //outputting the result
    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}