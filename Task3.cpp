#include <iostream>

//function to check if the number is prime or not
bool isPrime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i*i < n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

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

    //finding the numbers of prime and composite numbers
    int countOfPrime = 0, countOfComp = 0;
    for(int i = 0; i < N; ++i) {
        if(isPrime(arr[i])) {
            ++countOfPrime;
        }
        else {
            ++countOfComp;
        }
    }

    //comparing and outputting the result
    if(countOfComp > countOfPrime) {
        std::cout << "composite";
    }
    else if(countOfComp < countOfPrime) {
        std::cout << "prime";
    }
    else { 
        std::cout << "equal";
    }

    return 0;
}