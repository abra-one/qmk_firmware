// Copyright 2023 TODO (@TODO)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define EE_HANDS
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0


#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_MODS_ENABLE

#define MATRIX_ROW_PINS { B1, B3, B2, B6}
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6}
