/*
 * Sofle LED Map Configuration
 *
 * 29 WS2812 LEDs per side (on single SPI strip via P0.08):
 *   LEDs 0-28:  Per-key RGB (29 keys = 4 rows of 6 + 5 thumb)
 *
 * The Sofle has no separate underglow strip: all LEDs are per-key.
 *
 * Total: 58 LEDs (29 per side)
 */

#pragma once

/* No underglow on the Sofle */
#define UNDERGLOW_COUNT 0

/* Per-key: all 29 LEDs (4x6 alpha + 5 thumb) */
#define PER_KEY_COUNT 29
static const uint8_t per_key_map[PER_KEY_COUNT] = {
     0,  1,  2,  3,  4,  5,  /* Row 0: 6 keys */
     6,  7,  8,  9, 10, 11,  /* Row 1: 6 keys */
    12, 13, 14, 15, 16, 17,  /* Row 2: 6 keys */
    18, 19, 20, 21, 22, 23,  /* Row 3: 6 keys */
    24, 25, 26, 27, 28       /* Thumb: 5 keys */
};

/* Row definitions for wave effects */
#define PER_KEY_ROW_COUNT 5
static const uint8_t per_key_row_sizes[PER_KEY_ROW_COUNT] = {6, 6, 6, 6, 5};

/* Column positions for each key (used by wave effects) */
#define PER_KEY_COL_MAX 6
static const uint8_t per_key_col[PER_KEY_COUNT] = {
     0,  1,  2,  3,  4,  5,  /* Row 0 */
     0,  1,  2,  3,  4,  5,  /* Row 1 */
     0,  1,  2,  3,  4,  5,  /* Row 2 */
     0,  1,  2,  3,  4,  5,  /* Row 3 */
     0,  1,  2,  3,  4       /* Thumb */
};

/* Total LED count per side */
#define TOTAL_LEDS (UNDERGLOW_COUNT + PER_KEY_COUNT)  /* 29 */
