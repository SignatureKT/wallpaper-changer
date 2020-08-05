# Wallpaper-Changer
The purpose of the project is to automate setting a background depending on the day.

The "Dark" wallpaper is set when time is greater than NIGHTTIME, and less than DAYTIME
The "Light" wallpaper is set none of the "Dark" wallpaper's requirements are not meet.

### Configuring
##### Wallpaper (REQUIRED)
```
//replace this with a night theme
char dark[] = "C:\\";
//replace this with a day theme
char light[] = "C:\\";
```
Set the path to the image you would like to use. 

##### Time
```
#define DAYTIME 7
#define NIGHTTIME 18
```
> if(hour >= NIGHTTIME || hour <= DAYTIME)

Using the 24 hour time system, you can adjust which theme is set depending on the hour.
