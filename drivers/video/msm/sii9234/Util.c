/***************************************************************************
 *
 *   SiI9234 - MHL Transmitter Driver
 *
 * Copyright (C) 2011 SiliconImage, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *****************************************************************************/
#include <linux/delay.h>
#include "TypeDefs.h"
#include "Util.h"

void DelayMS(word M_Sec)
{
	hr_msleep(M_Sec);
}
