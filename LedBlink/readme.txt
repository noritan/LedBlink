
  CYPRESS SEMICONDUCTOR CORPORATION
               FX3 SDK

LED BLINK EXAMPLE
---------------------------------------

  This example blinks a LED connected at the CTRL4 (GPIO[21])
  
  The PIB is clocked by 25kHz clock
  (SYSCLK / 16 / 1000 = 25kHz; where SYSCLK is 400MHz)
  
  In the GPIF II state machine, turns LED off and on for 6250 PIB clocks.
  6250 / 25kHz = 0.25s
  
  As the result, the blink frequency of the LED becomes 2Hz.

  Files:

    * cyfx_gcc_startup.S : 
      Start-up code for the ARM-9 core on the FX3 device.  This assembly
      source file follows the syntax for the GNU assembler.

    * cyfxledblink.h : 
      C header file that defines constants used by this example
      implementation.

    * ledblink.cydsn/cyfxgpif2config.h : 
      C header file that contains the data required to configure the GPIF
      interface to implement the LED Blink behavior.

    * cyfxtx.c : 
      C source file that provides ThreadX RTOS wrapper functions and other
      utilites required by the FX3 firmware library.

    * cyfxledblink.c : 
      Main C source file that implements this example.

    * makefile : 
      GNU make compliant build script for compiling this example.

[]

