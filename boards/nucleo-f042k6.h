#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdbool.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

/*
 * Board definitions for ST's Nucleo-32 reference board with STM32F042K6
 *      https://www.st.com/en/evaluation-tools/nucleo-f042k6.html
 *
 * The USB port on the board is connected to an onboard ST-LINK.
 * F042's actual USB port is exposed on the pin headers:
 * 
 *  USB | Nucleo-F042
 * -----|--------------
 *  D-  | CN3-13 (D10)
 *  D+  | CN3-5 (D2)
 *  5V  | CN4-4, (5V)
 *  GND | CN4-2, (GND)
 *
 */

#define BOARD_USE_DEBUG_PINS_AS_GPIO false

#define BOARD_RCC_LED                RCC_GPIOB
#define BOARD_PORT_LED               GPIOB
#define BOARD_PIN_LED                GPIO3

/* Only LED, high active, use as idle. */
#define BOARD_LED_HIGH_IS_BUSY       false

/* STM32F0x2 has internal USB pullup. */

/* Currently you can only use SPI1, since it has highest clock. */

#endif /* __BOARD_H__ */
