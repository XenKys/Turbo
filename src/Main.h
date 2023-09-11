#include <iostream>
#include <Windows.h>

void menu(bool STATUS, int CLICKS_PER_SECOND)
{
    system("cls");

    std::cout << "  ______           __        " << std::endl;
    std::cout << " /_  __/_  _______/ /_  ____ " << std::endl;
    std::cout << "  / / / / / / ___/ __ \\/ __ \\" << std::endl;
    std::cout << " / / / /_/ / /  / /_/ / /_/ /" << std::endl;
    std::cout << "/_/  \\__,_/_/  /_.___/\\____/ " << std::endl;

    if (STATUS)
    {
        std::cout << "Status: ON" << std::endl;
    }
    else
    {
        std::cout << "Status: OFF" << std::endl;
    }

    std::cout << "CPS: " << CLICKS_PER_SECOND << std::endl;
}

void click()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}