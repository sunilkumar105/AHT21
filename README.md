# AHT21
Library for reading temperature and humidity of with the help of AHT21 sensor using STM32 HAL API


STEPS: ADDING FILE INTO YOUR PROJECT
1. Add the AHT21.h and AHT21.c file into your project/core/inc and project/core/src respectively.
2. go to project/core/inc/AHT21.h and replace #include "stm32f4xx_hal.h" with the "microcontroller_hal.h" that you are using
3. In the AHT21.h replace "hi2c1" with the i2chandle type def you are using. Line 14 & 15

MEASUREMENT
1. HAL_StatusTypeDef AHT21_init(void); call this function before taking measurement, it will return HAL status, if the return type is equal to HAL_ERROR than check your connection and make sure your scl and sda is connnected properly.
2. after that you can call these two function uint32_t AHT21_Read_Humidity(void); int32_t AHT21_Read_Temperature(void); which will return the humidity and temperature value respectively.


NOTE:
Here we are using 100ms of maximum retry time for i2c , so as to prevent it from entering the max delay of infinite time. You can change according to your need. It is defined in AHT21.C line 13
