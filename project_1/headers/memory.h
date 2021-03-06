/********************************************
*   Authors: Arundhathi Swami, Vignesh Jayaram
*   Date Edited: 19 Sept 2016
*
*   File: memory.h
*
*   Description: Header file for data manipulation 
*		-my_memmove
*		-my_memzero	
*               -my_reverse
*
*
********************************************************

/*header for function called "memory"*/

#ifndef memory_INCLUDED
#define memory_H_INCLUDED

#include <stdint.h>

	int8_t my_memmove(uint8_t *src, uint8_t *dst, uint32_t length);//moves data from one location to another
	int8_t my_memzero(uint8_t *src, uint32_t length);//fills memory space mentioned with zeros
	int8_t my_reverse(uint8_t *src, uint32_t length);//reverses data in given memory space
#endif
