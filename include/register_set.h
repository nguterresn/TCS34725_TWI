/**
 * @file register_set.h
 * 
 * @brief list of register addresses based on TCS34725 datasheet.
 * 
 * @author Nuno Nogueira, 2020.
 * */

/* Register Set*/
#define ENABLE_REGISTER 0x00
#define TIMING_REGISTER 0x01
#define CONTROL_REGISTER 0x0F
#define COMMAND_BIT 0x80
#define ID 0x12
#define STATUS 0x13
#define CDATA 0x14
#define CDATAH 0x15
#define RDATA 0x16
#define RDATAH 0x17
#define GDATA 0x18
#define GDATAH 0x19
#define BDATA 0x1A
#define BDATAH 0x1B


/* Enable Register */
#define PON 0x01
#define AEN 0x02

/* Timing register */
//#define ATIME 0xFF //2.4ms
//#define INTEGRATION_DELAY 3
//#define ATIME 0xF6 //24ms
//#define INTEGRATION_DELAY 24
//#define ATIME 0xD5 //101ms
//#define INTEGRATION_DELAY 101
//#define ATIME 0xC0 //154ms 
//#define INTEGRATION_DELAY 154
#ifndef ATIME
    #define ATIME 0x00 //700ms
    #define INTEGRATION_DELAY 700
#endif

/* Control Register */
//#define AGAIN 0x01 //(4X)
//#define GAIN 0x04
//#define AGAIN 0x02 //(16X)
//#define GAIN 0x10
//#define AGAIN 0x03 //(60X)
//#define GAIN 0x3C
#ifndef AGAIN
    #define GAIN 0x01
    #define AGAIN 0x00 //(1X)
#endif

/* ID Register */
#define NUMBER_IDENTIFICATION 0x44

