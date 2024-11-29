#include <stdio.h>

int main() {
    float c; 
    float kelvin, fahrenheit, reamur;

    printf("Input suhu dalam Celsius: ");
    scanf("%f", &c);

    kelvin = c + 273.15;           
    fahrenheit = (c * 1.8) + 32;   
    reamur = c * 0.8;              

    
    printf("Suhu dalam Kelvin: %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", reamur);

    return 0;
}
