/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software: you can redistribute 
 * this software and/or modify this software under the terms of the 
 * GNU General Public License as published by the Free Software 
 * Foundation, either version 3 of the License, or (at your option) 
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  
 * 
 * If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define TARGET_BOARD_IDENTIFIER "PSF7"

#define USBD_PRODUCT_STRING "PHISCHF7"

#define LED0_PIN                PB6
#define LED1_PIN                PB7

#define USE_BEEPER
#define BEEPER_PIN              PD10
#define BEEPER_INVERTED

#define USE_EXTI
#define MPU_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL

#define ICM20689_CS_PIN          PA4
#define ICM20689_SPI_INSTANCE    SPI1

#define USE_GYRO
#define USE_GYRO_SPI_ICM20689
#define GYRO_ICM20689_ALIGN      CW180_DEG

#define USE_ACC
#define USE_ACC_SPI_ICM20689
#define ACC_ICM20689_ALIGN       CW180_DEG

//#define USE_BARO
//#define USE_BARO_MS5611
//#define MS5611_I2C_INSTANCE     I2CDEV_1

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

//#define USE_SPI_DEVICE_2
//#define SPI2_NSS_PIN            PB12
//#define SPI2_SCK_PIN            PB13
//#define SPI2_MISO_PIN           PB14
//#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define USE_SPI_DEVICE_4
#define SPI4_NSS_PIN            PE11
#define SPI4_SCK_PIN            PE12
#define SPI4_MISO_PIN           PE13
#define SPI4_MOSI_PIN           PE14

#define SDCARD_SPI_INITIALIZATION_CLOCK_DIVIDER 256 // 422kHz
// Divide to under 25MHz for normal operation:
#define SDCARD_SPI_FULL_SPEED_CLOCK_DIVIDER 8 // 13.5MHz

#define USE_VCP
#define USE_USB_DETECT
#define USB_DETECT_PIN          PC5

#define USE_UART7
#define UART7_RX_PIN            PE7
#define UART7_TX_PIN            PE8

#define SERIAL_PORT_COUNT       2 //VCP, USART1, USART3, USART6, SOFTSERIAL x 2

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_PIN  PC9 // (Hardware=0, PPM)

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE              (I2CDEV_1)
#define USE_I2C_PULLUP
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define VBAT_ADC_PIN            PC1
#define RSSI_ADC_PIN            PC2
#define CURRENT_METER_ADC_PIN   PC3

#undef USE_LED_STRIP

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS

// XXX To target maintainer:
// USE_SPEKTRUM_BIND is enabled for this target, and it will use
// RX (or TX if half-duplex) pin of the UART the receiver is connected.
// If PB11 is critical for this target, please resurrect this line.
//#define SPEKTRUM_BIND_PIN       PB11

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         0xffff

#define USABLE_TIMER_CHANNEL_COUNT 5
#define USED_TIMERS             ( TIM_N(2) | TIM_N(3) | TIM_N(8))
