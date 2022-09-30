/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#define LED_Segundos_Pin GPIO_PIN_3
#define LED_Segundos_GPIO_Port GPIOA
#define LED2h_Pin GPIO_PIN_4
#define LED2h_GPIO_Port GPIOA
#define LED1h_Pin GPIO_PIN_5
#define LED1h_GPIO_Port GPIOA
#define LED12h_Pin GPIO_PIN_6
#define LED12h_GPIO_Port GPIOA
#define LED11h_Pin GPIO_PIN_7
#define LED11h_GPIO_Port GPIOA
#define LED10h_Pin GPIO_PIN_0
#define LED10h_GPIO_Port GPIOB
#define LED6h_Pin GPIO_PIN_12
#define LED6h_GPIO_Port GPIOB
#define LED7h_Pin GPIO_PIN_13
#define LED7h_GPIO_Port GPIOB
#define LED8h_Pin GPIO_PIN_14
#define LED8h_GPIO_Port GPIOB
#define LED9h_Pin GPIO_PIN_15
#define LED9h_GPIO_Port GPIOB
#define LED3h_Pin GPIO_PIN_8
#define LED3h_GPIO_Port GPIOA
#define LED4h_Pin GPIO_PIN_10
#define LED4h_GPIO_Port GPIOA
#define LED5h_Pin GPIO_PIN_11
#define LED5h_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
