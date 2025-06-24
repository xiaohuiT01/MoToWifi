/*
 * motor.c
 *
 *  Created on: 2023年7月17日
 *      Author: Qi520503
 *
 * 描述: 电机控制模块，实现对四个电机的PWM和方向控制
 */

#include "motor.h"
#include "tim.h"

/**
 * @brief 设置右后方电机PWM和方向
 * @param motor_right2 PWM值，正值表示正转，负值表示反转
 * @note PWM值范围应在[-MAX_PWM_VALUE, MAX_PWM_VALUE]之间
 */
void RSet_Pwmb(int motor_right2)    //right2    右2
{
    int pwmb_abs;
    
    // 控制方向
    if(motor_right2 > 0) {
        Motor_Right2_Direction(1);  // 正转
    } else {
        Motor_Right2_Direction(0);  // 反转
    }
    
    // 取绝对值作为PWM值
    pwmb_abs = myabs(motor_right2);
    
    // 限制PWM最大值，防止超出定时器范围
    if(pwmb_abs > MAX_PWM_VALUE) {
        pwmb_abs = MAX_PWM_VALUE;
    }
    
    // 设置PWM值
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, pwmb_abs);
}

/**
 * @brief 设置右前方电机PWM和方向
 * @param motor_right1 PWM值，正值表示正转，负值表示反转
 * @note PWM值范围应在[-MAX_PWM_VALUE, MAX_PWM_VALUE]之间
 */
void RSet_Pwma(int motor_right1)    //right1 右1
{
    int pwmb_abs;
    
    // 控制方向
    if(motor_right1 > 0) {
        Motor_Right1_Direction(1);  // 正转
    } else {
        Motor_Right1_Direction(0);  // 反转
    }
    
    // 取绝对值作为PWM值
    pwmb_abs = myabs(motor_right1);
    
    // 限制PWM最大值，防止超出定时器范围
    if(pwmb_abs > MAX_PWM_VALUE) {
        pwmb_abs = MAX_PWM_VALUE;
    }
    
    // 设置PWM值
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, pwmb_abs);
}

/**
 * @brief 设置左后方电机PWM和方向
 * @param motor_left2 PWM值，正值表示正转，负值表示反转
 * @note PWM值范围应在[-MAX_PWM_VALUE, MAX_PWM_VALUE]之间
 */
void Set_Pwmb(int motor_left2)  //left1 左1
{
    int pwmb_abs;
    
    // 控制方向
    if(motor_left2 > 0) {
        Motor_Left2_Direction(1);  // 正转
    } else {
        Motor_Left2_Direction(0);  // 反转
    }
    
    // 取绝对值作为PWM值
    pwmb_abs = myabs(motor_left2);
    
    // 限制PWM最大值，防止超出定时器范围
    if(pwmb_abs > MAX_PWM_VALUE) {
        pwmb_abs = MAX_PWM_VALUE;
    }
    
    // 设置PWM值
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, pwmb_abs);
}

/**
 * @brief 设置左前方电机PWM和方向
 * @param motor_left1 PWM值，正值表示正转，负值表示反转
 * @note PWM值范围应在[-MAX_PWM_VALUE, MAX_PWM_VALUE]之间
 */
void Set_Pwma(int motor_left1)      //left2 左2
{
    int pwma_abs;
    
    // 控制方向
    if(motor_left1 > 0) {
        Motor_Left1_Direction(1);  // 正转
    } else {
        Motor_Left1_Direction(0);  // 反转
    }
    
    // 取绝对值作为PWM值
    pwma_abs = myabs(motor_left1);
    
    // 限制PWM最大值
    if(pwma_abs > MAX_PWM_VALUE) {
        pwma_abs = MAX_PWM_VALUE;
    }
    
    // 设置PWM值
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, pwma_abs);
}

/**
 * @brief 控制左后方电机方向
 * @param direction 方向控制，1=正转，0=反转
 */
void Motor_Left2_Direction(uint8_t direction)
{
    if(direction == 1) {
        // 正转配置
        HAL_GPIO_WritePin(BIN1_GPIO_Port, BIN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(BIN2_GPIO_Port, BIN2_Pin, GPIO_PIN_SET);
    } else {
        // 反转配置
        HAL_GPIO_WritePin(BIN1_GPIO_Port, BIN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(BIN2_GPIO_Port, BIN2_Pin, GPIO_PIN_RESET);
    }
}

/**
 * @brief 控制右后方电机方向
 * @param direction 方向控制，1=正转，0=反转
 */
void Motor_Right2_Direction(uint8_t direction)
{
    if(direction == 1) {
        // 正转配置
        HAL_GPIO_WritePin(RBIN2_GPIO_Port, RBIN2_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(RBIN1_GPIO_Port, RBIN1_Pin, GPIO_PIN_SET);
    } else {
        // 反转配置
        HAL_GPIO_WritePin(RBIN1_GPIO_Port, RBIN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(RBIN2_GPIO_Port, RBIN2_Pin, GPIO_PIN_SET);
    }
}

/**
 * @brief 控制左前方电机方向
 * @param direction 方向控制，1=正转，0=反转
 */
void Motor_Left1_Direction(uint8_t direction)
{
    if(direction == 1) {
        // 正转配置
        HAL_GPIO_WritePin(AIN1_GPIO_Port, AIN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(AIN2_GPIO_Port, AIN2_Pin, GPIO_PIN_SET);
    } else {
        // 反转配置
        HAL_GPIO_WritePin(AIN1_GPIO_Port, AIN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(AIN2_GPIO_Port, AIN2_Pin, GPIO_PIN_RESET);
    }
}

/**
 * @brief 控制右前方电机方向
 * @param direction 方向控制，1=正转，0=反转
 */
void Motor_Right1_Direction(uint8_t direction)
{
    if(direction == 1) {
        // 正转配置
        HAL_GPIO_WritePin(RAIN2_GPIO_Port, RAIN2_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(RAIN1_GPIO_Port, RAIN1_Pin, GPIO_PIN_SET);
    } else {
        // 反转配置
        HAL_GPIO_WritePin(RAIN1_GPIO_Port, RAIN1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(RAIN2_GPIO_Port, RAIN2_Pin, GPIO_PIN_SET);
    }
}

/**
 * @brief 计算整数绝对值
 * @param num 输入整数
 * @return 绝对值结果
 */
int myabs(int num)
{
    return (num < 0) ? -num : num;
}    