#include <iostream>

// argc: number of parameters
// argv: array with actual parameters!

int main(int argc, char* argv[]) {
    if (argc < 2) {
        // if no parameters were sent, give feedback!!!
        std::cerr << "Usage: " << argv[0] << " PARAMETER" << std::endl;
        return 1;
    }
    // Print the user's name:
    std::cout << "PARAMETER: " << argv[1] << "\nPROGRAM NAME, " << argv[0] << "!" << std::endl;
    return 0;
}