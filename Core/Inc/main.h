/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define CANID1_Pin GPIO_PIN_0
#define CANID1_GPIO_Port GPIOC
#define CANID2_Pin GPIO_PIN_1
#define CANID2_GPIO_Port GPIOC
#define CANID3_Pin GPIO_PIN_2
#define CANID3_GPIO_Port GPIOC
#define CANID4_Pin GPIO_PIN_3
#define CANID4_GPIO_Port GPIOC
#define SD_detector_Pin GPIO_PIN_4
#define SD_detector_GPIO_Port GPIOA
#define SW1_Pin GPIO_PIN_5
#define SW1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_4
#define EN2_GPIO_Port GPIOC
#define EN1_Pin GPIO_PIN_5
#define EN1_GPIO_Port GPIOC
#define cycle_Pin GPIO_PIN_12
#define cycle_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
