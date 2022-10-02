/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dio_Lcfg.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Port.h"
#include "Dio_Cfg.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

 Port_ConfigType Channels[DIO_CONFIGURED_CHANNLES] = {
							 {NORMAL_MODE,LOW,R4R,OPEN_DRAIN,DIRECTION_OUTPUT,{DioConf_LED1_PORT,DioConf_LED1_CHANNEL}},
							 {NORMAL_MODE,LOW,R4R,OPEN_DRAIN,DIRECTION_OUTPUT,{DioConf_LED2_PORT,DioConf_LED2_CHANNEL}},
							 {NORMAL_MODE,LOW,R4R,OPEN_DRAIN,DIRECTION_OUTPUT,{DioConf_LED3_PORT,DioConf_LED3_CHANNEL}},
							 {NORMAL_MODE,LOW,R4R,OPEN_DRAIN,DIRECTION_INPUT,{DioConf_SW1_PORT,DioConf_SW1_CHANNEL}},
							 {NORMAL_MODE,LOW,R4R,OPEN_DRAIN,DIRECTION_INPUT,{DioConf_SW2_PORT,DioConf_SW2_CHANNEL}},
};
/**********************************************************************************************************************
 *  END OF FILE: Dio_Lcfg.c
 *********************************************************************************************************************/