#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  string wrong_keyboard, input_string;
  cin >> wrong_keyboard >> input_string;
  int isBig = 1,isBlank = 1;
  for(int i = 0; i < wrong_keyboard.length(); i++) {
    if (wrong_keyboard[i] == '+') {
      isBig = 0;
      break;
    }
  }
  for(int i = 0; i < input_string.length(); i++) {
    if ((input_string[i] >= 'A' && input_string[i] <= 'Z') && !isBig) {
      continue;
    }
    int iswrong = 0;
    for(int j = 0; j < wrong_keyboard.length(); j++) {
      if (input_string[i] == wrong_keyboard[j] || ((input_string[i]-32) == wrong_keyboard[j] && isalpha(wrong_keyboard[j]) && isalpha(input_string[i]))) {
        iswrong = 1;
        break;
      }
    }
    if (iswrong) {
      continue;
    }
    cout << input_string[i];
    isBlank = 0;
  }
  if (isBlank) {
    cout << " " << endl;
  }
  return 0;
}
