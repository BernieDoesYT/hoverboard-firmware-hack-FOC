/******************************************************************************
 * CONFIG.H – Hoverboard Optimized
 * Purpose: Enable full onboard sensor functionality and disable all other inputs
 ******************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

// ########################### PLATFORM / VARIANT SELECTION ###########################
#define VARIANT_HOVERBOARD        // Use onboard hoverboard sensors only

// ########################### GENERAL SETTINGS ####################################
#define FLASH_WRITE_KEY         0x1008   // Required for saving settings to flash

// ########################### SIDEBOARD SERIAL SETTINGS ##########################
#ifdef VARIANT_HOVERBOARD
  // Left sensor board (USART2)
  #define SIDEBOARD_SERIAL_USART2 1
  #define FEEDBACK_SERIAL_USART2

  // Right sensor board (USART3)
  #define SIDEBOARD_SERIAL_USART3 1
  #define FEEDBACK_SERIAL_USART3
#endif

// ########################### CONTROL INPUTS ######################################
#ifdef VARIANT_HOVERBOARD
  // Primary and auxiliary inputs from onboard sensors
  #define PRI_INPUT1          3, -1000, 0, 1000, 0  
  #define PRI_INPUT2          3, -1000, 0, 1000, 0  
  #define AUX_INPUT1          3, -1000, 0, 1000, 0  
  #define AUX_INPUT2          3, -1000, 0, 1000, 0  

  // Control coefficients
  #define SPEED_COEFFICIENT   16384   // 1.0f
  #define STEER_COEFFICIENT   16384   // 1.0f
#endif

// ########################### DISABLE UNUSED VARIANTS ############################
#undef VARIANT_ADC
#undef VARIANT_NUNCHUK
#undef VARIANT_PWM
#undef VARIANT_PPM
#undef VARIANT_IBUS
#undef VARIANT_TRANSPOTTER
#undef VARIANT_SKATEBOARD

#undef CONTROL_ADC
#undef CONTROL_NUNCHUK
#undef CONTROL_PWM_RIGHT
#undef CONTROL_PWM_LEFT
#undef CONTROL_PPM_RIGHT
#undef CONTROL_PPM_LEFT
#undef CONTROL_IBUS

// ########################### DEBUG / UNUSED ######################################
#define DEBUG_LEVEL 0   // No debug output

#endif // CONFIG_H
