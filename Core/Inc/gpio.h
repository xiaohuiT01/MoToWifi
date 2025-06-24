/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */
#define LED1_ON HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,GPIO_PIN_RESET); //��led
#define LED1_OFF HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,GPIO_PIN_SET); //�ر�led
#define LED1_TOGGLE HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_7); //�л�led״̬

#define LED2_ON HAL_GPIO_WritePin(GPIOC,GPIO_PIN_8,GPIO_PIN_RESET); //��led
#define LED2_OFF HAL_GPIO_WritePin(GPIOC,GPIO_PIN_8,GPIO_PIN_SET); //�ر�led
#define LED2_TOGGLE HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_8); //�л�led״̬

#define BEEP_ON HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET); //打开蜂鸣器
#define BEEP_OFF HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); //关闭蜂鸣器
#define BEEP_TOGGLE HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_5); //切换蜂鸣器状态
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

