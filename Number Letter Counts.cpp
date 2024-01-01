#include <iostream>
#include <string>

int main() {
    // Array of number words from 1 to 1000
    std::string words[] = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen",
        "Twenty"
    };

    // Add words for numbers 21 to 99
    for (int i = 21; i <= 99; ++i) {
        words[i] = words[i / 10 * 10] + "-" + words[i % 10];
    }

    // Add words for multiples of 100
    for (int i = 100; i <= 900; i += 100) {
        words[i] = words[i / 100] + " Hundred";
    }

    // Add words for numbers 101 to 999
    for (int i = 101; i <= 999; ++i) {
        if (i % 100 < 20) {
            words[i] = words[i / 100 * 100] + " and " + words[i % 100];
        } else {
            words[i] = words[i / 100 * 100] + " and " + words[i / 10 % 10 * 10] + "-" + words[i % 10];
        }
    }

    // Calculate the total number of characters
    int totalCharacters = 0;
    for (const std::string& word : words) {
        totalCharacters += word.size();
    }

    std::cout << "The sum of characters from 1 to 1000 is: " << totalCharacters << std::endl;

    return 0;
}
