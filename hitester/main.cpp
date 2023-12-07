/*
 * This example was used for putting items into the action in Lineage 2 MMORPG.
 */

#include <iostream>
#include <string>

#include "mouse.h"
#include "keyboard.h"

int main() {
  Mouse mouse;
  try {
    mouse.initialize();
  } catch (const std::runtime_error &e) {
    std::cout << std::string("Mouse init: ") + e.what() << std::endl;
    return EXIT_FAILURE;
  }

  Keyboard keyboard;
  try {
    keyboard.initialize();
  } catch (const std::runtime_error &e) {
    std::cout << std::string("Keyboard init: ") + e.what() << std::endl;
    return EXIT_FAILURE;
  }
  std::cout << std::string("cursor move and click. watch the cursor, pls!") << std::endl;
  Sleep(1000);
  // point(x,y) is in screen(1920x768).
  std::cout << "move to (1500,100) and click " << std::endl;
  Sleep(1000);
  mouse.moveCursor(1500, 100);
  mouse.rightButtonClick();
  Sleep(1000);
  std::cout << "move to (1400,200) and click " << std::endl;
  Sleep(1000);
  mouse.moveCursor(1400, 200);
  mouse.rightButtonClick();
  Sleep(1000);
  std::cout << std::string("type KEY_CAPSLOCK 100 times. watch the caps_key_led, pls!") << std::endl;
  keyboard.type(KEY_ESC);
  Sleep(1000);
  for (int i = 0; i < 100; i++) {
    keyboard.type(KEY_CAPSLOCK);
    Sleep(100);
  }

  // system("pause");
  return EXIT_SUCCESS;
}
