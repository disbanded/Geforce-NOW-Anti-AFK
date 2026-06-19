#include <windows.h>
#include <cstdio>
#include <chrono>
#include <thread>

int main() {
    printf("[+] anti-idle running. Press INSERT to stop\n");

    while (!(GetAsyncKeyState(VK_INSERT) & 1)) {
        INPUT inputs[2] = {};

        inputs[0].type = INPUT_KEYBOARD;
        inputs[0].ki.wVk = VK_F13;

        inputs[1].type = INPUT_KEYBOARD;
        inputs[1].ki.wVk = VK_F13;
        inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

        SendInput(2, inputs, sizeof(INPUT));

        for (int i = 0; i < 240 && !(GetAsyncKeyState(VK_INSERT) & 1); ++i)
            std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    printf("[+] stop\n");
    return EXIT_SUCCESS;
}