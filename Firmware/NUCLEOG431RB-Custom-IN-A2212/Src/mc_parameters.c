
/**
  ******************************************************************************
  * @file    mc_parameters.c
  * @author  Motor Control SDK Team, ST Microelectronics
  * @brief   This file provides definitions of HW parameters specific to the 
  *          configuration of the subsystem.
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "parameters_conversion.h"
 
 
#include "r1_g4xx_pwm_curr_fdbk.h"
 
 
 
 
 
 

/* USER CODE BEGIN Additional include */

/* USER CODE END Additional include */  

#define FREQ_RATIO 1                /* Dummy value for single drive */
#define FREQ_RELATION HIGHEST_FREQ  /* Dummy value for single drive */
 

/**
  * @brief  Current sensor parameters Motor 1 - single shunt - F30x
  */
const R1_Params_t R1_ParamsM1 =
{
/* Dual MC parameters --------------------------------------------------------*/                                                                                                                                
  .FreqRatio       = FREQ_RATIO,                                                                       
  .IsHigherFreqTim = FREQ_RELATION, 
  .TIMx               = TIM1, 
                                                                     
/* Current reading A/D Conversions initialization -----------------------------*/
  .ADCx            = ADC1,                        
  .IChannel        = MC_ADC_CHANNEL_7,            
                                                                                                            
/* PWM generation parameters --------------------------------------------------*/
  .RepetitionCounter = REP_COUNTER,                                                                        
  .Tafter            = TAFTER,                                                                             
  .Tbefore           = TBEFORE,                                                                             
  .TMin              = TMIN,                                                                                
  .HTMin             = HTMIN,                          
  .CHTMin            = CHTMIN,                         
  .TSample           = SAMPLING_TIME,                                                                             
           
                                                                
/* PWM Driving signals initialization ----------------------------------------*/
  .LowSideOutputs = (LowSideOutputsFunction_t)LOW_SIDE_SIGNALS_ENABLING,
  .pwm_en_u_port  = MC_NULL,                                                           
  .pwm_en_u_pin   = (uint16_t) 0,                                                             
  .pwm_en_v_port  = MC_NULL,                                                       
  .pwm_en_v_pin   = (uint16_t) 0,                                                           
  .pwm_en_w_port  = MC_NULL,                                                        
  .pwm_en_w_pin   = (uint16_t) 0,   
                                                    
/* Emergency input (BKIN2) signal initialization -----------------------------*/
  .BKIN2Mode      = EXT_MODE,                         
  
/* Internal OPAMP common settings --------------------------------------------*/
  .OPAMP_Selection = MC_NULL,                                                                  
/* Internal COMP settings ----------------------------------------------------*/
  .CompOCPSelection = MC_NULL,                             
  .CompOCPInvInput_MODE = NONE,                             
  .CompOVPSelection = MC_NULL,        
  .CompOVPInvInput_MODE =  NONE,
                                                      
/* DAC settings --------------------------------------------------------------*/
  .DAC_OCP_Threshold =  23830,                                                                               
  .DAC_OVP_Threshold =  23830,                                                                              
};
   
  

/* USER CODE BEGIN Additional parameters */

/* USER CODE END Additional parameters */  

/******************* (C) COPYRIGHT 2019 STMicroelectronics *****END OF FILE****/
