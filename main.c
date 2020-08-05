
#include <windows.h>
#include <time.h>
#include <stdio.h>

#define DAYTIME 7
#define NIGHTTIME 18

int main(int argc, char* argv[])
{
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    int hour = timeinfo->tm_hour;

    //printf("%d", timeinfo->tm_hour);
    char dark[] = "C:\\Users\\signaturekt\\Pictures\\wallpaper\\Sweet-Theme-Black.png";
    char light[] = "C:\\Users\\signaturekt\\Pictures\\wallpaper\\Sweet-Theme.png";
    
    //
    if(hour >= NIGHTTIME || hour <= DAYTIME) {
        SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID *)dark, SPIF_SENDCHANGE);
    } else {
        SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID *)light, SPIF_SENDCHANGE);
    }
    
    return 0;
}