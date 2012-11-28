/*
 ## Cypress USB 3.0 Platform header file (cyfxledblink.h)
 ## ===========================
 ##
 ##  Copyright Cypress Semiconductor Corporation, 2010-2011,
 ##  All Rights Reserved
 ##  UNPUBLISHED, LICENSED SOFTWARE.
 ##
 ##  CONFIDENTIAL AND PROPRIETARY INFORMATION
 ##  WHICH IS THE PROPERTY OF CYPRESS.
 ##
 ##  Use of this file is governed
 ##  by the license agreement included in the file
 ##
 ##     <install>/license/license.txt
 ##
 ##  where <install> is the Cypress software
 ##  installation root directory path.
 ##
 ## ===========================
*/

/* This file contains the constants and definitions used by the LED Blink application example */

#ifndef _INCLUDED_CYFXLEDBLINK_H_
#define _INCLUDED_CYFXLEDBLINK_H_

#include "cyu3externcstart.h"
#include "cyu3types.h"

/* 16/32 bit GPIF Configuration select */
/* Set CY_FX_SLFIFO_GPIF_16_32BIT_CONF_SELECT = 0 for 16 bit GPIF data bus.
 * Set CY_FX_SLFIFO_GPIF_16_32BIT_CONF_SELECT = 1 for 32 bit GPIF data bus.
 */
#define CY_FX_SLFIFO_GPIF_16_32BIT_CONF_SELECT (0)

#define CY_FX_LEDBLINK_THREAD_STACK     (0x0400)                /* LED Blink application thread stack size */
#define CY_FX_LEDBLINK_THREAD_PRIORITY  (8)                     /* LED Blink application thread priority */

#include "cyu3externcend.h"

#endif /* _INCLUDED_CYFXLEDBLINK_H_ */

/*[]*/
