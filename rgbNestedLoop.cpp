// Copyright 2025 Xiaohan All rights reserved.
// Created by: Xiaohan
// Created on: April 28, 2025
// This program calculates the RGB

#include <iostream>

int main() {
    for (int red = 0; red <= 255; red += 15) {
        for (int green = 0; green <= 255; green += 15) {
            for (int blue = 0; blue <= 255; blue += 15) {
                // Print the RGB text in the correct color
                std::cout << "\033[38;2;" << red << ";" << green
                << ";" << blue << "m" << "RGB(" << red << ", "
                << green << ", " << blue << ")" << "\033[0m" << std::endl;
        }
        }
    std::cout << "Thank you for using the program" << std::endl;
    }
}
