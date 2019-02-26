/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDpin2.h
**     Project     : S32K144_Blinky
**     Processor   : S32K144_100
**     Component   : SDK_BitIO
**     Version     : Component 01.025, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-02-26, 15:47, # CodeGen: 0
**     Abstract    :
**          GPIO component usable with NXP SDK
**     Settings    :
**          Component name                                 : LEDpin2
**          SDK                                            : MCUC1
**          GPIO Name                                      : 
**          PORT Name                                      : PTD
**          Pin Number                                     : 15
**          Pin Symbol                                     : 
**          Do Pin Muxing                                  : no
**          Init Direction                                 : Output
**          Pull Resistor                                  : no pull resistor
**          Init Value                                     : 0
**     Contents    :
**         GetDir    - bool LEDpin2_GetDir(void);
**         SetDir    - void LEDpin2_SetDir(bool Dir);
**         SetInput  - void LEDpin2_SetInput(void);
**         SetOutput - void LEDpin2_SetOutput(void);
**         GetVal    - bool LEDpin2_GetVal(void);
**         PutVal    - void LEDpin2_PutVal(bool Val);
**         ClrVal    - void LEDpin2_ClrVal(void);
**         SetVal    - void LEDpin2_SetVal(void);
**         NegVal    - void LEDpin2_NegVal(void);
**         Init      - void LEDpin2_Init(void);
**         Deinit    - void LEDpin2_Deinit(void);
**
** * Copyright (c) 2015-2019, Erich Styger
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file LEDpin2.h
** @version 01.00
** @brief
**          GPIO component usable with NXP SDK
*/         
/*!
**  @addtogroup LEDpin2_module LEDpin2 module documentation
**  @{
*/         

#ifndef __LEDpin2_H
#define __LEDpin2_H

/* MODULE LEDpin2. */
#include "MCUC1.h" /* SDK and API used */
#include "LEDpin2config.h" /* configuration */

#if MCUC1_CONFIG_SDK_VERSION_USED == MCUC1_CONFIG_SDK_KINETIS_1_3
  #include "fsl_gpio_driver.h"

  /* only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported */
  #error "only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported!"

  enum LEDpin2_pinNames{
    LEDpin2_CONFIG_PIN_SYMBOL = GPIO_MAKE_PIN(LEDpin2_GPIO_IDX, LEDpin2_CONFIG_PIN_NUMBER),
  };

  extern const gpio_output_pin_user_config_t LEDpin2_OutputConfig[];
  extern const gpio_input_pin_user_config_t LEDpin2_InputConfig[];
#endif

void LEDpin2_Init(void);
/*
** ===================================================================
**     Method      :  Init (component SDK_BitIO)
**
**     Description :
**         Driver initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_ClrVal(void);
/*
** ===================================================================
**     Method      :  ClrVal (component SDK_BitIO)
**
**     Description :
**         Clears the pin value (sets it to a low level)
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_SetVal(void);
/*
** ===================================================================
**     Method      :  SetVal (component SDK_BitIO)
**
**     Description :
**         Sets the pin value to a high value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_NegVal(void);
/*
** ===================================================================
**     Method      :  NegVal (component SDK_BitIO)
**
**     Description :
**         Toggles/negates the pin value
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component SDK_BitIO)
**
**     Description :
**         Driver de-initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

bool LEDpin2_GetVal(void);
/*
** ===================================================================
**     Method      :  GetVal (component SDK_BitIO)
**
**     Description :
**         Returns the pin value
**     Parameters  : None
**     Returns     :
**         ---             - Returns the value of the pin:
**                           FALSE/logical level '0' or TRUE/logical
**                           level '1'
** ===================================================================
*/

bool LEDpin2_GetDir(void);
/*
** ===================================================================
**     Method      :  GetDir (component SDK_BitIO)
**
**     Description :
**         Return the direction of the pin (input/output)
**     Parameters  : None
**     Returns     :
**         ---             - FALSE if port is input, TRUE if port is
**                           output
** ===================================================================
*/

void LEDpin2_SetDir(bool Dir);
/*
** ===================================================================
**     Method      :  SetDir (component SDK_BitIO)
**
**     Description :
**         Sets the direction of the pin (input or output)
**     Parameters  :
**         NAME            - DESCRIPTION
**         Dir             - FALSE: input, TRUE: output
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_SetInput(void);
/*
** ===================================================================
**     Method      :  SetInput (component SDK_BitIO)
**
**     Description :
**         Sets the pin as input
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_SetOutput(void);
/*
** ===================================================================
**     Method      :  SetOutput (component SDK_BitIO)
**
**     Description :
**         Sets the pin as output
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin2_PutVal(bool Val);
/*
** ===================================================================
**     Method      :  PutVal (component SDK_BitIO)
**
**     Description :
**         Sets the pin value
**     Parameters  :
**         NAME            - DESCRIPTION
**         Val             - Value to set. FALSE/logical '0' or
**                           TRUE/logical '1'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDpin2. */

#endif
/* ifndef __LEDpin2_H */
/*!
** @}
*/
