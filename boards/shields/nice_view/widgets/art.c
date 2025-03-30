/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_WINSTON
#define LV_ATTRIBUTE_IMG_WINSTON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WINSTON uint8_t
    winston_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF,
        0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0x89, 0xFF, 0xFF, 0xFF, 0xFF, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xFF, 0xFF, 0xA0, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x89, 0x7F, 0xFF, 0xFF, 0xFE, 0xA0,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x55, 0x7F, 0xFF,
        0xFF, 0xFD, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA,
        0x90, 0xDF, 0xFF, 0xFF, 0xF5, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xEA, 0x4A, 0x7F, 0xFF, 0xFF, 0xF5, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x55, 0x52, 0xAF, 0xFF, 0xFF, 0xAA, 0xA0, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE5, 0x55, 0x48, 0x62, 0xFF, 0xFE, 0xA9, 0x10,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0xA5, 0x55, 0x5B, 0xFF,
        0xF5, 0x54, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xA8, 0x55,
        0x55, 0x6A, 0xBF, 0x5A, 0x92, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xEA, 0x55, 0x11, 0x54, 0xF5, 0x59, 0x64, 0xA5, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0x55, 0x44, 0xCA, 0xA5, 0xAA, 0xEA, 0x95, 0x28, 0xA0, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xAA, 0x52, 0x55, 0x55, 0x7D, 0x55, 0x50, 0x92, 0x40,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xBE, 0xE9, 0x29, 0x29, 0x2A, 0x92, 0xAE, 0xA4,
        0xAA, 0x49, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD4, 0xAA, 0xA2, 0xA4, 0x94, 0x84, 0x85,
        0x48, 0xBB, 0x52, 0x85, 0x24, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xA9, 0x2A, 0x95, 0x55,
        0x22, 0x53, 0x52, 0x55, 0x5F, 0xAA, 0x50, 0x92, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0x52,
        0x91, 0x24, 0x54, 0x95, 0x2A, 0x08, 0xAC, 0xA5, 0xD5, 0x4A, 0x49, 0x20, 0xFF, 0xFF, 0xFF,
        0xFF, 0xAA, 0x88, 0x4A, 0x4A, 0x92, 0x08, 0x94, 0xA2, 0x0D, 0x16, 0xEA, 0xA5, 0x24, 0x90,
        0xFF, 0xFF, 0xFF, 0xED, 0x54, 0x65, 0x20, 0x91, 0x48, 0xA2, 0xAD, 0x09, 0x6C, 0x57, 0x7D,
        0x10, 0x92, 0x40, 0xED, 0x57, 0xFE, 0xAA, 0x4A, 0x80, 0x8A, 0x24, 0x55, 0x14, 0xAE, 0xA0,
        0xAC, 0x52, 0xD5, 0x4A, 0x55, 0x20, 0xB6, 0xDA, 0xA2, 0xA9, 0x52, 0x2A, 0x21, 0x09, 0x24,
        0x42, 0x43, 0xAA, 0xD5, 0x0B, 0x7A, 0xA2, 0x88, 0x90, 0xAB, 0x6B, 0x55, 0x25, 0x28, 0x81,
        0x14, 0x44, 0x90, 0x95, 0x29, 0x42, 0xAA, 0x2B, 0xB6, 0x94, 0x52, 0x40, 0xDA, 0xB5, 0x4A,
        0x94, 0x92, 0x28, 0x81, 0x21, 0x0A, 0x00, 0x84, 0xFD, 0x54, 0x85, 0x7D, 0x49, 0x24, 0x90,
        0x6D, 0xCA, 0x52, 0x52, 0x44, 0x84, 0x28, 0x48, 0x50, 0xA5, 0x22, 0x62, 0xA2, 0xAB, 0x5A,
        0xA2, 0x49, 0x20, 0xB6, 0xA9, 0x29, 0x21, 0x21, 0x21, 0x05, 0x02, 0x04, 0x04, 0x95, 0x69,
        0x5A, 0x25, 0xFD, 0x54, 0x90, 0x80, 0xD5, 0x55, 0x44, 0x88, 0x94, 0x08, 0x50, 0x51, 0x51,
        0x22, 0x00, 0xA4, 0xE2, 0x97, 0x75, 0x02, 0x45, 0x20, 0x54, 0x22, 0x2A, 0x52, 0x40, 0xA2,
        0x02, 0x04, 0x04, 0x89, 0x4A, 0x90, 0x28, 0x49, 0xF5, 0x69, 0x12, 0x10, 0xAA, 0x94, 0x91,
        0x05, 0x0A, 0x00, 0x90, 0x10, 0xA0, 0x02, 0x02, 0x84, 0x12, 0x25, 0xEA, 0x94, 0x48, 0xA0,
        0x25, 0x42, 0x48, 0xA8, 0x40, 0x14, 0x04, 0x82, 0x08, 0x90, 0x95, 0x50, 0x88, 0x97, 0xD5,
        0x22, 0x45, 0x10, 0x48, 0x29, 0x25, 0x02, 0x29, 0x01, 0x20, 0x48, 0x22, 0x05, 0x02, 0x02,
        0x22, 0x0B, 0xEA, 0x49, 0x28, 0xA0, 0x25, 0x4A, 0x90, 0xA8, 0x80, 0x44, 0x02, 0x01, 0x08,
        0x40, 0x4A, 0xA0, 0x10, 0x43, 0xA9, 0x24, 0x45, 0x70, 0x52, 0x24, 0x45, 0x02, 0x12, 0x00,
        0x48, 0x24, 0x01, 0x15, 0x04, 0x14, 0x4C, 0x15, 0xAA, 0x91, 0x2A, 0xF0, 0x09, 0x49, 0x10,
        0xA8, 0x40, 0x51, 0x01, 0x00, 0x40, 0x40, 0x52, 0x81, 0x2A, 0x0A, 0xD4, 0x44, 0x85, 0xF0,
        0x51, 0x24, 0x8A, 0x02, 0x0A, 0x00, 0x04, 0x00, 0x0A, 0x02, 0x04, 0x20, 0x0C, 0x43, 0x52,
        0x92, 0x5B, 0xF0, 0x24, 0x91, 0x21, 0x50, 0x40, 0x04, 0x20, 0x52, 0x20, 0x88, 0x92, 0x84,
        0xAD, 0x15, 0x48, 0x49, 0x2F, 0xF0, 0x42, 0x4A, 0x04, 0x04, 0x01, 0x10, 0x80, 0x00, 0x82,
        0x00, 0x08, 0x10, 0x2C, 0x42, 0xA5, 0x24, 0xFF, 0xF0, 0x14, 0x90, 0x92, 0xA1, 0x24, 0x00,
        0x04, 0x80, 0x08, 0x42, 0x42, 0x82, 0x8E, 0x2A, 0x92, 0x92, 0xFF, 0xF0, 0x42, 0x44, 0x48,
        0x88, 0x00, 0x00, 0x00, 0x08, 0x41, 0x10, 0x08, 0x28, 0x2C, 0x95, 0x48, 0x4B, 0x7F, 0xF0,
        0x29, 0x11, 0x02, 0x20, 0x48, 0x89, 0x10, 0x01, 0x04, 0x01, 0x21, 0x02, 0x86, 0x05, 0x25,
        0x25, 0xFF, 0xF0, 0x44, 0xA4, 0x50, 0x82, 0x00, 0x00, 0x01, 0x20, 0x10, 0x88, 0x04, 0x00,
        0x28, 0xAA, 0x90, 0x97, 0xFF, 0xF0, 0x12, 0x01, 0x05, 0x00, 0x04, 0x20, 0x04, 0x00, 0x02,
        0x21, 0x10, 0x25, 0x05, 0x2A, 0x45, 0x5F, 0xFF, 0xF0, 0x40, 0xA8, 0x48, 0x51, 0x40, 0x82,
        0x20, 0x04, 0x80, 0x04, 0x41, 0x04, 0x50, 0x95, 0x12, 0x3F, 0xFF, 0xF0, 0x14, 0x02, 0x21,
        0x04, 0x12, 0x00, 0x00, 0x10, 0x12, 0x40, 0x04, 0x48, 0x84, 0xA8, 0xA9, 0x7F, 0xFF, 0xF0,
        0x42, 0xA8, 0x88, 0x50, 0x00, 0x08, 0x02, 0x00, 0x40, 0x12, 0x50, 0x00, 0x22, 0x52, 0x05,
        0xFF, 0xFF, 0xF0, 0x28, 0x02, 0x25, 0x01, 0x24, 0x81, 0x20, 0x41, 0x05, 0x04, 0x05, 0x52,
        0x94, 0x94, 0xB2, 0xFF, 0xFF, 0xF0, 0x02, 0xA8, 0x88, 0x50, 0x08, 0x24, 0x00, 0x04, 0x00,
        0x41, 0x50, 0x00, 0x02, 0x42, 0x8F, 0xFF, 0xFF, 0xF0, 0x50, 0x05, 0x22, 0x04, 0xA1, 0x10,
        0x89, 0x00, 0x24, 0x14, 0x22, 0xA4, 0xAA, 0xA8, 0x57, 0xFF, 0xFF, 0xF0, 0x0A, 0xA0, 0x11,
        0x51, 0x04, 0x44, 0x00, 0x20, 0x01, 0x41, 0x48, 0x00, 0x14, 0x4A, 0xBF, 0xFF, 0xFF, 0xF0,
        0x40, 0x15, 0x48, 0x04, 0x21, 0x22, 0x90, 0x04, 0x92, 0x0A, 0x22, 0xAA, 0xA2, 0x92, 0xBF,
        0xFF, 0xFF, 0xF0, 0x2A, 0xA2, 0x25, 0x28, 0x94, 0x14, 0x02, 0x10, 0x00, 0x41, 0x48, 0x01,
        0x14, 0x29, 0x7F, 0xFF, 0xFF, 0xF0, 0x01, 0x14, 0x88, 0x42, 0x01, 0x42, 0x90, 0x81, 0x29,
        0x14, 0x22, 0xAA, 0x52, 0x95, 0xFF, 0xFF, 0xFF, 0xF0, 0xAA, 0x41, 0x22, 0x10, 0xA8, 0x29,
        0x04, 0x04, 0x02, 0x42, 0x90, 0x11, 0x48, 0xAF, 0xFF, 0xFF, 0xFF, 0xF0, 0x10, 0x94, 0x14,
        0x8A, 0x05, 0x04, 0x40, 0x90, 0x90, 0x29, 0x4A, 0xA4, 0x92, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0,
        0x4A, 0x42, 0xA2, 0x40, 0xA0, 0xA2, 0x94, 0x02, 0x05, 0x44, 0x51, 0x12, 0x4B, 0xBF, 0xFF,
        0xFF, 0xFF, 0xF0, 0x51, 0x28, 0x08, 0x2A, 0x0A, 0x14, 0x41, 0x50, 0xA0, 0x92, 0x8A, 0x4A,
        0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0A, 0x05, 0x52, 0x80, 0xA0, 0x81, 0x28, 0x04, 0x15,
        0x29, 0x55, 0xB4, 0xA8, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x44, 0xA8, 0x84, 0x2A, 0x0A, 0x54,
        0x85, 0x52, 0x88, 0x84, 0xAB, 0xDB, 0x55, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x29, 0x12, 0x22,
        0x81, 0x41, 0x02, 0x50, 0x08, 0x52, 0x55, 0x17, 0x05, 0x49, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
        0x42, 0x44, 0x91, 0x28, 0x28, 0xA9, 0x0A, 0xA2, 0x09, 0x24, 0xA9, 0xE2, 0x25, 0xFF, 0xFF,
        0xFF, 0xFF, 0xF0, 0x14, 0xA9, 0x48, 0x85, 0x04, 0x04, 0xA1, 0x14, 0xA4, 0xAA, 0xFF, 0xF9,
        0x29, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x42, 0x04, 0x25, 0x20, 0xA9, 0x50, 0x54, 0xA2, 0x52,
        0x97, 0xFF, 0xFD, 0x45, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x28, 0xA9, 0x10, 0x94, 0x44, 0x8A,
        0x8A, 0x15, 0x09, 0x5F, 0xFF, 0xFF, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x42, 0x44, 0xA4,
        0x42, 0x92, 0x51, 0x21, 0x48, 0xA5, 0x7F, 0xFF, 0xFF, 0xA9, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
        0x11, 0x28, 0x09, 0x14, 0x24, 0x8A, 0x55, 0x25, 0x55, 0xFF, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF,
        0xFF, 0xFF, 0xF0, 0x48, 0x05, 0x52, 0xA1, 0x49, 0x24, 0x88, 0xAA, 0xAB, 0xFF, 0xFF, 0xFF,
        0xDA, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x22, 0xA8, 0x84, 0x4A, 0x24, 0xAA, 0x55, 0x55, 0x5F,
        0xFF, 0xFF, 0xFF, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0
};

const lv_img_dsc_t winston = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = winston_map,
};

#ifndef LV_ATTRIBUTE_IMG_CYGNUS
#define LV_ATTRIBUTE_IMG_CYGNUS
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CYGNUS uint8_t
    cygnus_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0x21, 0x04, 0x08, 0x41, 0x00, 0x80, 0x00, 0x40, 0x92, 0x57, 0xFF, 0xFD, 0xDA, 0xA9, 0x12,
        0x45, 0xFF, 0xF0, 0x94, 0x51, 0x52, 0x94, 0x55, 0x2A, 0xAA, 0x2A, 0x49, 0x5A, 0xAA, 0xD5,
        0xB5, 0x12, 0x49, 0x29, 0xFF, 0xF0, 0x42, 0x24, 0x44, 0x49, 0x08, 0x02, 0x41, 0x05, 0x55,
        0x56, 0xFF, 0xFB, 0x5A, 0xA4, 0x92, 0x45, 0xFF, 0xF0, 0x29, 0x49, 0x11, 0x22, 0x52, 0xA9,
        0x14, 0xA1, 0x4A, 0xDB, 0xBB, 0x6B, 0xAD, 0x12, 0x24, 0x97, 0xFF, 0xF0, 0x44, 0x22, 0x4A,
        0x49, 0x01, 0x04, 0x40, 0x14, 0x55, 0x6D, 0xEF, 0xD5, 0x75, 0x54, 0x89, 0x13, 0xFF, 0xF0,
        0x12, 0x88, 0x91, 0x24, 0xAA, 0x52, 0x89, 0x4A, 0xAA, 0xB6, 0xBD, 0xAE, 0xD6, 0xA1, 0x24,
        0xAF, 0xFF, 0xF0, 0xA4, 0x22, 0x44, 0x88, 0x04, 0x24, 0x20, 0x24, 0xAB, 0x55, 0xEF, 0xDB,
        0xF5, 0x4A, 0x52, 0x4F, 0xFF, 0xF0, 0x11, 0x14, 0x29, 0x22, 0xA9, 0x11, 0x05, 0x15, 0x2A,
        0xB5, 0x7D, 0x5F, 0xF5, 0x54, 0xA9, 0x5F, 0xFF, 0xF0, 0x44, 0xA1, 0x44, 0x49, 0x00, 0xA4,
        0x40, 0xA4, 0xA5, 0xAD, 0x57, 0x75, 0xDB, 0x49, 0x44, 0xBF, 0xFF, 0xF0, 0x52, 0x0A, 0x22,
        0x14, 0xAA, 0x12, 0x14, 0x12, 0x29, 0x5A, 0xBD, 0x5D, 0x7A, 0xAA, 0xAA, 0xFF, 0xFF, 0xF0,
        0x09, 0x51, 0x14, 0xA2, 0x11, 0x48, 0x82, 0xA0, 0x82, 0x8A, 0xB6, 0xF6, 0xFA, 0xD5, 0x01,
        0xFF, 0xFF, 0xF0, 0xA4, 0x08, 0xA2, 0x11, 0x48, 0x42, 0x29, 0x14, 0x28, 0x51, 0x5D, 0x7B,
        0xF5, 0xB4, 0xAF, 0xFF, 0xFF, 0xF0, 0x52, 0xA5, 0x11, 0x4A, 0x25, 0x28, 0x04, 0xC2, 0x82,
        0x0A, 0x5D, 0xEE, 0xBA, 0xD5, 0x2F, 0xFF, 0xFF, 0xF0, 0x08, 0x10, 0x8A, 0x21, 0x40, 0x80,
        0xAB, 0xE8, 0x51, 0x41, 0x2D, 0xFF, 0xF5, 0x2A, 0x9F, 0xFF, 0xFF, 0xF0, 0xD2, 0xA4, 0x50,
        0x94, 0x2A, 0x44, 0x15, 0xAA, 0x08, 0x2A, 0x56, 0xFD, 0x72, 0xAC, 0xBF, 0xFF, 0xFF, 0xF0,
        0x24, 0x42, 0x84, 0x45, 0x45, 0x11, 0x4B, 0xF1, 0x45, 0x00, 0x8B, 0xB7, 0xF4, 0x2A, 0xFF,
        0xFF, 0xFF, 0xF0, 0x92, 0x94, 0x52, 0x92, 0x50, 0x40, 0x25, 0xD4, 0x20, 0xAA, 0x55, 0xDA,
        0xE2, 0x92, 0xFF, 0xFF, 0xFF, 0xF0, 0x48, 0x22, 0x88, 0x49, 0x25, 0x0A, 0x92, 0xF5, 0x14,
        0x01, 0xA6, 0xEF, 0xD4, 0xA8, 0xFF, 0xFF, 0xFF, 0xF0, 0xA5, 0x48, 0x45, 0x24, 0x94, 0x40,
        0x4A, 0xF4, 0xA2, 0xAA, 0xAB, 0x5B, 0xE2, 0xD4, 0xFF, 0xFF, 0xFF, 0xF0, 0x54, 0x25, 0x22,
        0x4A, 0x49, 0x15, 0x13, 0x79, 0x08, 0x05, 0xA9, 0x77, 0x55, 0x75, 0xFF, 0xFF, 0xFF, 0xF0,
        0x92, 0x88, 0x94, 0x91, 0x24, 0x40, 0xA5, 0xBA, 0x52, 0xAB, 0x54, 0xAF, 0x80, 0x94, 0xFF,
        0xFF, 0xFF, 0xF0, 0x54, 0x52, 0x01, 0x24, 0x92, 0x15, 0x15, 0x7D, 0x24, 0x57, 0xAA, 0x56,
        0xAA, 0x55, 0xFF, 0xFF, 0xFF, 0xF0, 0xA2, 0x84, 0xAA, 0x42, 0x48, 0x80, 0xAA, 0xEE, 0x93,
        0x7A, 0xDD, 0x2A, 0x45, 0x29, 0xFF, 0xFF, 0xFF, 0xF0, 0xA8, 0x52, 0x44, 0x95, 0x24, 0x55,
        0x17, 0xBD, 0x5D, 0xDD, 0x74, 0x89, 0x28, 0xD4, 0xFF, 0xFF, 0xFF, 0xF0, 0xAA, 0x89, 0x11,
        0x08, 0x92, 0x04, 0xA9, 0xFF, 0x57, 0x6F, 0xBA, 0x55, 0x45, 0x23, 0xFF, 0xFF, 0xFF, 0xF0,
        0xAA, 0x50, 0xA4, 0xA5, 0x29, 0x51, 0x2D, 0x7D, 0xBF, 0xF5, 0x6D, 0x02, 0x2A, 0x95, 0xFF,
        0xFF, 0xFF, 0xF0, 0xD1, 0x0A, 0x09, 0x10, 0xA4, 0x08, 0xA7, 0xDE, 0x4A, 0xBD, 0xDA, 0x55,
        0x55, 0x40, 0xFF, 0xFF, 0xFF, 0xF0, 0x4C, 0xA1, 0x52, 0x4A, 0x51, 0x45, 0x14, 0xFA, 0xA5,
        0xD6, 0xBC, 0x10, 0x92, 0x5A, 0xFF, 0xFF, 0xFF, 0xF0, 0xB2, 0x54, 0x24, 0x22, 0x94, 0x28,
        0x53, 0xBA, 0x12, 0x79, 0x61, 0x44, 0x21, 0x28, 0xFF, 0xFF, 0xFF, 0xF0, 0xD5, 0x02, 0x92,
        0x94, 0x41, 0x02, 0x8D, 0xF5, 0x48, 0x2F, 0x14, 0x11, 0x04, 0x8A, 0xFF, 0xFF, 0xFF, 0xF0,
        0x55, 0x54, 0x88, 0x42, 0xA8, 0xA8, 0x55, 0x74, 0x22, 0x93, 0x42, 0x44, 0x40, 0x54, 0xFF,
        0xFF, 0xFF, 0xF0, 0xE8, 0x92, 0x52, 0x28, 0x54, 0x05, 0x2B, 0xE9, 0x10, 0x2A, 0x58, 0x00,
        0x08, 0x04, 0xFF, 0xFF, 0xFF, 0xF0, 0x95, 0x49, 0x04, 0x95, 0x42, 0xA8, 0x8D, 0xD0, 0x89,
        0x05, 0x29, 0x28, 0x20, 0x53, 0xFF, 0xFF, 0xFF, 0xF0, 0xD2, 0xA4, 0x51, 0x22, 0x58, 0x05,
        0x2B, 0xEA, 0x40, 0x12, 0x74, 0x01, 0x01, 0x02, 0xFF, 0xFF, 0xFF, 0xF0, 0x55, 0x22, 0x88,
        0x91, 0x55, 0x50, 0x57, 0xA1, 0x24, 0x44, 0x90, 0x90, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xF0,
        0xD5, 0x94, 0x45, 0x2A, 0x50, 0x4A, 0x9E, 0xC8, 0x01, 0x02, 0x02, 0x00, 0x08, 0x29, 0xFF,
        0xFF, 0xFF, 0xF0, 0xAA, 0xA2, 0x28, 0x81, 0x2A, 0x80, 0x5E, 0xA5, 0x50, 0x08, 0x90, 0x22,
        0x20, 0x8D, 0xFF, 0xFF, 0xFF, 0xF0, 0xDD, 0x55, 0x44, 0x54, 0xAA, 0x2A, 0xAF, 0x10, 0x00,
        0x22, 0x00, 0x00, 0x00, 0x2B, 0xFF, 0xFF, 0xFF, 0xF0, 0x65, 0x24, 0x22, 0x92, 0xA9, 0x01,
        0x5E, 0x84, 0x89, 0x00, 0x00, 0x8A, 0x82, 0x89, 0xFF, 0xFF, 0xFF, 0xF0, 0xB5, 0x52, 0x94,
        0x49, 0x2A, 0x54, 0x7D, 0x20, 0x20, 0x00, 0x08, 0x20, 0x28, 0x55, 0xFF, 0xFF, 0xFF, 0xF0,
        0xDA, 0xA8, 0x49, 0x24, 0xAA, 0x82, 0x9C, 0x95, 0x00, 0x48, 0x21, 0x4A, 0x85, 0x2D, 0xFF,
        0xFF, 0xFF, 0xF0, 0x7F, 0x4A, 0xA4, 0x92, 0x54, 0x28, 0x55, 0x00, 0x4A, 0x00, 0x82, 0x80,
        0x52, 0x97, 0xFF, 0xFF, 0xFF, 0xF0, 0x15, 0x55, 0x12, 0x55, 0x2D, 0x45, 0x28, 0x52, 0x00,
        0x00, 0x05, 0x11, 0x08, 0x6B, 0xFF, 0xFF, 0xFF, 0xF0, 0xCA, 0xA8, 0xA5, 0x44, 0x95, 0x20,
        0x95, 0x00, 0x80, 0x42, 0x0A, 0x84, 0x26, 0x9B, 0xFF, 0xFF, 0xFF, 0xF0, 0x25, 0x6A, 0x52,
        0x52, 0x4A, 0x95, 0x2A, 0x54, 0x12, 0x08, 0x16, 0xA0, 0x12, 0x6B, 0xFF, 0xFF, 0xFF, 0xF0,
        0xA9, 0x55, 0x49, 0x49, 0x2A, 0x80, 0x94, 0x01, 0x08, 0x00, 0x1B, 0xA0, 0x44, 0x97, 0xFF,
        0xFF, 0xFF, 0xF0, 0x4A, 0x2D, 0x55, 0x24, 0x95, 0x55, 0x29, 0x48, 0x20, 0x80, 0x57, 0xD1,
        0x12, 0x2B, 0xFF, 0xFF, 0xFF, 0xF0, 0x25, 0x53, 0x4A, 0xAA, 0x45, 0x22, 0x44, 0x02, 0x00,
        0x01, 0x3A, 0xE4, 0x08, 0x93, 0xFF, 0xFF, 0xFF, 0xF0, 0xA8, 0x89, 0x6A, 0x44, 0x92, 0x90,
        0x92, 0x50, 0x44, 0x10, 0x4A, 0x70, 0x22, 0x27, 0xFF, 0xFF, 0xFF, 0xF0, 0x45, 0x54, 0xA9,
        0x29, 0x24, 0xAA, 0x28, 0x84, 0x10, 0x80, 0x2A, 0xB8, 0x81, 0x17, 0xFF, 0xFF, 0xFF, 0xF0,
        0x2A, 0x22, 0x56, 0xA4, 0x49, 0x04, 0x84, 0x00, 0x80, 0x02, 0x99, 0x1C, 0x14, 0x47, 0xFF,
        0xFF, 0xFF, 0xF0, 0xA5, 0x55, 0x2A, 0xA9, 0x24, 0xA8, 0x52, 0xA8, 0x02, 0x00, 0x54, 0xD4,
        0x89, 0x27, 0xFF, 0xFF, 0xFF, 0xF0, 0x50, 0x88, 0x95, 0x52, 0x92, 0x22, 0x09, 0x02, 0x40,
        0x12, 0xAB, 0x2C, 0x25, 0x5F, 0xFF, 0xFF, 0xFF, 0xF0, 0x16, 0x55, 0x4A, 0xA9, 0x21, 0x09,
        0x52, 0x10, 0x08, 0x04, 0x9D, 0xBE, 0x17, 0x6F, 0xFF, 0xFF, 0xFF, 0xF0, 0xA1, 0x22, 0x52,
        0xA4, 0x94, 0xA0, 0x09, 0x40, 0x80, 0x92, 0xAF, 0xCC, 0xAD, 0x4F, 0xFF, 0xFF, 0xFF, 0xF0,
        0x55, 0x55, 0x29, 0x55, 0x49, 0x15, 0x44, 0x12, 0x02, 0x01, 0x57, 0x76, 0x06, 0xBF, 0xFF,
        0xFF, 0xFF, 0xF0, 0x2A, 0x22, 0x85, 0x54, 0xA4, 0x40, 0x22, 0x40, 0x10, 0x55, 0x4B, 0x9D,
        0x51, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x84, 0x94, 0x54, 0xAA, 0x52, 0x95, 0x11, 0x12, 0x45,
        0x05, 0xA8, 0xAE, 0x04, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x52, 0xA5, 0x52, 0x55, 0x49, 0x20,
        0x88, 0x41, 0x00, 0xAA, 0xC6, 0x9C, 0xA8, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0x54, 0x92, 0x29,
        0x4A, 0xAA, 0x4A, 0x52, 0x8A, 0x2A, 0x22, 0xD5, 0x5A, 0x03, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0,
        0x4A, 0x49, 0x45, 0x2A, 0xAA, 0x91, 0x04, 0x20, 0x00, 0x9A, 0xAA, 0x3D, 0x68, 0x7F, 0xFF,
        0xFF, 0xFF, 0xF0, 0x21, 0x2A, 0x2A, 0x92, 0xAA, 0x44, 0x51, 0x45, 0x56, 0xA2, 0xE6, 0xD8,
        0x93, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0x95, 0x44, 0xA4, 0x4A, 0xB5, 0x29, 0x2A, 0x10, 0x01,
        0x5A, 0xB3, 0x7D, 0x4A, 0xBF, 0xFF, 0xFF, 0xFF, 0xF0, 0x54, 0xA9, 0x29, 0x55, 0x55, 0x44,
        0x91, 0x45, 0x55, 0xCA, 0xF5, 0xF2, 0x6A, 0xBF, 0xFF, 0xFF, 0xFF, 0xF0, 0x42, 0x24, 0x92,
        0x92, 0xAA, 0xAA, 0x55, 0x29, 0x05, 0x4B, 0x53, 0xEA, 0xAA, 0x5F, 0xFF, 0xFF, 0xFF, 0xF0,
        0x2A, 0x92, 0xA4, 0x49, 0x5A, 0x45, 0x64, 0x84, 0x53, 0xAC, 0xD9, 0x6A, 0xAA, 0x8F, 0xFF,
        0xFF, 0xFF, 0xF0, 0x92, 0x54, 0x4A, 0xAA, 0x55, 0x55, 0x55, 0x52, 0x8A, 0x9B, 0x69, 0xAA,
        0xD5, 0x27, 0xFF, 0xFF, 0xFF, 0xF0, 0x49, 0x49, 0x24, 0x92, 0xAD, 0x55, 0xAA, 0x94, 0xA3,
        0xA9, 0xBA, 0xAA, 0x52, 0x83, 0xFF, 0xFF, 0xFF, 0xF0
};

const lv_img_dsc_t cygnus = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = cygnus_map,
};


#ifndef LV_ATTRIBUTE_IMG_PIP
#define LV_ATTRIBUTE_IMG_PIP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_PIP uint8_t
    pip_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE, 0xDF, 0xFF, 0xFD, 0x54, 0x93, 0xFF,
        0xFF, 0xFF, 0xF0, 0xAA, 0xAA, 0xAA, 0xED, 0xD5, 0x55, 0x55, 0x55, 0x5B, 0x6B, 0xFF, 0xF7,
        0x52, 0x49, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xED,
        0xBF, 0xBB, 0x7A, 0xAA, 0xA5, 0xFF, 0xFF, 0xFF, 0xF0, 0xAA, 0xAD, 0xB6, 0xF7, 0x6D, 0xAA,
        0xAB, 0x6A, 0xB6, 0xD7, 0xFF, 0xFD, 0xA8, 0x93, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF,
        0xFF, 0xF7, 0x7F, 0xFD, 0xDF, 0xDB, 0x6E, 0xFE, 0xEE, 0xD5, 0x25, 0xFF, 0xFF, 0xFF, 0xF0,
        0xAA, 0xB5, 0x56, 0xDD, 0xBD, 0xEA, 0xAF, 0x75, 0x6D, 0xBF, 0xFF, 0xFB, 0x52, 0x93, 0xFF,
        0xFF, 0xFF, 0xF0, 0xDF, 0xDF, 0xFF, 0xF7, 0xD7, 0x7F, 0xF5, 0xDF, 0xB6, 0xD7, 0xFF, 0x7D,
        0xA8, 0x49, 0xFF, 0xFF, 0xFF, 0xF0, 0xB5, 0x76, 0xDB, 0x7E, 0xFD, 0xD5, 0x5F, 0x75, 0x6B,
        0x6F, 0xFF, 0xF6, 0xAA, 0xA5, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xDB, 0xAF, 0x7F,
        0xEB, 0xDE, 0xDD, 0x5F, 0x7F, 0xFF, 0x52, 0x93, 0xFF, 0xFF, 0xFF, 0xF0, 0xAA, 0xAA, 0xB6,
        0xFF, 0xFB, 0xDA, 0xBD, 0x77, 0x6B, 0xBD, 0xF7, 0x75, 0xAA, 0x49, 0xFF, 0xFF, 0xFF, 0xF0,
        0xFF, 0xFF, 0xFF, 0xDA, 0xAE, 0xF7, 0xEF, 0xDB, 0xB6, 0xEF, 0xFF, 0xFE, 0xD5, 0x55, 0xFF,
        0xFF, 0xFF, 0xF0, 0xB6, 0xDB, 0xB7, 0x77, 0xFB, 0xBD, 0x75, 0x7D, 0x6D, 0x5F, 0xBF, 0xEB,
        0x54, 0x93, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x7E, 0xFF, 0xFE, 0xDE, 0xEF, 0xBF, 0xAF, 0xB7,
        0xB7, 0xED, 0xFE, 0xD5, 0x49, 0xFF, 0xFF, 0xFF, 0xF0, 0xAB, 0xDB, 0xDD, 0xAB, 0xB7, 0xB5,
        0xD5, 0xF5, 0x6A, 0xFE, 0xFF, 0xDB, 0x6A, 0x55, 0xFF, 0xFF, 0xFF, 0xF0, 0xFD, 0xFF, 0x7F,
        0x7E, 0xFA, 0xFF, 0x7E, 0xAE, 0xDD, 0xAB, 0xFF, 0xF6, 0xB5, 0x43, 0xFF, 0xFF, 0xFF, 0xF0,
        0xAF, 0x6D, 0xF5, 0xEB, 0xAF, 0xAB, 0xDB, 0xF7, 0x6B, 0x7F, 0xFF, 0x5D, 0xD5, 0x35, 0xFF,
        0xFF, 0xFF, 0xF0, 0xFB, 0xFF, 0xDF, 0x7E, 0xFB, 0x7E, 0xF6, 0xAD, 0xBD, 0xAF, 0xFF, 0xF7,
        0x6A, 0x93, 0xFF, 0xFF, 0xFF, 0xF0, 0xAE, 0xB6, 0xF7, 0xAB, 0xB7, 0xD7, 0x5D, 0xFB, 0x6B,
        0x7B, 0xFB, 0x5D, 0xB5, 0x49, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFD, 0xBD, 0xFE, 0xED, 0x7D,
        0xF7, 0x57, 0xBD, 0xDE, 0xEF, 0xF7, 0x55, 0x54, 0xFF, 0xFF, 0xFF, 0xF0, 0xB5, 0xD7, 0xEE,
        0xAB, 0xBF, 0xEF, 0x5D, 0xFD, 0x6B, 0x6B, 0xBD, 0x5D, 0xEA, 0xA5, 0xFF, 0xFF, 0xFF, 0xF0,
        0xFF, 0x7D, 0x75, 0xFE, 0xED, 0xBA, 0xF7, 0x57, 0xDE, 0xFF, 0xEF, 0xF6, 0xAA, 0x50, 0xFF,
        0xFF, 0xFF, 0xF0, 0xAD, 0xD7, 0xBF, 0x6B, 0xBF, 0x6F, 0xBD, 0xFD, 0x75, 0xAA, 0xBA, 0xBB,
        0xB5, 0x2A, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x7D, 0xD5, 0xFE, 0xEB, 0xFA, 0xEF, 0x57, 0xDF,
        0xDF, 0xEF, 0xDE, 0xD5, 0x44, 0xFF, 0xFF, 0xFF, 0xF0, 0xD5, 0xD6, 0xFF, 0x57, 0xBE, 0xDF,
        0xBB, 0xFD, 0x75, 0x75, 0x5A, 0xEB, 0x6A, 0xA9, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x7B, 0x55,
        0xFD, 0xEF, 0xEB, 0x6D, 0x57, 0xDF, 0xBF, 0xFF, 0x7D, 0xAA, 0x54, 0xFF, 0xFF, 0xFF, 0xF0,
        0xAA, 0xDF, 0xFE, 0xAE, 0xBB, 0x7D, 0xFF, 0xFE, 0xF6, 0xD5, 0x55, 0xAB, 0x55, 0x42, 0xFF,
        0xFF, 0xFF, 0xF0, 0xFF, 0xB5, 0x57, 0xF7, 0xEF, 0xD7, 0x55, 0x5B, 0xBB, 0xEE, 0xFE, 0xFD,
        0xDA, 0xA9, 0xFF, 0xFF, 0xFF, 0xF0, 0xAA, 0xEE, 0xFA, 0xBA, 0xBD, 0xBF, 0xFF, 0xFF, 0xDE,
        0xB5, 0xAB, 0xAB, 0x6A, 0x54, 0x7F, 0xFF, 0xFF, 0xF0, 0xB7, 0x5B, 0xAF, 0xDF, 0xEF, 0xF5,
        0x55, 0x76, 0xF7, 0x5E, 0xFD, 0xF6, 0xAA, 0x82, 0xFF, 0xFF, 0xFF, 0xF0, 0xDA, 0xF6, 0xF5,
        0x6A, 0xBB, 0x6F, 0xFF, 0xFF, 0x5B, 0xEB, 0x56, 0xAD, 0x55, 0x58, 0x7F, 0xFF, 0xFF, 0xF0,
        0x6F, 0x5D, 0xBF, 0xFF, 0xEF, 0xFD, 0xAD, 0xED, 0xFD, 0x5D, 0xDB, 0xB6, 0xD4, 0xA5, 0x7F,
        0xFF, 0xFF, 0xF0, 0xB5, 0xEF, 0x6A, 0xAA, 0xBD, 0xD7, 0xFB, 0xBF, 0xAE, 0xEA, 0xB6, 0xDA,
        0xAA, 0x48, 0xFF, 0xFF, 0xFF, 0xF0, 0xDD, 0x5A, 0xFF, 0xFF, 0xEF, 0x7D, 0x5F, 0xFB, 0x75,
        0xB7, 0x6D, 0x6B, 0x55, 0x22, 0x7F, 0xFF, 0xFF, 0xF0, 0x6B, 0xED, 0xAA, 0xAA, 0xBB, 0xF7,
        0xF7, 0xFF, 0xDE, 0xDA, 0xD6, 0xAD, 0x6A, 0xA8, 0xFF, 0xFF, 0xFF, 0xF0, 0xBD, 0x5B, 0xF7,
        0xFF, 0x6F, 0xDE, 0xDE, 0xDA, 0xEB, 0x6A, 0xB5, 0xD5, 0xAA, 0x84, 0x7F, 0xFF, 0xFF, 0xF0,
        0xD6, 0xEE, 0xAD, 0x55, 0xFA, 0xFB, 0xFB, 0xFF, 0x76, 0xDB, 0x56, 0xB6, 0xAA, 0x52, 0xFF,
        0xFF, 0xFF, 0xF0, 0x6B, 0x5B, 0x7F, 0xFE, 0xAF, 0xDF, 0x6F, 0x6B, 0xAD, 0x6A, 0xAA, 0xAA,
        0xB5, 0x48, 0xFF, 0xFF, 0xFF, 0xF0, 0xBD, 0xED, 0xD5, 0x55, 0xFB, 0x7D, 0xFF, 0xFE, 0xF7,
        0x55, 0x5A, 0xD5, 0x55, 0x22, 0xFF, 0xFF, 0xFF, 0xF0, 0xD6, 0xB7, 0x7E, 0xFE, 0xAF, 0xF7,
        0xFD, 0xB7, 0xAD, 0x55, 0x55, 0x56, 0xD4, 0x88, 0xFF, 0xFF, 0xFF, 0xF0, 0xB5, 0xBB, 0xAB,
        0xAB, 0xBA, 0xDF, 0x5F, 0xFD, 0xDA, 0xAA, 0xAA, 0xAA, 0xAA, 0x21, 0xFF, 0xFF, 0xFF, 0xF0,
        0xDB, 0x6D, 0x76, 0xFD, 0x6F, 0xFB, 0xF6, 0xAE, 0xB5, 0x54, 0xAA, 0xAA, 0xA4, 0x84, 0xFF,
        0xFF, 0xFF, 0xF0, 0x6D, 0xB7, 0xDF, 0xAF, 0xB5, 0x6E, 0xBF, 0xF7, 0xDA, 0xAA, 0xAA, 0xAD,
        0x52, 0x53, 0xFF, 0xFF, 0xFF, 0xF0, 0xB6, 0xDA, 0xB5, 0xF5, 0x5F, 0xDB, 0xEA, 0xDD, 0x6A,
        0xA5, 0x55, 0x6A, 0xA9, 0x01, 0xFF, 0xFF, 0xFF, 0xF0, 0xDB, 0x6F, 0x7E, 0xBF, 0xEA, 0xFE,
        0xBF, 0xF7, 0xAA, 0xAA, 0x55, 0xAD, 0xAA, 0x4B, 0xFF, 0xFF, 0xFF, 0xF0, 0x6D, 0xB5, 0xD5,
        0xD5, 0x5B, 0x57, 0xD5, 0x7A, 0xAA, 0xA9, 0x56, 0xB6, 0xA8, 0x81, 0xFF, 0xFF, 0xFF, 0xF0,
        0xB6, 0xDB, 0x7F, 0x7F, 0xAD, 0xFA, 0xBB, 0xAF, 0x54, 0x95, 0xBA, 0xDA, 0xA4, 0x2B, 0xFF,
        0xFF, 0xFF, 0xF0, 0xD5, 0x6D, 0xAA, 0xDA, 0xF6, 0xAF, 0x6D, 0x75, 0x52, 0xAA, 0xEF, 0x6A,
        0xAA, 0x83, 0xFF, 0xFF, 0xFF, 0xF0, 0x6E, 0xB6, 0xF7, 0xEF, 0xAB, 0xF5, 0xB6, 0xAD, 0x55,
        0x4B, 0x7B, 0xAD, 0x50, 0x24, 0xFF, 0xFF, 0xFF, 0xF0, 0xB5, 0xDB, 0x5A, 0xBA, 0xED, 0x5A,
        0xD5, 0xAA, 0x94, 0xAB, 0xDE, 0xF6, 0xA5, 0x13, 0xFF, 0xFF, 0xFF, 0xF0, 0xD6, 0xB7, 0xB7,
        0xD7, 0xB5, 0x6F, 0x5A, 0xAA, 0x52, 0xAA, 0xF7, 0xDA, 0xA8, 0x81, 0xFF, 0xFF, 0xFF, 0xF0,
        0x6B, 0x6D, 0x6D, 0x7D, 0xDB, 0x55, 0xAD, 0x55, 0x4A, 0x57, 0xBE, 0xF5, 0x52, 0x54, 0xFF,
        0xFF, 0xFF, 0xF0, 0xBD, 0xB6, 0xDE, 0xD6, 0xED, 0x76, 0xD6, 0xA9, 0x55, 0x55, 0xF7, 0xDD,
        0xA4, 0x02, 0x7F, 0xFF, 0xFF, 0xF0, 0xD5, 0x5B, 0x75, 0xBB, 0x7B, 0x9A, 0xB5, 0x55, 0x29,
        0x57, 0x7F, 0xF6, 0x91, 0x55, 0x5F, 0xFF, 0xFF, 0xF0, 0x56, 0xED, 0xAE, 0xDD, 0xAD, 0x6B,
        0x56, 0xAA, 0xA5, 0x55, 0xDE, 0xBA, 0xA4, 0x08, 0xBF, 0xFF, 0xFF, 0xF0, 0xEB, 0x56, 0xF5,
        0xB7, 0xF7, 0xAD, 0x6A, 0xAA, 0xAA, 0xAF, 0xF7, 0xED, 0x52, 0xA5, 0x1F, 0xFF, 0xFF, 0xF0,
        0x5A, 0xBB, 0x5E, 0xDA, 0xAD, 0x6A, 0xAB, 0x54, 0x92, 0xAA, 0xBD, 0xBA, 0x80, 0x42, 0x4F,
        0xFF, 0xFF, 0xF0, 0xAD, 0xD5, 0xD5, 0xB7, 0x7B, 0xB5, 0xAD, 0x52, 0xAA, 0xAB, 0xF7, 0xDD,
        0x55, 0x29, 0x2F, 0xFF, 0xFF, 0xF0, 0xB6, 0xAE, 0xBB, 0x6D, 0xAE, 0xD6, 0xAA, 0x95, 0x55,
        0x55, 0xBD, 0x6A, 0x00, 0x8A, 0x87, 0xFF, 0xFF, 0xF0, 0xDA, 0xDB, 0x6D, 0xB6, 0xF5, 0xBA,
        0xA9, 0x55, 0x55, 0x6D, 0xEE, 0xB5, 0x55, 0x21, 0x29, 0xFF, 0xFF, 0xF0, 0x55, 0x6D, 0xB6,
        0xDB, 0x5B, 0x6A, 0xAA, 0x92, 0xAB, 0x55, 0x75, 0x54, 0x80, 0x94, 0x85, 0xFF, 0xFF, 0xF0,
        0xB7, 0x55, 0x5B, 0x6D, 0xEE, 0xDB, 0x55, 0x55, 0x55, 0x55, 0x5E, 0xD2, 0x24, 0x4A, 0x52,
        0xFF, 0xFF, 0xF0, 0xAA, 0xDB, 0xEA, 0xB6, 0xB5, 0xAD, 0x52, 0x54, 0xAA, 0xAA, 0xEB, 0x48,
        0x8A, 0x91, 0x49, 0x7F, 0xFF, 0xF0, 0xB5, 0x6D, 0x37, 0xDB, 0xAE, 0xF5, 0xAA, 0xAA, 0xAA,
        0xAA, 0xAA, 0xA4, 0x22, 0x44, 0x24, 0xBF, 0xFF, 0xF0, 0xAE, 0xAA, 0xDA, 0x6D, 0x75, 0x56,
        0xD5, 0x55, 0x55, 0x55, 0x54, 0x02, 0xBF, 0x92, 0x92, 0x5F, 0xFF, 0xF0, 0xB5, 0xB7, 0x6B,
        0xB7, 0xAF, 0xB5, 0x55, 0x52, 0xA9, 0x2A, 0x95, 0x50, 0xBF, 0xD0, 0x49, 0x3F, 0xFF, 0xF0,
        0xAA, 0xD9, 0x55, 0x5A, 0xD9, 0x5B, 0x55, 0x55, 0x25, 0x54, 0xA2, 0x0A, 0xFF, 0xF5, 0x24,
        0x1F, 0xFF, 0xF0, 0x56, 0xAD, 0xBB, 0x6D, 0x6E, 0xD5, 0xAA, 0xAA, 0x94, 0x92, 0x54, 0xA5,
        0x7F, 0xFD, 0x49, 0x7F, 0xFF, 0xF0, 0xBA, 0xAA, 0xCD, 0xB6, 0xB5, 0x6D, 0x55, 0x52, 0x52,
        0x49, 0x00, 0x17, 0xFF, 0xFE, 0xA5, 0xFF, 0xFF, 0xF0
};

const lv_img_dsc_t pip = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = pip_map,
};