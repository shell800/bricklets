/* 
* Copyright (c) 2012, Daynix Computing LTD (www.daynix.com)
* All rights reserved.
*
* Maintained by bricklets@daynix.com
*
* This file is a part of Bricklets library, see "Bricklets" page
* on www.daynix.com for more.
*
* This code is licensed under standard 3-clause BSD license.
* See file LICENSE supplied with this package for the full license text.
*/

#include "dnx_io.h"

#include <linux/printk.h>

int dnx_printf(const char *fmt, ...)
{
  int ret;
  va_list va;

  va_start(va, fmt);
  ret = vprintfk(fmt, va);
  va_end(va);

  return ret;
}

