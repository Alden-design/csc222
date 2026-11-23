#include <string>

using namespace std;

int koopaFinda(string str) {
  int result = -1;
    
  if (str.find("Peach") != string::npos) {
      result = 0;
      size_t searchPos = 0;
      size_t resultPos;
        
      while ((resultPos = str.find("Koopa", searchPos)) != string::npos) {
          result++;
          searchPos = resultPos + 5;
      }
  }
  return result;
}
