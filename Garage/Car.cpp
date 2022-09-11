#include"Car.h"
#include <iostream>
Car::Car(char*colour_in){
    strncpy(colour,colour_in,9);
    colour[9]-'\0';
}
char*Car::getColour(){
    return colour;
}