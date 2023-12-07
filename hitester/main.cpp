/*
 * This example was used for putting items into the action in Lineage 2 MMORPG.
 */

#include <iostream>
#include <string>

#include "mouse.h"
#include "keyboard.h"

int main()
{
    Mouse mouse;
    try {
        mouse.initialize();
    } catch (const std::runtime_error &e) {
        std::cout << std::string("Mouse initialization: ") + e.what() << std::endl;
        return EXIT_FAILURE;
    }

    Keyboard keyboard;
    try {
        keyboard.initialize();
    } catch (const std::runtime_error &e) {
        std::cout << std::string("Keyboard initialization: ") + e.what() << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << std::string("cursor move and click.") << std::endl;
    Sleep(3000);
    // point(x,y) is in screen(1920x768).
    std::cout << "move to (1500,100) and click "<< std::endl;
    mouse.moveCursor(1500, 100);
    mouse.rightButtonClick();
    Sleep(1000);
    std::cout << "move to (1300,300) and click " << std::endl;
    mouse.moveCursor(1300, 300);
    mouse.rightButtonClick();
    Sleep(1000);

    // system("pause");
    return EXIT_SUCCESS;
}
