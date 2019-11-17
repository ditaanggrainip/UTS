#ifndef DEVICE_H_
#define DEVICE_H_

I2C_HandleTypeDef hi2c2;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim4;
UART_HandleTypeDef huart1;

#define User_LED1_Pin GPIO_PIN_15
#define User_LED1_GPIO_Port GPIOC
#define User_LED2_Pin GPIO_PIN_14
#define User_LED2_GPIO_Port GPIOC
#define User_LED3_Pin GPIO_PIN_13
#define User_LED3_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_7
#define Buzzer_GPIO_Port GPIOB
#define Button_RunStop_Pin GPIO_PIN_1
#define Button_RunStop_GPIO_Port GPIOB
#define Button_Reset_Pin GPIO_PIN_0
#define Button_Reset_GPIO_Port GPIOB
#define Sensor1_Pin GPIO_PIN_0
#define Sensor1_GPIO_Port GPIOA
#define Sensor2_Pin GPIO_PIN_1
#define Sensor2_GPIO_Port GPIOA
#define Sensor3_Pin GPIO_PIN_2
#define Sensor3_GPIO_Port GPIOA

#endif /* DEVICE_H_ */
