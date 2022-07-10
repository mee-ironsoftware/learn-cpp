#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";
  
  std::cout << "shoot! ";
  std::cin >> user;

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  if (user == rock && computer == rock) {
    std::cout << "Tie!\n";
  } else if (user == rock && computer == paper) {
    std::cout << "You Lose!\n";
  } else if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == rock && computer == spock) {
    std::cout << "You Lose!\n";
  } else if (user == paper && user == rock) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == paper) {
      std::cout << "Tie!\n";
    } else if (user == paper && computer == scissors) {
    std::cout << "You Lose!\n";
  } else if (user == paper && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == spock) {
    std::cout << "You Lose!\n";
  } else if (user == scissors && computer == rock) {
    std::cout << "You Lose!\n";
  } else if (user == scissors && computer == paper) {
    std::cout << "You Win!\n";
  } else if (user == scissors && computer == scissors) {
    std::cout << "Tie!\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "You Lose!\n";
  } else if (user == scissors && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == rock) {
    std::cout << "You Lose!\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "You Lose!\n";
  } else if (user == lizard && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == lizard) {
    std::cout << "Tie!\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == rock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == paper) {
    std::cout << "You Lose!\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == lizard) {
    std::cout << "You Lose!!\n";
  } else if (user == spock && computer == spock) {
    std::cout << "Tie!\n";
  } else {
    std::cout << "Invalid input.\n";
  }

  return 0;
}