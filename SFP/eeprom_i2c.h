/* 
 * File:   eeprom_i2c.h
 * Author: A16686
 *
 * Created on October 26, 2015, 2:18 PM
 */

#ifndef EEPROM_I2C_H
#define	EEPROM_I2C_H

#ifdef	__cplusplus
extern "C" {
#endif

#define MAX_RETRY         100
#define SLAVE_ADDRESS     0x50 
#define PAGE_LIMIT         16  // Change as stated on EEPROM device datasheet

int I2C2_ByteWrite(uint8_t *dataAddress, uint8_t dataByte, uint8_t addlen);
uint8_t I2C2_ByteRead(uint8_t *dataAddress, uint8_t dataByte,uint8_t addlen);
int I2C2_BufferWrite(uint8_t *dataAddress, uint8_t *dataBuffer,  uint8_t addlen, uint8_t buflen);
void I2C2_BufferRead(uint8_t *dataAddress, uint8_t *dataBuffer,  uint8_t addlen, uint8_t buflen);

#ifdef	__cplusplus
}
#endif

#endif	/* EEPROM_I2C_H */

