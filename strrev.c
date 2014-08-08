#include <stdio.h>

void strrev(char *str) {
  int length = 0;
  while(str[length] != (char) NULL) {
    length++;
  }
  length--;
  int i;
  for(i = 0; i < length; i++) {
    char temp = str[i];
    str[i] = str[length];
    str[length] = temp;
    length--;
  }
}

int main() {
  char mystr[] = "u wot m8";
  printf("%s\n", mystr);
  strrev(mystr);
  printf("%s\n", mystr);
  return 0;
}



