#include <iostream>
#include <Windows.h>
#include "Main.h"

bool STATUS = false;
int CLICKS_PER_SECOND;

void clicker()
{
    while (true)
    {
        if (GetAsyncKeyState(VK_MBUTTON) & 1)
        {
            STATUS = !STATUS;

            menu(STATUS, CLICKS_PER_SECOND);
        }

        if (STATUS)
        {
            click();
            Sleep(1000 / CLICKS_PER_SECOND);
        }
    }
}

int main()
{
    SetConsoleTitle("Turbo Clicker v1.0");

    system("color 4");

    std::cout << "  ______           __        " << std::endl;
    std::cout << " /_  __/_  _______/ /_  ____ " << std::endl;
    std::cout << "  / / / / / / ___/ __ \\/ __ \\" << std::endl;
    std::cout << " / / / /_/ / /  / /_/ / /_/ /" << std::endl;
    std::cout << "/_/  \\__,_/_/  /_.___/\\____/ " << std::endl;
    std::cout << "Status: OFF" << std::endl;
    std::cout << "CPS: ";
    std::cin >> CLICKS_PER_SECOND;

    clicker();

    return 0;
}