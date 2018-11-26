#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

const void * LampOnFilePng = "C:/Users/Rodrigo/OneDrive/Coding and Programming/Change Background/LightBulb/LampOn.png";
const void * LampOffFilePng = "C:/Users/Rodrigo/OneDrive/Coding and Programming/Change Background/LightBulb/LampOff.png";
const void * BlackFilePng = "C:/Users/Rodrigo/OneDrive/Coding and Programming/Change Background/LightBulb/Black.png";

int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << "This is my attempt at a Program for Windows that changes the background according to a button!" << std::endl;

    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void *) LampOnFilePng, SPIF_UPDATEINIFILE);
    Sleep(4000);
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void *) LampOffFilePng, SPIF_UPDATEINIFILE);
    Sleep(4000);
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void *) BlackFilePng, SPIF_UPDATEINIFILE);


    return 0;
}