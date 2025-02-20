#ifndef _BRD4187C_H_
#define _BRD4187C_H_
#ifndef LOGGING_STATS
#define WAKE_INDICATOR_PIN  PIN(D, 3)
#endif

#ifdef LOGGING_STATS
#define LOGGING_WAKE_INDICATOR_PIN  PIN(D, 3)
#define LOGGING_STATS_PORT    gpioPortD
#define LOGGING_STATS_PIN     03
#endif

// SPI ports and pins
#define EUS1MOSI_PORT   gpioPortC
#define EUS1MOSI_PIN    1
#define EUS1MISO_PORT   gpioPortC
#define EUS1MISO_PIN    2
#define EUS1SCLK_PORT   gpioPortC
#define EUS1SCLK_PIN    3
#define EUS1CS_PORT     gpioPortC
#define EUS1CS_PIN      0


#define MY_USART EUSART1
#define MY_USART_CLOCK cmuClock_EUSART1
#define MY_USART_TX_SIGNAL dmadrvPeripheralSignal_EUSART1_TXBL //dmadrvPeripheralSignal_USART0_TXBL
#define MY_USART_RX_SIGNAL dmadrvPeripheralSignal_EUSART1_RXDATAV //dmadrvPeripheralSignal_USART0_RXDATAV


#define SPI_CLOCK_PIN PIN(C, 3)
#define SPI_MOSI_PIN  PIN(C, 1)
#define SPI_MISO_PIN  PIN(C, 2)
#define SPI_CS_PIN    PIN(C, 0)

#ifdef RS911X_WIFI
#define WFX_RESET_PIN           PIN(A, 6)
#define WFX_INTERRUPT_PIN       PIN(A, 7)
#define WFX_SLEEP_CONFIRM_PIN   PIN(A, 5) /* Exp hdr 7 */
#define SL_WFX_HOST_PINOUT_SPI_IRQ 5
#else /* WF200 */

#define SL_WFX_HOST_PINOUT_RESET_PORT gpioPortA
#define SL_WFX_HOST_PINOUT_RESET_PIN 5
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PORT gpioPortA /* SPI IRQ port*/
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PIN 8          /* SPI IRQ pin */
#define SL_WFX_HOST_PINOUT_WUP_PORT gpioPortB
#define SL_WFX_HOST_PINOUT_WUP_PIN 5
#define SL_WFX_HOST_PINOUT_SPI_IRQ 5

#endif /* WF200/9116 */

#define SL_WFX_HOST_PINOUT_SPI_TX_PORT gpioPortC
#define SL_WFX_HOST_PINOUT_SPI_TX_PIN 1
#define SL_WFX_HOST_PINOUT_SPI_TX_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_RX_PORT gpioPortC
#define SL_WFX_HOST_PINOUT_SPI_RX_PIN 2
#define SL_WFX_HOST_PINOUT_SPI_RX_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_CLK_PORT gpioPortC
#define SL_WFX_HOST_PINOUT_SPI_CLK_PIN 3
#define SL_WFX_HOST_PINOUT_SPI_CLK_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_CS_PORT gpioPortC
#define SL_WFX_HOST_PINOUT_SPI_CS_PIN 0
#define SL_WFX_HOST_PINOUT_SPI_CS_LOC 1

#define SL_WFX_HOST_PINOUT_SPI_PERIPHERAL EUSART1
#define SL_WFX_HOST_PINOUT_SPI_PERIPHERAL_NO 1
#define SL_WFX_HOST_PINOUT_SPI_USART_CLK cmuClock_USART0
#define SL_WFX_HOST_PINOUT_SPI_RX_DMA_SIGNAL dmadrvPeripheralSignal_USART0_RXDATAV
#define SL_WFX_HOST_PINOUT_SPI_TX_DMA_SIGNAL dmadrvPeripheralSignal_USART0_TXBL
#define SL_WFX_HOST_PINOUT_SPI_RX_LDMA_SIGNAL ldmaPeripheralSignal_USART0_RXDATAV
#define SL_WFX_HOST_PINOUT_SPI_TX_LDMA_SIGNAL ldmaPeripheralSignal_USART0_TXBL

#ifdef RS911X_WIFI
#else /* WF200 */
#endif /* WF200/9116 */

#endif /* _BRD416180A_H_ */
