#include <iostream>
#include "sleepy_discord/websocketpp_websocket.h"
#include "podSources.cpp"
#include "sleepy_discord/sleepy_discord.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    Pod01 pod("HIER TOKEN EINFUEGEN DANGE", 2);
    pod.run();
}