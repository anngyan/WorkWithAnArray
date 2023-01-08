#include <iostream>

int main() {
    
    //inputting the size of the array
    std::cout << "Enter the number of numbers you want to input: ";
    int N = 0;
    std::cin >> N;
    std::cout << std::endl;

    //inputting the array
    int arr[N];
    for(int i = 0; i < N; ++i) {
        std::cout << "Enter the integer: ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;

    //finding the number of positive numbers
    int countOfPositiveNums = 0;
    for(int i = 0; i < N; ++i) {
        if(arr[i] > 0) {
            ++countOfPositiveNums;
        }
    }

    //outputting the result
    std::cout << "Number of positive elements: " << countOfPositiveNums << std::endl;

    return 0;
}