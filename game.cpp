#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int points = 0;
string upgrade;
string multiply;
int upgradeinput;

int main() {
    while (true) {
        std::string line;
        std::getline(std::cin, line);

        if (line == "check") {
            std::cout << "Checking points..." << std::endl;
            std::cout << "points: " << points << std::endl;
            
            
        } else if (line.empty()) {
            if (upgrade == "true")
            {
                if (multiply == "true")
                {
                    points * 2;
                }
                else
                {
                    cout << "critial error with upgrades" << endl;
                }
            }
            else {
            std::cout << "+1 point" << std::endl;
            points++;
            }
        }
        else if (line == "exit")
        {
            std::cout << "exiting game..." << std::endl;
            return 0;
        }
        else if (line == "help")
        {
            std::cout << "commands" << std::endl;
            std::cout << "-check | checks your points" << std::endl;
            std::cout << "-reset | resets your points" << std::endl;
            std::cout << "-upgrade | you can purches upgrades here" << std::endl;
            
            std::cout << "-exit | exits the game" << std::endl;
            std::cout << "more coming soon" << std::endl;
        }
        else if (line == "reset")
        {
            points -= points;
        }
        else if (line == "upgrade")
        {
            cout << "Upgrades CURRENTLY BROKEN!!- " << endl;
            cout << "1 - Multiply by 2 every click" << endl;
            cout << "type 0 to exit" << endl;
            cout << "option: " << endl;
            cin >> upgradeinput;
            
            if (upgradeinput = 1)
            {
                string upgrade = "true";
                string multiply = "true";
            }
            else if (upgradeinput = 0)
            {
                cout << "exiting upgrades tab" << endl;
            }
            else
            {
                cout << "critial error with upgrades" << endl;
            }
        }
    }
}
