/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWMA1_Pin GPIO_PIN_0
#define PWMA1_GPIO_Port GPIOA
#define PWMB1_Pin GPIO_PIN_1
#define PWMB1_GPIO_Port GPIOA
#define PWMA2_Pin GPIO_PIN_2
#define PWMA2_GPIO_Port GPIOA
#define PWMB2_Pin GPIO_PIN_3
#define PWMB2_GPIO_Port GPIOA
#define AIN1_Pin GPIO_PIN_4
#define AIN1_GPIO_Port GPIOA
#define AIN2_Pin GPIO_PIN_5
#define AIN2_GPIO_Port GPIOA
#define BIN1_Pin GPIO_PIN_0
#define BIN1_GPIO_Port GPIOB
#define BIN2_Pin GPIO_PIN_1
#define BIN2_GPIO_Port GPIOB
#define RBIN1_Pin GPIO_PIN_10
#define RBIN1_GPIO_Port GPIOB
#define RBIN2_Pin GPIO_PIN_11
#define RBIN2_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_7
#define LED2_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_8
#define LED1_GPIO_Port GPIOC
#define RAIN1_Pin GPIO_PIN_3
#define RAIN1_GPIO_Port GPIOB
#define RAIN2_Pin GPIO_PIN_4
#define RAIN2_GPIO_Port GPIOB
#define BEEP_Pin GPIO_PIN_5
#define BEEP_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
