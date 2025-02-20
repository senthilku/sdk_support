#ifndef _BRD4161A_H_
#define _BRD4161A_H_
#ifndef LOGGING_STATS
#define WAKE_INDICATOR_PIN PIN(D, 3)
#endif

#ifdef LOGGING_STATS
#define LOGGING_WAKE_INDICATOR_PIN PIN(D, 3)
#define LOGGING_STATS_PORT gpioPortD
#define LOGGING_STATS_PIN 03
#endif

#define MY_USART USART2
#define MY_USART_CLOCK cmuClock_USART2
#define MY_USART_TX_SIGNAL dmadrvPeripheralSignal_USART2_TXBL
#define MY_USART_RX_SIGNAL dmadrvPeripheralSignal_USART2_RXDATAV

#define SPI_CLOCK_PIN PIN(A, 8)
#define SPI_MOSI_PIN PIN(A, 6)
#define SPI_MISO_PIN PIN(A, 7)
#define SPI_CS_PIN PIN(A, 9)

#if (BRD4161A || BRD4162A || BRD4163A || BRD4164A)

#define SL_WFX_HOST_PINOUT_SPI_TX_PORT gpioPortA
#define SL_WFX_HOST_PINOUT_SPI_TX_PIN 6
#define SL_WFX_HOST_PINOUT_SPI_TX_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_RX_PORT gpioPortA
#define SL_WFX_HOST_PINOUT_SPI_RX_PIN 7
#define SL_WFX_HOST_PINOUT_SPI_RX_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_CLK_PORT gpioPortA
#define SL_WFX_HOST_PINOUT_SPI_CLK_PIN 8
#define SL_WFX_HOST_PINOUT_SPI_CLK_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_CS_PORT gpioPortA
#define SL_WFX_HOST_PINOUT_SPI_CS_PIN 9
#define SL_WFX_HOST_PINOUT_SPI_CS_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_PERIPHERAL USART2
#define SL_WFX_HOST_PINOUT_SPI_PERIPHERAL_NO 2
#define SL_WFX_HOST_PINOUT_SPI_USART_CLK cmuClock_USART2
#define SL_WFX_HOST_PINOUT_SPI_RX_DMA_SIGNAL                                   \
  dmadrvPeripheralSignal_USART2_RXDATAV
#define SL_WFX_HOST_PINOUT_SPI_TX_DMA_SIGNAL dmadrvPeripheralSignal_USART2_TXBL
#define SL_WFX_HOST_PINOUT_SPI_RX_LDMA_SIGNAL                                  \
  ldmaPeripheralSignal_USART2_RXDATAV
#define SL_WFX_HOST_PINOUT_SPI_TX_LDMA_SIGNAL ldmaPeripheralSignal_USART2_TXBL

#ifdef RS911X_WIFI
//#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PORT gpioPortC /* SPI IRQ port*/
//#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PIN 9          /* SPI IRQ pin */
//#define SL_WFX_HOST_PINOUT_RESET_PORT gpioPortD
//#define SL_WFX_HOST_PINOUT_RESET_PIN 12
#define WFX_RESET_PIN PIN(D, 12)
#define WFX_INTERRUPT_PIN PIN(C, 9)
//#define WFX_INTERRUPT_PIN       PIN(D, 3)
#define WFX_SLEEP_CONFIRM_PIN PIN(D, 13)
#define SL_WFX_HOST_PINOUT_SPI_IRQ 9
#else /* WF200 */
#define SL_WFX_HOST_PINOUT_RESET_PORT gpioPortD
#define SL_WFX_HOST_PINOUT_RESET_PIN 10
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PORT gpioPortB /* SPI IRQ port*/
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PIN 6          /* SPI IRQ pin */
#define SL_WFX_HOST_PINOUT_WUP_PORT gpioPortD
#define SL_WFX_HOST_PINOUT_WUP_PIN 8
#define SL_WFX_HOST_PINOUT_SPI_IRQ 5
#endif /* WF200/9116 */

#endif /*  (BRD4161A || BRD4162A || BRD4163A || BRD4164A) */

#endif /* _BRD416180A_H_ */
