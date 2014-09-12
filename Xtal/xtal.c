#include <stdio.h>
#include <conio.h>
#include <math.h>
#define _USE_MATH_DEFINES

void main()
{
    double xtal, detect;
    int lk2;

    for(;;){

    printf("\nWe will calculate the detector frequency \nbased upon Xtal frequency and LK2 position\n");
    printf("To exit hit CTRL-C\n");
    printf("Enter the Xtal frequency in MHz:  ");
    scanf("%lf", &xtal);
    xtal = (xtal * 1000000);

    printf("Enter the LK2 position (1 - 5):  ");
    scanf("%i",&lk2);

    switch (lk2){

    case 1:
        detect = ((xtal / 258.8974)/1000);
        printf("Detector frequency is %lf KHz\n", detect);
        break;
    case 2:
       detect = ((xtal / 125.8974)/1000);
        printf("Detector frequency is %lf KHz\n", detect);
        break;
    case 3:
       detect = ((xtal / 62.9487)/1000);
        printf("Detector frequency is %lf KHz\n", detect);
        break;
    case 4:
        detect = ((xtal / 32.7333)/1000);
        printf("Detector frequency is %lf KHz\n", detect);
        break;
    case 5:
        detect = ((xtal / 16.0256)/1000);
        printf("Detector frequency is %lf KHz\n", detect);
        break;
    default:
        printf("Bad Input, Goodbye.\n");
        break;
    }
        getch();
}

}
