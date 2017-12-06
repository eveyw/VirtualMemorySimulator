#ifndef _MACROS_H
#define _MACROS_H

#include <math.h>
#include "global.h"

/* Bit positions *//*TLB*/
#define VALID			0
#define DIRTY			1
#define USED			2 /*new entry kick off some used things, mark them as USED*/

/* bit corresponds to the bit number in flags. Least significant bit is 0 */
#define BIT_MASK(n)	1<<(n)  /* TASK 1a: Define a mask with nth bit set */

#define IS_SET(flags,bit)	(((flags) & (BIT_MASK(bit)))==0 ? 0 : 1)  /* TASK 1b: Test if bit is set in flags */

#define SET_BIT(flags,bit)	((flags)  |= (BIT_MASK(bit)))  /* TASK 1c: Set the bit in flags to 1 */

#define CLEAR_BIT(flags,bit) ((flags) &= ~(BIT_MASK(bit)))  /* TASK 1d: Set the bit in flags to 0 */

#define LOG_PAGE_SIZE (log2(page_size))

#define OFFSET_MASK ((1<<((int)LOG_PAGE_SIZE))-1)

/* Get the page number and page offset from a virtual address. */
#define VADDR_PAGENUM(addr) addr>>((int)LOG_PAGE_SIZE)

#define VADDR_OFFSET(addr) addr & (OFFSET_MASK)

#endif
