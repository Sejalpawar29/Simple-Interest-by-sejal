#include <iostream>

int main() {
    // Step 3: Declare variables
    double principal, rate, time, simpleInterest;

    // Step 4: Take input from the user
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the rate of interest: ";
    std::cin >> rate;

    std::cout << "Enter the time period (in years): ";
    std::cin >> time;

    // Step 5: Calculate the simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Step 6: Print the calculated simple interest
    std::cout << "Simple Interest: " << simpleInterest << std::endl;

    // Step 7: End the main function
    return 0;
}