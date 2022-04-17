 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - PORT Driver
 *
 * Author: Hazem Hisham
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/*PB strucutre used with Port_Init API*/
/* Description: Structure to configure each individual PIN:
 *  1. the number of the pin in the PORT.
 *	2. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *  3. the direction of pin --> INPUT or OUTPUT
 *  4. the internal resistor --> Disable, Pull up or Pull down
 *  5.The initial Value 
 *  6.Pin Mode
 *  7.pin direction changeable flag
 *  8.pin mode changeable flag
 */
const Port_ConfigType Port_Configuration= {
    /*Start of Port A*/
/*PA0*/PORT_PIN0_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PA1*/PORT_PIN0_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PA2*/PORT_PIN2_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PA3*/PORT_PIN3_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PA4*/PORT_PIN4_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PA5*/PORT_PIN5_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PA6*/PORT_PIN6_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PA7*/PORT_PIN7_ID,PORTA_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    /*Start of Port B*/

/*PB0*/PORT_PIN0_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PB1*/PORT_PIN0_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PB2*/PORT_PIN2_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB3*/PORT_PIN3_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB4*/PORT_PIN4_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB5*/PORT_PIN5_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB6*/PORT_PIN6_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB7*/PORT_PIN7_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

    /*Start of Port C*/
    
/*PB0*/PORT_PIN0_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PB1*/PORT_PIN0_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,
    
/*PB2*/PORT_PIN2_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB3*/PORT_PIN3_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB4*/PORT_PIN4_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB5*/PORT_PIN5_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB6*/PORT_PIN6_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,

/*PB7*/PORT_PIN7_ID,PORTB_ID,PORT_PIN_IN,OFF,STD_LOW,PORT_PIN_MODE_DIO,UNCHANGEABLE,UNCHANGEABLE,



};

