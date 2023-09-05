// Copyright 2023 marinusS (@marinusS)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define RETRO_SHIFT 350

#define EE_HANDS

#define SERIAL_USART_TX_PIN GP0 // The GPIO pin that is used split communication.
