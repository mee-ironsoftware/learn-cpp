#include <iostream>
#include <vector>
#include <string>

int main() {

  const std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  std::string text;

  std::cout << "Enter your text to translate into whale talk 🐋 : ";
  std::getline(std::cin, text);

  std::cout << "Input text: '" << text << "'\n";

  std::vector<char> result;

  for (int i = 0; i < text.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (text[i] == vowels[j]) {
        result.push_back(text[i]);
        if (text[i] == 'u' || text[i] == 'e')
          result.push_back(text[i]);
        break;
      }
    }
  }

  std::cout << "Whale talk: '";
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "'\n";

  return 0;
}