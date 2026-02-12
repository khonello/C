#include <stdio.h>
#define LED 1
#define VENT 1
// Finite State Machine

/************************************************
 *              Air Conditioner
 * 1. LED receiver
 * 2. Ventilator Motor
 * 3. Fan Motor
 * 4. Display Screen
 * 
 * **********************************************/

typedef struct
{
    int led : 2;                                 // LED on the AC to receive remote controls
    int vent_motor_condition : 2;                // Condition on the ventilator motor. 1 if working else 0
    int (*fan_motor) (int);
    int fan_motor_state : 2;                     // Checks if Fan motor is running or not
    void (*disp_scrn) (int);
}finiteStateMachine;

int fMotor(int);
void dScrn(int);

int main()
{
    finiteStateMachine AC = {.fan_motor = fMotor, .disp_scrn = dScrn};
    AC.led = LED;
    
    if (AC.led == 1)
    {
        if (VENT)
        {
            AC.vent_motor_condition = VENT;
            AC.fan_motor_state =  AC.fan_motor(AC.vent_motor_condition);
            {
                AC.disp_scrn(AC.fan_motor_state);
            }
        }
        else
            printf("VENT motor disabled");
    }

    return 0;
}

int fMotor(int v_motor)
{
    if (v_motor == 1)
    {
        printf("Whoooooooosh\n");
    }
    return 1;
}

void dScrn(int cFanstate)
{
    if (cFanstate == 1)
    {
        printf("-----------------------------------------------------\n|\n|  STATUS :: AC RUNNING | TEMPERATURE :: 24 Degrees \n|\n|----------------------------------------------------");
    }
}