#include <iostream>
#include <Windows.h>
#include <string>

void printTurbo()
{
    std::cout << "  ______           __        " << std::endl;
    std::cout << " /_  __/_  _______/ /_  ____ " << std::endl;
    std::cout << "  / / / / / / ___/ __ \\/ __ \\" << std::endl;
    std::cout << " / / / /_/ / /  / /_/ / /_/ /" << std::endl;
    std::cout << "/_/  \\__,_/_/  /_.___/\\____/ " << std::endl;
}

void menu(bool STATUS, int CLICKS_PER_SECOND)
{
    system("cls");

    printTurbo();

    std::string STATUS_TEXT = STATUS ? "ON" : "OFF";

    std::cout << "Status: " + STATUS_TEXT << std::endl;

    std::cout << "CPS: " << CLICKS_PER_SECOND << std::endl;
}

void click()
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}