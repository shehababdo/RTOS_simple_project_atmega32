/*
 * bitmaths.h
 *
 * Created: 7/9/2023 1:11:05 PM
 *  Author: sheha
 */ 


#ifndef BITMATHS_H_
#define BITMATHS_H_

#define SET_BIT(reg,bit_no)     (reg   |=(1<<bit_no))
#define CLR_BIT(reg,bit_no)		(reg   &=~(1<<bit_no))
#define TOG_BIT(reg,bit_no)     (reg   ^=(1<<bit_no))
#define GET_BIT(reg,bit_no)		((reg>>bit_no) & (0x01))




#endif /* BITMATHS_H_ */