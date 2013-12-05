#include <msp430.h> 
#include "robot.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    initRobot();
    initTimer();
    while(1){
    	moveForward();
    	_delay_cycles(1000000);
    	moveBack();
    	_delay_cycles(1000000);
		moveRight();
		_delay_cycles(1000000);	//90degrees
		moveLeft();
		_delay_cycles(950000);	//90degrees
		moveForward();
		_delay_cycles(1000000);
		moveBack();
		_delay_cycles(1000000);
		moveRight();
		_delay_cycles(500000);//<45
		moveLeft();
		_delay_cycles(450000);//<45
	}
	return 0;
}
