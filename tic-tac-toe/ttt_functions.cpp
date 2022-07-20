#include <iostream>
#include <vector>

void greeting() {
  std::cout << "===========\n";
  std::cout << "Tic-Tac-Toe\n";
  std::cout << "============\n\n";
  std::cout << "Instructions: two players, X and O, who take turns marking the spaces in a 3x3 grid.\n";
  std::cout << "The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.\n\n";
}

void display_result(std::string winner, std::vector<std::vector<std::string>> answers) {
  std::cout << "\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << (answers[i][j] != "" ? answers[i][j] : " ") << " ";
    }
    std::cout << "\n\n";
  }

  if (winner == "") {
    std::cout << "Draw!!\n\n";
  } else {
    std::cout << "🎉 🎉  The winner is '" << winner << "' 🎉 🎉\n\n";
  }
}

void warning_incorrect_number(int result) {
  if (result < 1 || result > 3) {
    std::cout << "Please enter number between 1 and 3.\n";
  }
}

int validate_row() {
  int result = 0;
  while (result < 1 || result > 3) {
    std::cout << "Enter row: ";
    std::cin >> result;
    warning_incorrect_number(result);
  }  
  return result - 1;
}

int validate_col() {
  int result = 0;
  while (result < 1 || result > 3) {
    std::cout << "Enter column: ";
    std::cin >> result;
    warning_incorrect_number(result);
  }
  return result - 1;
}

std::vector<int> enter_marking(int time, char marking) {
  std::vector<int> results;
  std::cout << marking << " Turn\n";
  results.push_back(validate_row());
  results.push_back(validate_col());
  return results;
}

std::string check_combination(std::vector<std::vector<std::string>> answers) {
  for (int i = 0; i < 3; i++) {    
    if (answers[i][0] != "" && answers[i][0] == answers[i][1] && answers[i][1] == answers[i][2]) {
      // All columns in row
      return answers[i][0];
    } else if (answers[0][i] != "" && answers[0][i] == answers[1][i] && answers[1][i] == answers[2][i]) {
      // All rows in columns
      return answers[0][i];
    }
  }

  // Crossed
  if ((answers[1][1] != "" && answers[0][0] == answers[1][1] && answers[1][1] == answers[2][2]) ||
      (answers[1][1] != "" && answers[0][2] == answers[1][1] && answers[1][1] == answers[2][0])) {
    return answers[1][1];
  }
  
  return "";
}