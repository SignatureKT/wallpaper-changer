
#include <windows.h>
#include <time.h>

//replace this to determine when the themes will set
#define DAYTIME 7
#define NIGHTTIME 18

int main(int argc, char* argv[])
{
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    int hour = timeinfo->tm_hour;

    //When creating PATH  use '\\' instead of '\'
    //replace this with a night theme
    char dark[] = "C:\\";
    //replace this with a day theme
    char light[] = "C:\\";
    
    // check whether hour is bigger than night and less than day
    if(hour >= NIGHTTIME || hour <= DAYTIME) {
        SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID *)dark, SPIF_SENDCHANGE);
    } else {
        SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID *)light, SPIF_SENDCHANGE);
    }
    
    return 0;
}