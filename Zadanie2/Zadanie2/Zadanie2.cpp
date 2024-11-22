#include <iostream>
#include "Sinfo.h"

int main() {
    std::cout << "Информация об ОС:\n";
    std::cout << "Название и версия: " << getOSInfo() << "\n";
    std::cout << "Компилятор: " << getCompilerInfo() << "\n";
    return 0;
}