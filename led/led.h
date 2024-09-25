/**
 * @file led.h
 * @author Triet NGUYEN (tr_nguye@insa-toulouse.fr)
 * @brief Header for LED Controller
 * @version 1.0
 * @date 09/25/2024
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LED_H
#define LED_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ---------------------------------*/
#include "stm32g4xx_hal.h"

/* #######################################################################################
 * WARNING : This driver assume that the frequency of PWM signal for DC Motor is 20kHz !!!
 * #######################################################################################
*/

/* Exported define --------------------------*/
/* Motor direction*/
#define MOTOR_DIRECTION_CCW (GPIO_PIN_RESET)
#define MOTOR_DIRECTION_CW  (GPIO_PIN_SET)

/**
 * @brief Structure containing configuration for a motor
 * 
 */
typedef struct {
    /* Peripheral configuration */
    GPIO_TypeDef  * LED_Port;
    uint16_t LED_Pin;
} LED_Typedef;

/**
 * @brief Initialize the LED structure
 * 
 * @param led pointer to a LED_Typedef structure
 * @param LED_Port GPIO Port for LED
 * @param LED_Pin GPIO Pin for LED
 */
void LED_Init(LED_Typedef * led, GPIO_TypeDef  * LED_Port, uint16_t LED_Pin);

/**
 * @brief Turn on the LED
 * 
 * @param led pointer to a LED_Typedef structure
 */
void LED_On(LED_Typedef * led);

/**
 * @brief Turn off the LED
 * 
 * @param led pointer to a LED_Typedef structure
 */
void LED_Off(LED_Typedef * led);

/**
 * @brief Toggle the LED
 * 
 * @param led pointer to a LED_Typedef structure
 */
void LED_Toggle(LED_Typedef * led);

#ifdef __cplusplus
}
#endif

#endif
