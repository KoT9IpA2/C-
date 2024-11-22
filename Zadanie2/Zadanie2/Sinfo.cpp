#include "Sinfo.h"
#include <iostream>

#if defined(_WIN32) || defined(_WIN64) // Windows
#include <windows.h>

std::string getOSInfo() {
    OSVERSIONINFO versionInfo;
    versionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&versionInfo);
    return "Windows " + std::to_string(versionInfo.dwMajorVersion) + "." + std::to_string(versionInfo.dwMinorVersion);
}

std::string getCompilerInfo() {
    return "_MSC_VER = " + std::to_string(_MSC_VER);
}
#elif defined(__linux__) // Linux
#include <fstream>
#include <algorithm>

std::string getOSInfo() {
    std::ifstream file("/etc/os-release");
    std::string line, version;

    while (std::getline(file, line)) {
        if (line.find("VERSION=") == 0) {
            version = line.substr(8); // Пропускаем 'VERSION='
            version.erase(remove(version.begin(), version.end(), '"'), version.end()); // Убираем кавычки
            break;
        }
    }

    return "Linux " + version;
}

std::string getCompilerInfo() {
    return "GCC = " + std::to_string(__GNUC__) + "." + std::to_string(__GNUC_MINOR__) + "." + std::to_string(__GNUC_PATCHLEVEL__);
}
#elif defined(__APPLE__) && defined(__MACH__) // MacOS
#include <sys/types.h>
#include <sys/sysctl.h>

std::string getOSInfo() {
    char version[256];
    size_t size = sizeof(version);
    sysctlbyname("kern.ostype", version, &size, NULL, 0);
    return "MacOS " + std::string(version);
}

std::string getCompilerInfo() {
    return "Clang = " + std::to_string(__clang_major__) + "." + std::to_string(__clang_minor__) + "." + std::to_string(__clang_patchlevel__);
}
#else // Неизвестная ОС
std::string getOSInfo() {
    return "Неизвестная операционная система";
}

std::string getCompilerInfo() {
    return "Неизвестный компилятор";
}
#endif