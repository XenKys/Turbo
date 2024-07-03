#include <iostream>
#include <Windows.h>
#include "Main.h"

bool CLICKER_STATUS = false;
int CLICKS_PER_SECOND;

void clicker()
{
    while (true)
    {
        if (GetAsyncKeyState(VK_MBUTTON) & 1)
        {
            CLICKER_STATUS = !CLICKER_STATUS;

            menu(CLICKER_STATUS, CLICKS_PER_SECOND);
        }

        if (CLICKER_STATUS)
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

    printTurbo();

    std::cout << "Status: OFF" << std::endl;
    std::cout << "CPS: ";
    std::cin >> CLICKS_PER_SECOND;

    clicker();

    return 0;
}