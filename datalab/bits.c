/* 
 *  
 *  �й� :           
 *  �̸� :
 *  
 */

#include "btest.h"
#include <limits.h>

/* 
 * bitAnd - ~,|  �� ���
 *   Example: bitAnd(6, 5) = 4
 *   ��밡�� ��ȣ: ~ |
 *   ����: 1
 */
int bitAnd(int x, int y) {
     return 2;
}


/* 
 * getByte - ! ~ & ^ | + << >> �� ��� 
 *   Examples: getByte(0x12345678,1) = 0x56
 *   ����: 2
 */
int getByte(int x, int n) {
     return 2;
}

/* 
 *  logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   ��밡���� ��ȣ : ~ & ^ | + << >>
 *   ���� : 3 
 */
int logicalShift(int x, int n) {
  return 2;
}
/*
 *  bitCount - returns count of number of 1's in word
 *   Examples: bitCount(5) = 2, bitCount(7) = 3
 *  ��밡���� ��ȣ : ! ~ & ^ | + << >>
 *  ���� : 4
 */
int bitCount(int x) {
  return 2;
}
/* 
 * tmin - return minimum two's complement integer 
 *  ��밡���� ��ȣ: ! ~ & ^ | + << >>
 *  ���� : 1
 */
int tmin(void) {
  return 2;
}
/* 
 * fitsBits - return 1 if x can be represented as an 
 *  n-bit, two's complement integer.
 *   1 <= n <= 32
 *  Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *  ��밡�� ��ȣ : ! ~ & ^ | + << >>
 *  ����: 2
 */
int fitsBits(int x, int n) {
  return 2;
}

/* 
 *  isPositive - return 1 if x > 0, return 0 otherwise 
 *  Example: isPositive(-1) = 0.
 *  ��밡�� ��ȣ: ! ~ & ^ | + << >>
 *  ����: 3
 */  

int isPositive(int x) {
  return 2;
}

