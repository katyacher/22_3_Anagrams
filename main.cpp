#include <iostream>
#include <string>
#include <map>

bool is_anagram(std::string str1, std::string str2);

int main() {
    std::cout << "22.3 Anagrams." << std::endl;

    std::cout << "Enter first word: ";
    std::string first_word;
    std::cin >> first_word;
    std::cout << "Enter second word: ";
    std::string second_word;
    std::cin >> second_word;

    if(is_anagram(first_word, second_word))
        std::cout << "It's an anagram" << std::endl;
    else
        std::cout << "This is not an anagram" << std::endl;
    return 0;
}

bool is_anagram(std::string str1, std::string str2){
    if(str1.length() != str2.length()) return false;
    if(str1 == str2) return false;

    std::map<char, int> Word_1;
    std::map<char, int> Word_2;

    for(int i = 0; i < str1.length(); i++){
        Word_1[str1[i]] += 1;
        Word_2[str2[i]] += 1;
    }

    return (Word_1 == Word_2);
}
