/*!
 * \file      board-config.h
 *
 * \brief     Board configuration
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech
 *
 *               ___ _____ _   ___ _  _____ ___  ___  ___ ___
 *              / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 *              \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 *              |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 *              embedded.connectivity.solutions===============
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 *
 * \author    Daniel Jaeckle ( STACKFORCE )
 *
 * \author    Johannes Bruder ( STACKFORCE )
 *
 * \author    Simon Hoinkis
 */
#ifndef __BOARD_CONFIG_H__
#define __BOARD_CONFIG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * Defines the time required for the TCXO to wakeup [ms].
 * No TCXO on this board
 */
#define BOARD_TCXO_WAKEUP_TIME                      0

/*!
 * Board MCU pins definitions
 */
#define RADIO_RESET                                 PB_0

#define RADIO_MOSI                                  PA_7
#define RADIO_MISO                                  PA_6
#define RADIO_SCLK                                  PA_5

#define RADIO_NSS                                   PA_15

#define RADIO_DIO_0                                 PC_13
#define RADIO_DIO_1                                 PB_10
#define RADIO_DIO_2                                 PB_11
#define RADIO_DIO_3                                 PB_8
#define RADIO_DIO_4                                 PB_9
#define RADIO_DIO_5                                 PB_1

#define RADIO_ANT_SWITCH                            PA_8

#define ADC_CHANNEL_PA1                             ADC_CHANNEL_1
#define ADC_CHANNEL_VREFINT                         ADC_CHANNEL_17

#define PWR_OUT_PIN27_5V                            PB_5

#define SWCLK                                       PA_14
#define SWDAT                                       PA_13

#define I2C_SCL                                     PB_6
#define I2C_SDA                                     PB_7

#define UART2_TX                                    PA_2
#define UART2_RX                                    PA_3

#define UART1_TX                                    PA_9
#define UART1_RX                                    PA_10

#ifdef __cplusplus
}
#endif

#endif // __BOARD_CONFIG_H__
