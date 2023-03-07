#include <iostream>
#include <stdio.h>

class Cal {
public:
  int num;
  int num1;
  int sys;
  void func() {
    scanf("%d", &num);
    scanf("%d", &num1);
    sys = num + num1;
    printf("%d\n", sys);
  }
};

int main() {
  Cal cal;
  cal.func();
}