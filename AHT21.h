/*
 * AHT21.h
 *
 *  Created on: 12-Jun-2023
 *      Author: sunil
 */

#ifndef INC_AHT21_H_
#define INC_AHT21_H_

#include "main.h"
#include "stm32f4xx_hal.h"

HAL_StatusTypeDef AHT21_init(void);
uint32_t AHT21_Read_Humidity(void);
int32_t AHT21_Read_Temperature(void);

#endif /* INC_AHT21_H_ */
