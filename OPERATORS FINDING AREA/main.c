#include <stdio.h>
#include<stdlib.h>
//#define PI 3.14
#define DIAMETER 12756.1 // Diameter of the Earth
//Earth's Diameter at the Equator: 12,756.1 is

int main(){
    const float PI=3.14;

    float rad_earth,circumference_earth,surf_area_earth,volume_earth;

    rad_earth= DIAMETER /2;

    circumference_earth=2 * PI * rad_earth;

    surf_area_earth=4 * PI * rad_earth*rad_earth;

    volume_earth=(4.0/3.0)*PI*rad_earth*rad_earth*rad_earth;

    printf("The radius of the Earth is %f km\n\n",rad_earth);

    printf("The circumference of the Earth is %f km\n\n",circumference_earth);

    printf("The surface area of the Earth is %f km^2\n\n",surf_area_earth);

    printf("The volume of the Earth is %f km^3\n\n",volume_earth);

    return 0;
}
