#include <iostream>
#include <Windows.h>
#include "Main.h"

bool STATUS = false;

void clicker()
{
    while (true)
    {
        if (GetAsyncKeyState(VK_MBUTTON) & 1)
        {
            STATUS = !STATUS;

            menu(STATUS);
        }

        if (STATUS)
        {
            click();
            Sleep(100);
        }
    }
}

int main()
{
    SetConsoleTitle("Turbo Clicker v1.0");

    menu(STATUS);
    clicker();

    return 0;
}