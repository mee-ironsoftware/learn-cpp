#include <iostream>
#include <vector>

#include "ttt_functions.h"

int main() {
  std::vector<std::vector<std::string>> answers(3, std::vector<std::string>(3, ""));
  int time = 1;
  std::string winner = "";

  greeting();

  while(winner == "" && time <= 9) {
    char marking = time % 2 == 0 ? 'O' : 'X';
    std::vector<int> results = enter_marking(time, marking);
    answers[results[0]][results[1]] = marking;
    time++;
    winner = check_combination(answers);
  }
  
  display_result(winner, answers);
}