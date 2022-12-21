#include "mbed.h"

DigitalIn button(D6);

int main() {
    while(1) {
        if(button) {
            printf("Button Pressed\n\r");
            wait_us(700000); // simple debouncing
        }           
    }
}