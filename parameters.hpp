#pragma once

#include "structure.hpp"
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <cstdlib>

typedef uint8_t u8;
typedef const uint8_t cu8;

#define STATE_SIZE  8
#define INV_POWER   6
#define PARAM_SIZE  64

cu8 pA256[PARAM_SIZE] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x97,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 pA512[PARAM_SIZE] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xC7,

};

cu8 aA256[PARAM_SIZE] = {
    0xC2, 0x17, 0x3F, 0x15, 0x13, 0x98, 0x16, 0x73,
    0xAF, 0x48, 0x92, 0xC2, 0x30, 0x35, 0xA2, 0x7C,
    0xE2, 0x5E, 0x20, 0x13, 0xBF, 0x95, 0xAA, 0x33,
    0xB2, 0x2C, 0x65, 0x6F, 0x27, 0x7E, 0x73, 0x35,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 aA512[PARAM_SIZE] = {
    0xDC, 0x92, 0x03, 0xE5, 0x14, 0xA7, 0x21, 0x87,
    0x54, 0x85, 0xA5, 0x29, 0xD2, 0xC7, 0x22, 0xFB,
    0x18, 0x7B, 0xC8, 0x98, 0x0E, 0xB8, 0x66, 0x64,
    0x4D, 0xE4, 0x1C, 0x68, 0xE1, 0x43, 0x06, 0x45,
    0x46, 0xE8, 0x61, 0xC0, 0xE2, 0xC9, 0xED, 0xD9,
    0x2A, 0xDE, 0x71, 0xF4, 0x6F, 0xCF, 0x50, 0xFF,
    0x2A, 0xD9, 0x7F, 0x95, 0x1F, 0xDA, 0x9F, 0x2A,
    0x2E, 0xB6, 0x54, 0x6F, 0x39, 0x68, 0x9B, 0xD3
};

cu8 bA256[PARAM_SIZE] = {
    0x29, 0x5F, 0x9B, 0xAE, 0x74, 0x28, 0xED, 0x9C,
    0xCC, 0x20, 0xE7, 0xC3, 0x59, 0xA9, 0xD4, 0x1A,
    0x22, 0xFC, 0xCD, 0x91, 0x08, 0xE1, 0x7B, 0xF7,
    0xBA, 0x93, 0x37, 0xA6, 0xF8, 0xAE, 0x95, 0x13,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 bA512[PARAM_SIZE] = {
    0xB4, 0xC4, 0xEE, 0x28, 0xCE, 0xBC, 0x6C, 0x2C,
    0x8A, 0xC1, 0x29, 0x52, 0xCF, 0x37, 0xF1, 0x6A,
    0xC7, 0xEF, 0xB6, 0xA9, 0xF6, 0x9F, 0x4B, 0x57,
    0xFF, 0xDA, 0x2E, 0x4F, 0x0D, 0xE5, 0xAD, 0xE0,
    0x38, 0xCB, 0xC2, 0xFF, 0xF7, 0x19, 0xD2, 0xC1,
    0x8D, 0xE0, 0x28, 0x4B, 0x8B, 0xFE, 0xF3, 0xB5,
    0x2B, 0x8C, 0xC7, 0xA5, 0xF5, 0xBF, 0x0A, 0x3C,
    0x8D, 0x23, 0x19, 0xA5, 0x31, 0x25, 0x57, 0xE1
};

cu8 eA256[PARAM_SIZE] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 eA512[PARAM_SIZE] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
};

cu8 dA256[PARAM_SIZE] = {
    0x06, 0x05, 0xF6, 0xB7, 0xC1, 0x83, 0xFA, 0x81,
    0x57, 0x8B, 0xC3, 0x9C, 0xFA, 0xD5, 0x18, 0x13,
    0x2B, 0x9D, 0xF6, 0x28, 0x97, 0x00, 0x9A, 0xF7,
    0xE5, 0x22, 0xC3, 0x2D, 0x6D, 0xC7, 0xBF, 0xFB,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 dA512[PARAM_SIZE] = {
    0x9E, 0x4F, 0x5D, 0x8C, 0x01, 0x7D, 0x8D, 0x9F,
    0x13, 0xA5, 0xCF, 0x3C, 0xDF, 0x5B, 0xFE, 0x4D,
    0xAB, 0x40, 0x2D, 0x54, 0x19, 0x8E, 0x31, 0xEB,
    0xDE, 0x28, 0xA0, 0x62, 0x10, 0x50, 0x43, 0x9C,
    0xA6, 0xB3, 0x9E, 0x0A, 0x51, 0x5C, 0x06, 0xB3,
    0x04, 0xE2, 0xCE, 0x43, 0xE7, 0x9E, 0x36, 0x9E,
    0x91, 0xA0, 0xCF, 0xC2, 0xBC, 0x2A, 0x22, 0xB4,
    0xCA, 0x30, 0x2D, 0xBB, 0x33, 0xEE, 0x75, 0x50
};

cu8 mA256[PARAM_SIZE+1] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3F, 0x63, 0x37, 0x7F, 0x21, 0xED, 0x98,
    0xD7, 0x04, 0x56, 0xBD, 0x55, 0xB0, 0xD8, 0x31,
    0x9C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 mA512[PARAM_SIZE] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x26, 0x33, 0x6E, 0x91, 0x94, 0x1A, 0xAC, 0x01,
    0x30, 0xCE, 0xA7, 0xFD, 0x45, 0x1D, 0x40, 0xB3,
    0x23, 0xB6, 0xA7, 0x9E, 0x9D, 0xA6, 0x84, 0x9A,
    0x51, 0x88, 0xF3, 0xBD, 0x1F, 0xC0, 0x8F, 0xB4
};

cu8 qA256[PARAM_SIZE] = {
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0xD8, 0xCD, 0xDF, 0xC8, 0x7B, 0x66, 0x35,
    0xC1, 0x15, 0xAF, 0x55, 0x6C, 0x36, 0x0C, 0x67,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 qA512[PARAM_SIZE] = {
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xC9, 0x8C, 0xDB, 0xA4, 0x65, 0x06, 0xAB, 0x00,
    0x4C, 0x33, 0xA9, 0xFF, 0x51, 0x47, 0x50, 0x2C,
    0xC8, 0xED, 0xA9, 0xE7, 0xA7, 0x69, 0xA1, 0x26,
    0x94, 0x62, 0x3C, 0xEF, 0x47, 0xF0, 0x23, 0xED
};

cu8 xA256[PARAM_SIZE] = {
    0x91, 0xE3, 0x84, 0x43, 0xA5, 0xE8, 0x2C, 0x0D,
    0x88, 0x09, 0x23, 0x42, 0x57, 0x12, 0xB2, 0xBB,
    0x65, 0x8B, 0x91, 0x96, 0x93, 0x2E, 0x02, 0xC7,
    0x8B, 0x25, 0x82, 0xFE, 0x74, 0x2D, 0xAA, 0x28,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 xA512[PARAM_SIZE] = {
    0xE2, 0xE3, 0x1E, 0xDF, 0xC2, 0x3D, 0xE7, 0xBD,
    0xEB, 0xE2, 0x41, 0xCE, 0x59, 0x3E, 0xF5, 0xDE,
    0x22, 0x95, 0xB7, 0xA9, 0xCB, 0xAE, 0xF0, 0x21,
    0xD3, 0x85, 0xF7, 0x07, 0x4C, 0xEA, 0x04, 0x3A,
    0xA2, 0x72, 0x72, 0xA7, 0xAE, 0x60, 0x2B, 0xF2,
    0xA7, 0xB9, 0x03, 0x3D, 0xB9, 0xED, 0x36, 0x10,
    0xC6, 0xFB, 0x85, 0x48, 0x7E, 0xAE, 0x97, 0xAA,
    0xC5, 0xBC, 0x79, 0x28, 0xC1, 0x95, 0x01, 0x48
};

cu8 yA256[PARAM_SIZE] = {
    0x32, 0x87, 0x94, 0x23, 0xAB, 0x1A, 0x03, 0x75,
    0x89, 0x57, 0x86, 0xC4, 0xBB, 0x46, 0xE9, 0x56,
    0x5F, 0xDE, 0x0B, 0x53, 0x44, 0x76, 0x67, 0x40,
    0xAF, 0x26, 0x8A, 0xDB, 0x32, 0x32, 0x2E, 0x5C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 yA512[PARAM_SIZE] = {
    0xF5, 0xCE, 0x40, 0xD9, 0x5B, 0x5E, 0xB8, 0x99,
    0xAB, 0xBC, 0xCF, 0xF5, 0x91, 0x1C, 0xB8, 0x57,
    0x79, 0x39, 0x80, 0x4D, 0x65, 0x27, 0x37, 0x8B,
    0x8C, 0x10, 0x8C, 0x3D, 0x20, 0x90, 0xFF, 0x9B,
    0xE1, 0x8E, 0x2D, 0x33, 0xE3, 0x02, 0x1E, 0xD2,
    0xEF, 0x32, 0xD8, 0x58, 0x22, 0x42, 0x3B, 0x63,
    0x04, 0xF7, 0x26, 0xAA, 0x85, 0x4B, 0xAE, 0x07,
    0xD0, 0x39, 0x6E, 0x9A, 0x9A, 0xDD, 0xC4, 0x0F
};

cu8 uA256[PARAM_SIZE] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 uA512[PARAM_SIZE] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12
};

cu8 vA256[PARAM_SIZE] = {
    0x60, 0xCA, 0x1E, 0x32, 0xAA, 0x47, 0x5B, 0x34,
    0x84, 0x88, 0xC3, 0x8F, 0xAB, 0x07, 0x64, 0x9C,
    0xE7, 0xEF, 0x8D, 0xBE, 0x87, 0xF2, 0x2E, 0x81,
    0xF9, 0x2B, 0x25, 0x92, 0xDB, 0xA3, 0x00, 0xE7,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

cu8 vA512[PARAM_SIZE] = {
    0x46, 0x9A, 0xF7, 0x9D, 0x1F, 0xB1, 0xF5, 0xE1,
    0x6B, 0x99, 0x59, 0x2B, 0x77, 0xA0, 0x1E, 0x2A,
    0x0F, 0xDF, 0xB0, 0xD0, 0x17, 0x94, 0x36, 0x8D,
    0x9A, 0x56, 0x11, 0x7F, 0x7B, 0x38, 0x66, 0x95,
    0x22, 0xDD, 0x4B, 0x65, 0x0C, 0xF7, 0x89, 0xEE,
    0xBF, 0x06, 0x8C, 0x5D, 0x13, 0x97, 0x32, 0xF0,
    0x90, 0x56, 0x22, 0xC0, 0x4B, 0x2B, 0xAA, 0xE7,
    0x60, 0x03, 0x03, 0xEE, 0x73, 0x00, 0x1A, 0x3D
};
