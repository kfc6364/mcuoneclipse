/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDG.h
**     Project     : S32K144_Blinky
**     Processor   : S32K144_100
**     Component   : LED
**     Version     : Component 01.076, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-02-26, 15:47, # CodeGen: 0
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LEDG
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : SDK_BitIO
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         On         - void LEDG_On(void);
**         Off        - void LEDG_Off(void);
**         Neg        - void LEDG_Neg(void);
**         Get        - uint8_t LEDG_Get(void);
**         Put        - void LEDG_Put(uint8_t val);
**         SetRatio16 - void LEDG_SetRatio16(uint16_t ratio);
**         Deinit     - void LEDG_Deinit(void);
**         Init       - void LEDG_Init(void);
**
** * Copyright (c) 2013-2019, Erich Styger
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
** @file LEDG.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LEDG_module LEDG module documentation
**  @{
*/         

#ifndef __LEDG_H
#define __LEDG_H

/* MODULE LEDG. */
#include "MCUC1.h" /* SDK and API used */
#include "LEDGconfig.h" /* LED configuration */
#include "LEDpin3.h" /* interface to pin */

#define LEDG_ClrVal()    LEDpin3_ClrVal() /* put the pin on low level */
#define LEDG_SetVal()    LEDpin3_SetVal() /* put the pin on high level */
#define LEDG_SetInput()  LEDpin3_SetInput() /* use the pin as input pin */
#define LEDG_SetOutput() LEDpin3_SetOutput() /* use the pin as output pin */

#define LEDG_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define LEDG_On() LEDpin3_ClrVal()
/*
** ===================================================================
**     Method      :  On (component LED)
**
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDG_Off() LEDpin3_SetVal()
/*
** ===================================================================
**     Method      :  Off (component LED)
**
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDG_Neg() LEDpin3_NegVal()
/*
** ===================================================================
**     Method      :  Neg (component LED)
**
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDG_Get() (!(LEDpin3_GetVal()))
/*
** ===================================================================
**     Method      :  Get (component LED)
**
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

void LEDG_Init(void);
/*
** ===================================================================
**     Method      :  Init (component LED)
**
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDG_Put(val)  ((val) ? LEDG_On() : LEDG_Off())
/*
** ===================================================================
**     Method      :  Put (component LED)
**
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LEDG_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component LED)
**
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDG_SetRatio16(uint16_t ratio);
/*
** ===================================================================
**     Method      :  SetRatio16 (component LED)
**
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDG. */

#endif
/* ifndef __LEDG_H */
/*!
** @}
*/
