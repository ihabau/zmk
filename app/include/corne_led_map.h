/*
 * Corne LED Map Configuration
 *
 * 27 WS2812 LEDs per side (on single SPI strip via P0.06):
 *   LEDs 0-5:   Underglow (6 LEDs)
 *   LEDs 6-26:  Per-key RGB (21 keys = 3 rows of 6 + 3 thumb)
 *
 * Total: 54 LEDs (27 per side)
 */

#pragma once

/* Underglow: first 6 LEDs */
#define UNDERGLOW_COUNT 6
static const uint8_t underglow_map[UNDERGLOW_COUNT] = {0, 1, 2, 3, 4, 5};

/* Per-key: remaining 21 LEDs (3x6 alpha + 3 thumb) */
#define PER_KEY_COUNT 21
static const uint8_t per_key_map[PER_KEY_COUNT] = {
     6,  7,  8,  9, 10, 11,  /* Row 0: 6 keys */
    12, 13, 14, 15, 16, 17,  /* Row 1: 6 keys */
    18, 19, 20, 21, 22, 23,  /* Row 2: 6 keys */
    24, 25, 26                /* Thumb: 3 keys */
};

/* Row definitions for wave effects */
#define PER_KEY_ROW_COUNT 4
static const uint8_t per_key_row_sizes[PER_KEY_ROW_COUNT] = {6, 6, 6, 3};

/* Column positions for each key (used by wave effects) */
#define PER_KEY_COL_MAX 6
static const uint8_t per_key_col[PER_KEY_COUNT] = {
     0,  1,  2,  3,  4,  5,  /* Row 0 */
     0,  1,  2,  3,  4,  5,  /* Row 1 */
     0,  1,  2,  3,  4,  5,  /* Row 2 */
     0,  1,  2                /* Thumb */
};

/* Total LED count per side */
#define TOTAL_LEDS (UNDERGLOW_COUNT + PER_KEY_COUNT)  /* 27 */
