/*
 * Routines.c
 *
 *  Created on: 15 Jan 2021
 *      Author: Alex
 */


#include "main.h"
#include "cmsis_os.h"

extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim2;
extern osSemaphoreId_t myBinarySemAnalaogHandle;
extern uint16_t ADCValue[10] = {0};
void RoutineInit()
{
	HAL_ADC_Start_DMA(&hadc1,&ADCValue,10);
	HAL_TIM_Base_Start_IT(&htim2);
}

void Routine()
{

}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	//osSemaphoreRelease(&myBinarySemAnalogHandle);
}
