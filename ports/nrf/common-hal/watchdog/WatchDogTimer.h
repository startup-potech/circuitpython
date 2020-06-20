/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Noralf Trønnes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_NRF_COMMON_HAL_WATCHDOG_WATCHDOGTIMER_H
#define MICROPY_INCLUDED_NRF_COMMON_HAL_WATCHDOG_WATCHDOGTIMER_H

#include "py/obj.h"
#include "shared-bindings/watchdog/WatchDogMode.h"
#include "shared-bindings/watchdog/WatchDogTimer.h"

struct _watchdog_watchdogtimer_obj_t {
  mp_obj_base_t base;
  mp_float_t timeout;
  watchdog_watchdogmode_t mode;
};

// This needs to be called in order to disable the watchdog if it's set to
// "RAISE". If set to "RESET", then the watchdog cannot be reset.
void watchdog_reset(void);

#endif // MICROPY_INCLUDED_NRF_COMMON_HAL_WATCHDOG_WATCHDOGTIMER_H
