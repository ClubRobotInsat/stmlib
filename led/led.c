/**
 * @file led.c
 * @author Triet NGUYEN (tr_nguye@insa-toulouse.fr)
 * @brief Code for LED Controller
 * @version 1.0
 * @date 09/25/2024
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* Includes ------------------------------------------------------------------*/
#include "led.h"

/* Public functions ----------------------------------------------------------*/
void LED_Init(LED_Typedef * led, GPIO_TypeDef  * LED_Port, uint16_t LED_Pin) {
	led->LED_Port = LED_Port;
	led->LED_Pin = LED_Pin;
	HAL_GPIO_WritePin(led->LED_Port, led->LED_Pin, GPIO_PIN_RESET);
}

void LED_On(LED_Typedef * led) {
	HAL_GPIO_WritePin(led->LED_Port, led->LED_Pin, GPIO_PIN_SET);
}

void LED_Off(LED_Typedef * led) {
	HAL_GPIO_WritePin(led->LED_Port, led->LED_Pin, GPIO_PIN_RESET);
}

void LED_Toggle(LED_Typedef * led) {
	HAL_GPIO_TogglePin(led->LED_Port, led->LED_Pin);
}