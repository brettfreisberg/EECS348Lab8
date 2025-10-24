//For input/output stuff
#include <stdio.h>
//For toupper()
#include <ctype.h>

//Main
int main(){
    //Initialize variables
    double temperature, temperatureC;
    char from, to;

    //Get Temperature
    printf("Enter the temperature value: ");
    //Assign user input
    scanf("%lf", &temperature);
    //Get Original Scale (from)
    while(1){
        printf("Enter the original scale (C, F, or K): ");
        //Assign user input
        scanf(" %c", &from);
        //Puts lowercase letter into upper case
        from = toupper(from);
        //Checks for valid letter. Print error otherwise.
        if(from == 'C' || from == 'F' || from == 'K') break;
        printf("Invalid input. Enter C, F, or K.\n");
    }
    //Get "to" scale
    while(1){
        printf("Enter the scale to convert to (C, F, or K): ");
        //Assign user input
        scanf(" %c", &to);
        //Convert lower case letter to upper case
        to = toupper(to);
        //Checks for valid letter. Print error otherwise.
        if(to == 'C' || to == 'F' || to == 'K') break;
        printf("Invalid input. Please enter C, F, or K.\n");
    }
    //Convert temperature to celsius for easy converting
    //From Celsius to celsius
    if (from == 'C')
        temperatureC = temperature;
    //From Fahrenheit to celsius
    else if (from == 'F')
        temperatureC = ((temperature - 32) * 5/9);
    //From Kelvin to celsius
    else if (from == 'K')
        temperatureC = (temperature - 273.15);

    //Result variable
    double result;
    //Convert the temperature to the result for C, F, or K
    if (to == 'C')
        result = temperatureC;
    else if (to == 'F')
        result = (temperatureC * 9/5 + 32);
    else if (to == 'K')
        result = (temperatureC + 273.15);

    //Print result
    printf("Converted temperature: %.2f %c\n", result, to);

    //Initiate variables
    char *category, *advisory;
    //Find category and advisory for the temperature
    if (temperatureC < 0)
        { category = "Freezing"; advisory = "Wear a BIG coat!"; }
    else if (temperatureC < 10)
        { category = "Cold"; advisory = "Wear a jacket!"; }
    else if (temperatureC < 25)
        { category = "Comfortable"; advisory = "Touch grass!"; }
    else if (temperatureC < 35)
        { category = "Hot"; advisory = "Drink lots of water!"; }
    else
        { category = "Extreme Heat"; advisory = "Stay indoors!"; }

    //Print temperature category
    printf("Temperature category: %s\nWeather advisory: %s\n", category, advisory);

    return 0;
}