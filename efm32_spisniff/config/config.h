#ifndef  __CONFIG_H__
#include "config_efm32.h"

#define XTAL_FREQUENCY 48000000UL

#define IRQ_PRIORITY_GROUP 5
#define SPI_SNIFF_DMA_CH 2
#define DMA_BUFFER_SIZE 64

#define SCREEN_HRES 1024
#define SCREEN_HSTART 1048
#define SCREEN_HEND 1184
#define SCREEN_HTOTAL 1344

#define SCREEN VRES 768
#define SCREEN_VSTART 771
#define SCREEN_VEND 777
#define SCREEN_VTOTAL 806

#endif /*__CONFIG_H__*/