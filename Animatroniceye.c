/*
 * @file    Practica 4.0.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "Libreria_ojo.h"
#include "PortsActivation.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */
#define Limite_valor_1			200
#define Limite_valor_2			200
#define valor255       255
#define valor0           0
void Delay(long n);

int main(void) {
/*
	unsigned char Result1;
	unsigned char Result2;
	ADC0_init8b();
	ADC_read8b(8, &Result1);
	ADC_read8b(8D, &Result2);
	*/
	ADC0_init8b();
	PWM_vfnDriverInit();

	DPY_bInitialPosition ();
    Delay(0xFFFFFA);
	//PWM_bfnAngleAdjustment ();
	//unsigned char Result2=0;
	//PWM_bfnAngleAdjustment (181);

	while(1)
	{
		unsigned char Result1;
		int caca;
/*
		int resultado;
		resultado = (((Result1 - 0)*(180 - 0))/(255 - 0)) + 0;

		PWM_bfnAngleAdjustment (resultado);
		Delay(0xFFFFF);
	}*/


		ADC_read8b(8, &Result1);
caca = (((Result1 - 0)*(90 - 0))/(255 - 0)) + 0;
PWM_bfnAngleAdjustment (caca);
Delay(0xFFFF);
	}
		/*if(Result1 <= 50){
			PWM_bfnAngleAdjustment (0);//usando 0 por lo mientras
			Delay(0xFFFFF);
		}else if(Result1 >= 150 ){
			PWM_bfnAngleAdjustment (90);
			Delay(0xFFFFF);
		}
		ADC_read8b(8, &Result1);
		}*/

		//ADC_read8b(9, &Result2);
/*
		if(Result1 > Result2){
			PWM_bfnAngleAdjustment (180);
			Delay(0xFFFFF);
			//Delay(0xFFFFFA);
		} else if(Result2 > Result1){
			PWM_bfnAngleAdjustment (90);
			Delay(0xFFFFF);
			//Delay(0xFFFFFA);
		}

		}*/


	}
    //return 0;



void Delay(long n)
{
	while(n--);
	return;
	}
