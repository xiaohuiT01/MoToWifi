/*
 * motor.h
 *
 *  Created on: 2023年7月17日
 *      Author: Qi520503
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "main.h"

// 定义PWM最大值，要和定时器的周期值保持一致
#define MAX_PWM_VALUE 1000

// 函数声明
void RSet_Pwmb(int motor_right2);
void RSet_Pwma(int motor_right1);
void Set_Pwmb(int motor_left2);
void Set_Pwma(int motor_left1);

void Motor_Left2_Direction(uint8_t direction);
void Motor_Right2_Direction(uint8_t direction);
void Motor_Left1_Direction(uint8_t direction);
void Motor_Right1_Direction(uint8_t direction);

int myabs(int num);

#endif /* MOTOR_H_ */