/***************************************************************************//**
 * @file
 * @brief Simple Button Driver Instances
 *******************************************************************************
 * # License
 * <b>Copyright 2019 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "sl_simple_button.h"
#include "sl_simple_button_btn0_config.h"
#include "sl_simple_button_btn1_config.h"

sl_simple_button_context_t simple_btn0_context = {
  .state = 0,
  .history = 0,
#ifndef CCP_SI917_BRINGUP
  .port = SL_SIMPLE_BUTTON_BTN0_PORT,
#endif /* CCP_SI917_BRINGUP */
  .pin = SL_SIMPLE_BUTTON_BTN0_PIN,
  .mode = SL_SIMPLE_BUTTON_BTN0_MODE,
};

const sl_button_t sl_button_btn0 = {
  .context = &simple_btn0_context,
#ifndef CCP_SI917_BRINGUP  	
  .init = sl_simple_button_init,
  .get_state = sl_simple_button_get_state,
  .poll = sl_simple_button_poll_step,
  .enable = sl_simple_button_enable,
  .disable = sl_simple_button_disable,
#else  
  .init = 0,
  .get_state = 0,
  .poll = 0,
  .enable = 0,
  .disable = 0,
#endif /* CCP_SI917_BRINGUP */  
};
sl_simple_button_context_t simple_btn1_context = {
  .state = 0,
  .history = 0,
#ifndef CCP_SI917_BRINGUP  
  .port = SL_SIMPLE_BUTTON_BTN1_PORT,
#endif /* CCP_SI917_BRINGUP */  
  .pin = SL_SIMPLE_BUTTON_BTN1_PIN,
  .mode = SL_SIMPLE_BUTTON_BTN1_MODE,
};

const sl_button_t sl_button_btn1 = {
  .context = &simple_btn1_context,
#ifndef CCP_SI917_BRINGUP  	  	
  .init = sl_simple_button_init,
  .get_state = sl_simple_button_get_state,
  .poll = sl_simple_button_poll_step,
  .enable = sl_simple_button_enable,
  .disable = sl_simple_button_disable,
#else  
  .init = 0,
  .get_state = 0,
  .poll = 0,
  .enable = 0,
  .disable = 0,
#endif /* CCP_SI917_BRINGUP */    
};

const sl_button_t *sl_simple_button_array[] = {
  &sl_button_btn0, 
  &sl_button_btn1
};
const uint8_t simple_button_count = 2;

void sl_simple_button_init_instances(void)
{
  sl_button_init(&sl_button_btn0);
  sl_button_init(&sl_button_btn1);
}

void sl_simple_button_poll_instances(void)
{
  sl_button_poll_step(&sl_button_btn0);
  sl_button_poll_step(&sl_button_btn1);
}
