#include <Arduino.h>
#include <stdarg.h>
#include "CFA10097_defines.h"
#include "CFAM240400xx_030T_Splash_ARGB2.h"

#if 1==LOGO_DEMO
#if 1==LOGO_PNG_0_ARGB2_1

const uint8_t CFAM240400xx_030T_ARGB2_LOGO[LOGO_SIZE_ARGB2] PROGMEM =
  {
  0x78,0x9C,0xED,0x9D,0x6B,0x92,0xAB,0x38,0x0C,0x85,0x97,0xC6,0xD6,0xA9,0xCA,0x86,
  0x52,0x95,0x0D,0xCC,0xDC,0x74,0x02,0x7A,0x1C,0xD9,0xB2,0x31,0x58,0x26,0x3E,0x3F,
  0xA6,0xC1,0x08,0xFB,0xF8,0x43,0x7E,0x40,0xDF,0xA9,0x5E,0x96,0xA9,0xA9,0xA9,0xA9,
  0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,
  0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0x41,0xB5,0xF6,0x36,0x70,0x3F,0xAD,
  0x6F,0xF5,0x76,0x31,0x88,0x9C,0x9C,0x26,0x53,0xBF,0xBC,0x9C,0x14,0xD3,0x75,0x52,
  0x36,0xE4,0xA5,0x62,0x21,0x9D,0x54,0x95,0xDC,0x4C,0x24,0xBE,0x75,0x9D,0x50,0xB1,
  0xFC,0x48,0x12,0x4C,0x4F,0xF2,0x36,0xAA,0xDC,0x4C,0x0C,0xA4,0xFE,0x3C,0xFF,0x1D,
  0x69,0xA6,0x46,0xFA,0x61,0xA6,0xEF,0xA3,0xF3,0x5D,0x8E,0x25,0x05,0x90,0x4E,0x93,
  0x7A,0x45,0xB2,0x4E,0xA7,0x76,0x29,0x7C,0xAB,0xC1,0x94,0x9E,0xCF,0x89,0x34,0x21,
  0x8D,0x6F,0x15,0x12,0xA1,0x2A,0xA8,0x83,0xE9,0xE0,0x52,0xF4,0xF0,0x21,0xBC,0x32,
  0xB1,0x62,0x29,0x2E,0x6A,0x16,0x58,0xC0,0x95,0x89,0x94,0x0A,0x22,0xB4,0xB8,0x80,
  0x48,0x55,0xD1,0xCF,0x33,0x85,0x20,0x4C,0x2E,0x88,0xBE,0xBC,0xF8,0xEB,0x48,0x8D,
  0x11,0x8B,0x99,0x26,0x27,0x05,0xB4,0x91,0xFA,0xC9,0xB4,0x4D,0x21,0xC5,0x1F,0x46,
  0xE8,0x95,0xCC,0x5D,0xB8,0xEE,0xBB,0x6B,0xEF,0x2F,0x42,0x28,0xC3,0x32,0x4C,0x51,
  0x0E,0xFF,0x1E,0x54,0xB3,0xAF,0x69,0x3A,0xC6,0x74,0x9A,0xB9,0xE9,0xDE,0x50,0x8D,
  0xE9,0x90,0x46,0xE8,0x6C,0xA4,0xBB,0x50,0x14,0x65,0xA6,0xA9,0xBE,0x74,0x43,0x59,
  0x4B,0x0C,0x0B,0x31,0xD0,0x65,0x87,0x3E,0x3F,0xB3,0x66,0xDE,0x9B,0xC9,0xD5,0x51,
  0xCD,0xC3,0xBC,0x80,0x99,0xA6,0x67,0x89,0x9B,0x29,0x3D,0xE7,0xF1,0x0B,0xE0,0x16,
  0x33,0x67,0xD3,0x13,0x41,0xC9,0x47,0xEE,0xF1,0x94,0x66,0x6A,0xA7,0x23,0xBB,0x01,
  0x04,0xA5,0x5F,0x06,0xEE,0x9D,0xA8,0xB5,0x4C,0x57,0x1A,0x6E,0x06,0xE1,0x33,0x15,
  0x7C,0x33,0xF1,0xAE,0x59,0x50,0x11,0x20,0x19,0x54,0x94,0xA6,0xBF,0x33,0xF6,0x17,
  0x0D,0x4C,0x96,0xA2,0x18,0xC0,0x54,0x24,0xE6,0x4F,0xA5,0x69,0x22,0x5F,0x70,0x6E,
  0x8A,0x93,0x34,0x53,0x5C,0x17,0x2C,0x18,0xFE,0x43,0x8B,0xCC,0x20,0x33,0x0A,0x33,
  0x35,0xD3,0x2C,0xF7,0x81,0x4A,0x9C,0x2B,0xC8,0xE5,0x3D,0x09,0x23,0x35,0x2A,0xCD,
  0x28,0xE7,0x37,0xD4,0xCC,0xBD,0xD6,0xF7,0x02,0x75,0xC3,0xB0,0x50,0xB9,0x7D,0xDD,
  0x3B,0x16,0x27,0x6E,0x2B,0x6B,0x28,0xDD,0x66,0x3A,0x6F,0x07,0x53,0x72,0x14,0xF3,
  0xD9,0xB1,0x59,0x2F,0x69,0x75,0x26,0xD2,0x91,0xC1,0xEA,0x0E,0x8A,0x2B,0x27,0xF4,
  0x4F,0xD6,0x6C,0x22,0x1D,0x0E,0xAB,0x4E,0x14,0x38,0x28,0xCF,0xE8,0x5B,0x01,0xD2,
  0x91,0xA0,0xCA,0xD1,0xB7,0x1F,0xD2,0x88,0xB3,0x3A,0x96,0x45,0x2A,0xAD,0x0D,0xA1,
  0xDD,0xEC,0xEE,0x3C,0xDD,0xC3,0xF6,0xED,0x9B,0x48,0xF9,0xF9,0x09,0xAD,0x9F,0x22,
  0x6A,0x56,0x40,0x15,0x61,0xE7,0x5A,0xD0,0xEF,0xA8,0x00,0xF2,0x69,0x16,0xDA,0x6A,
  0x85,0x50,0xFB,0xF6,0xC0,0xCC,0xDB,0x6E,0x8E,0x0A,0xB4,0xF2,0xAD,0xFE,0xEE,0xBD,
  0x6B,0x0F,0xC0,0x44,0x33,0x0E,0xD3,0x4F,0x46,0xF2,0xA2,0x23,0x4C,0x5F,0xFF,0x4B,
  0x15,0x88,0x22,0x87,0xAB,0xA1,0x91,0xAE,0xEA,0x9F,0x83,0x90,0x15,0xA3,0xBC,0x0B,
  0x0A,0xE0,0xEB,0x55,0x0E,0xD5,0x46,0x3A,0x00,0x53,0xCC,0xAE,0x25,0xD3,0xD7,0xAB,
  0x1C,0xAA,0x1B,0x69,0x48,0xC2,0x06,0x3A,0x1F,0x53,0x84,0x4A,0x96,0x7D,0x4F,0x8B,
  0xA0,0x3A,0x90,0xD2,0x5F,0x27,0xB8,0xEB,0xBD,0x48,0x86,0x2D,0x07,0x53,0x9C,0x7F,
  0x88,0x29,0xFD,0xC9,0x63,0x93,0xB6,0x80,0x1D,0xED,0x2F,0x22,0x54,0xCB,0x55,0xD6,
  0xEE,0x3E,0xA6,0xC1,0x48,0xE7,0x05,0xF4,0xA7,0x8C,0xB5,0x7D,0xA5,0xCC,0x84,0x46,
  0x9A,0x85,0x6A,0xDD,0xF6,0x01,0x92,0x63,0xFA,0xB2,0x99,0xFA,0xE7,0xD8,0xC4,0xF4,
  0x1A,0x02,0xA9,0x9E,0xE6,0x2D,0x63,0x79,0xA6,0xDF,0x9F,0x0C,0xE1,0xA2,0x98,0xF2,
  0x03,0x7A,0xC5,0xC7,0x14,0xB2,0x0B,0x43,0x14,0x1A,0x39,0xC6,0x54,0x21,0xFC,0xFC,
  0x27,0x19,0x56,0xB4,0xC1,0xB2,0x3D,0x87,0x42,0xEA,0xDA,0x4B,0xA3,0xE2,0x1D,0x02,
  0x84,0xB5,0x2D,0xF1,0x4B,0x32,0xAC,0x21,0xD2,0xCE,0x50,0xCD,0x69,0xDD,0xCD,0x94,
  0x62,0xD8,0x8E,0x78,0x99,0xDC,0x36,0x99,0xE9,0xEC,0x65,0x9A,0x99,0x4B,0xFB,0x42,
  0xB5,0x7D,0x18,0xDE,0x64,0x29,0xC6,0xA0,0xD3,0x34,0xCF,0x74,0x5F,0xDE,0x44,0x45,
  0x90,0xB1,0x8D,0xB4,0xFB,0xAF,0x54,0x13,0x8F,0xD6,0xC3,0xD4,0xCA,0x2C,0x9D,0xA6,
  0x6C,0xF5,0x01,0x4C,0xBF,0x57,0xDD,0x99,0x6B,0x20,0xFD,0x3B,0x49,0xF6,0xF9,0x64,
  0xA5,0x8C,0x40,0xD2,0xAC,0xD0,0xEC,0xB1,0x4C,0xBF,0x97,0x80,0xA3,0x99,0xA6,0x91,
  0xE6,0x66,0x83,0x10,0x43,0x9E,0x7B,0x49,0x5E,0xB5,0x6F,0xB0,0xFB,0xEB,0x65,0xAA,
  0x90,0x02,0xA6,0x8E,0x17,0xD8,0x48,0x48,0x33,0x1B,0x23,0x73,0x1D,0x78,0x1F,0x27,
  0x32,0xC8,0x48,0xB6,0x17,0x43,0xC8,0x02,0xB7,0x6B,0xEA,0x69,0x7C,0x0E,0xF2,0xBD,
  0x40,0x93,0x57,0xEA,0xAE,0x93,0x94,0x7B,0xB6,0xCA,0x2A,0x3B,0x67,0x48,0xD5,0x77,
  0x3C,0x75,0x02,0x0A,0x5F,0x82,0x29,0x7F,0x4A,0xEC,0x6A,0xB6,0x17,0x78,0x96,0x4A,
  0xDC,0x76,0x92,0xB2,0xE3,0x05,0x26,0xEA,0x76,0x42,0x00,0xB0,0x5E,0x93,0x31,0xBE,
  0xA0,0xD2,0x45,0xCF,0x94,0x60,0x7E,0xE0,0xEB,0x57,0xD6,0xA4,0x73,0x89,0x3D,0x5D,
  0x46,0xAB,0x7B,0x21,0x60,0x4A,0x4E,0xF4,0x58,0x5E,0xE8,0x99,0x9C,0x19,0x54,0x8C,
  0x08,0x00,0xF3,0x83,0xF1,0x02,0x0B,0x7A,0x51,0xFC,0xC6,0x77,0x96,0x70,0xA3,0xB4,
  0x30,0xED,0x8A,0xC0,0x13,0x63,0x16,0xCD,0xB6,0xFA,0x14,0x7F,0x93,0x82,0xDB,0xAC,
  0x5C,0x2F,0x90,0xCB,0x38,0x4C,0x57,0xC1,0x34,0x71,0x3F,0x9A,0x05,0xF1,0x38,0x76,
  0x8A,0xDC,0x84,0x12,0x36,0xD5,0x8D,0x28,0x89,0x6A,0x4F,0x43,0x3B,0xD4,0x64,0x05,
  0x10,0x5D,0x35,0x51,0xF8,0xAA,0xE0,0xDF,0x4A,0x59,0x17,0x4A,0x4D,0x1C,0x93,0x9D,
  0xA7,0x4E,0x23,0x10,0x5D,0x25,0xCF,0xEF,0xAD,0xF2,0x90,0x57,0x06,0xEB,0x4E,0x8F,
  0xFE,0x6B,0xA1,0x1E,0x5F,0x2F,0x11,0xBC,0x5A,0xA0,0xF0,0x2B,0x81,0xF1,0xFE,0x20,
  0xEF,0xB4,0x0C,0x5F,0x0F,0x15,0xB7,0x98,0xB0,0x01,0xF9,0xA9,0x85,0xE6,0x88,0xA5,
  0x64,0x9A,0x66,0x66,0x95,0xD5,0xD4,0x11,0x47,0x85,0xC2,0x2D,0xDA,0x2E,0x8C,0x95,
  0xFA,0x14,0x6F,0x7A,0xF9,0xC7,0x2F,0x5B,0x9B,0x6C,0xA2,0x01,0x12,0xD5,0x74,0x61,
  0x4E,0x9E,0x67,0x58,0x23,0xF8,0xD8,0x7B,0x01,0xB9,0x26,0x14,0x04,0x2A,0x6C,0xD1,
  0x32,0x81,0xC7,0xDD,0x59,0x50,0xF5,0x38,0xDF,0x8F,0x8D,0x26,0x63,0x40,0x85,0x2D,
  0x66,0xF2,0x54,0x74,0xE8,0xD4,0x44,0xC5,0x48,0xCD,0x09,0x27,0x02,0x52,0x98,0xA8,
  0xB6,0x09,0x92,0x3A,0x72,0x8B,0x7F,0x86,0xB7,0x24,0x52,0xDC,0xE2,0xF5,0x00,0x6D,
  0x17,0xEA,0xDB,0x13,0x8C,0xFD,0xEB,0x8A,0xA2,0x7A,0xDA,0x32,0xB5,0x18,0xAD,0x24,
  0x1A,0x0C,0x01,0x55,0x8D,0x8E,0x94,0x2B,0xBA,0x6E,0xB8,0xBA,0xD8,0x4E,0xAE,0x34,
  0x8D,0xF2,0x4F,0xA5,0xF8,0x9C,0x93,0xF6,0xC4,0x16,0x09,0xD2,0xC9,0x0B,0x6C,0xFA,
  0x90,0x06,0x49,0x54,0x38,0xB1,0x1B,0xA1,0x8A,0xE9,0x05,0x09,0x8A,0x9B,0xB6,0x03,
  0xA3,0x42,0x35,0x43,0xC5,0xE0,0xBF,0x10,0xAA,0x33,0x4D,0x97,0xA8,0x50,0xF9,0x55,
  0xFD,0xAD,0xFE,0xC5,0x7E,0x5C,0x23,0x96,0xA6,0xE9,0xD0,0x18,0x50,0x13,0xFF,0x72,
  0x02,0x7F,0x9D,0xFF,0x76,0xF0,0x3A,0x87,0x74,0xCF,0xB1,0x95,0x19,0xB1,0xF1,0xA0,
  0xF2,0x0B,0x68,0x33,0x7A,0x5D,0x76,0xAA,0x86,0xF9,0x26,0xCE,0x88,0x8D,0x81,0xF4,
  0x9F,0xA0,0x13,0x49,0xB0,0x17,0x52,0xF4,0x66,0x9C,0xDA,0x51,0x5D,0xE3,0xA9,0x4E,
  0x92,0x60,0x37,0xA4,0x60,0x88,0xF4,0xB3,0x72,0x48,0xDA,0x76,0xA0,0x8E,0x04,0xB2,
  0x52,0x20,0xB0,0xAD,0x0F,0xD4,0x91,0x40,0x56,0xFC,0xA2,0xAF,0x4A,0xE0,0x53,0x46,
  0x6F,0x85,0x31,0x52,0x20,0x86,0xF4,0xDA,0xB7,0x7B,0x8F,0xBE,0x46,0x62,0xB8,0x71,
  0x0A,0x22,0x2D,0x66,0xFA,0x7C,0xB6,0x08,0x51,0xBA,0xFE,0x4D,0xAE,0x85,0x76,0xC3,
  0x2F,0xC1,0xB4,0xA4,0x96,0xE7,0x33,0x4B,0xCC,0x11,0xA2,0x6C,0x31,0x95,0xF8,0xE9,
  0xAB,0xCD,0xB0,0xDC,0xC2,0x94,0x54,0xF2,0x7C,0x66,0x89,0x39,0x42,0x90,0xAF,0x31,
  0xA1,0x7E,0x33,0xB5,0xDE,0xF5,0xF3,0xAB,0x43,0x21,0xD8,0xD6,0x68,0x30,0xBF,0x3A,
  0xE8,0xFD,0xF9,0xCC,0x12,0x73,0x84,0x68,0x57,0x9B,0xB7,0x3A,0x5B,0x9D,0xD5,0x0A,
  0xA9,0x85,0xCC,0x11,0x92,0xB2,0x56,0xE7,0xAB,0xB7,0x0E,0x40,0x7D,0x3E,0xB3,0xC4,
  0x1C,0x21,0x29,0x63,0x35,0xAE,0x42,0xA8,0x12,0xAA,0xC4,0x05,0x88,0x39,0x42,0xD2,
  0xB6,0xD8,0x79,0xB1,0xC3,0x9E,0xAA,0x82,0x4A,0x31,0x19,0xC4,0x1C,0x21,0x19,0x57,
  0xEC,0xBC,0xD0,0x60,0x67,0x55,0x8C,0x7F,0xCE,0x08,0xE6,0xA1,0x23,0x24,0x67,0x8A,
  0x9F,0x97,0xF8,0xEB,0xAF,0x62,0xA8,0x12,0x10,0x20,0xE6,0x08,0xC9,0x99,0x12,0x16,
  0xFD,0xF6,0x62,0xA8,0x0C,0x2A,0xC0,0x23,0x4B,0x12,0x21,0x6E,0xA8,0xD2,0xA0,0xD7,
  0x5E,0x1F,0x69,0x82,0x05,0x9E,0x71,0xC6,0x39,0x92,0xB2,0x38,0x55,0xAB,0xEC,0x75,
  0x12,0xCA,0xCA,0x72,0xA4,0xA0,0xDC,0x11,0x52,0x07,0x35,0x3C,0xD3,0x36,0x1B,0x7D,
  0x70,0xC5,0x11,0x52,0x04,0x75,0x73,0xF9,0xAB,0x48,0x7D,0x21,0xE5,0x50,0x47,0x78,
  0xF5,0x97,0x06,0xAB,0xD6,0x7B,0x1B,0x49,0x2E,0xA4,0x28,0x55,0x47,0xF9,0x40,0xA5,
  0x90,0xFA,0x8D,0x36,0x40,0x7A,0x10,0xAA,0xDB,0xEA,0xB5,0x52,0x48,0x2B,0x16,0xFC,
  0x23,0x9F,0xA1,0x1C,0x21,0xDA,0x71,0x6C,0xA8,0xFA,0xFD,0xC4,0x6B,0xF4,0x99,0xA7,
  0xE1,0x08,0x71,0xC5,0x98,0x96,0x63,0x42,0xAD,0xDD,0x99,0x3E,0x9F,0x59,0x18,0x8E,
  0x10,0x77,0x94,0x30,0x18,0x12,0xE5,0xA6,0x4A,0xA6,0xCF,0x3C,0x0A,0x47,0x48,0x41,
  0x58,0xA9,0xC1,0xAE,0xAA,0x62,0xFA,0xCC,0x93,0x70,0x84,0x14,0xC5,0x51,0x7F,0x03,
  0x30,0x2D,0x9E,0x50,0x25,0x07,0x00,0xC2,0x11,0x52,0x18,0x58,0xE0,0xAF,0xB7,0xF4,
  0xFE,0xB4,0x1C,0x69,0xEA,0x0D,0xA9,0x98,0xA9,0x03,0x6A,0xCE,0x60,0x77,0xF1,0x4D,
  0x49,0x55,0x9A,0x5E,0xCC,0x34,0xE7,0x2F,0x80,0xE8,0x56,0xAF,0x6A,0x36,0xBD,0x96,
  0xE9,0x18,0x9F,0xF8,0x4B,0x5F,0x4E,0xFA,0x30,0x7D,0xFC,0x09,0x96,0x8B,0xA8,0x6C,
  0x0F,0x2E,0x50,0xE1,0xFB,0x5E,0x17,0xA6,0x8F,0x4D,0xE0,0x82,0x0A,0xCA,0x77,0xE2,
  0x7C,0x15,0xBD,0xED,0x75,0x60,0xFA,0xA0,0xD2,0x57,0x74,0x94,0xA3,0x1B,0xE7,0xAB,
  0xE0,0xFD,0x39,0x12,0x53,0x5A,0x62,0x83,0xBF,0x85,0xFC,0x4C,0x5D,0xDA,0x29,0x09,
  0x5E,0x0F,0xC5,0x54,0xC7,0xDC,0x45,0x27,0x30,0xD5,0x87,0x0B,0x60,0x0A,0x62,0xEE,
  0xA2,0x8B,0x98,0xB2,0x81,0x6E,0x82,0xBF,0x89,0x1A,0x33,0x25,0x92,0xCB,0x3C,0xCC,
  0xCE,0x8B,0x99,0x9A,0x93,0x0D,0x9B,0xDA,0xC9,0xCC,0x54,0xD5,0xCA,0x65,0x4C,0xF1,
  0x88,0xBF,0x94,0xA9,0xBD,0x2C,0xF2,0x0B,0x9C,0xA9,0x26,0x94,0xD0,0xFB,0x7E,0x77,
  0xB1,0xB3,0x3E,0x66,0x93,0x1F,0xF7,0x66,0x6A,0xEF,0x35,0xC4,0x85,0xA8,0x4C,0x53,
  0x63,0x29,0x1A,0xD3,0x87,0xB8,0x12,0x94,0x29,0x73,0xCE,0xAD,0xF6,0x62,0xFA,0x20,
  0xA8,0xF4,0xDB,0x08,0x37,0xB3,0x19,0x5D,0xE2,0x30,0x95,0x53,0x3E,0xB3,0xDE,0x91,
  0x29,0x6E,0x73,0x08,0xA6,0x12,0x69,0x08,0xA6,0xFA,0xD9,0x2A,0x0F,0x3B,0xDC,0x65,
  0xFF,0x11,0x83,0x29,0x9F,0xB3,0x1E,0x42,0xDD,0xF7,0xA7,0x59,0xA6,0x7B,0xDA,0xFE,
  0xFB,0xD1,0x8C,0xE9,0x51,0xCF,0xFA,0x0D,0x2A,0x0C,0x53,0x73,0xE8,0x93,0x3C,0xFD,
  0x9C,0xBE,0xFF,0x1B,0x81,0xA9,0x5C,0x03,0x42,0x31,0x7D,0x48,0x77,0x0B,0x62,0xCA,
  0x14,0x80,0xA9,0x32,0xAD,0x99,0x76,0x7C,0xDF,0x07,0x48,0x07,0x61,0x9A,0xBB,0x42,
  0xD9,0x76,0x60,0x9A,0x1D,0xFB,0x4C,0xFD,0x99,0xAA,0x9C,0xB4,0xBC,0xE3,0x98,0x2B,
  0x84,0x06,0x12,0xBE,0xF2,0x56,0x33,0xA6,0x45,0x15,0xD1,0x1B,0x5D,0x4C,0x13,0xAF,
  0x89,0x57,0x48,0x34,0x1B,0x9D,0xA9,0x9E,0x3B,0x71,0x57,0x7A,0x22,0xBD,0x2B,0xD3,
  0x0E,0x73,0xA9,0x89,0x2E,0x3A,0xD3,0xC0,0xB2,0xD1,0x7D,0xCF,0xF1,0x53,0x9E,0x4C,
  0x6D,0x3D,0x28,0xBA,0xC9,0xB4,0x8D,0xD4,0xA4,0xC4,0x20,0x9B,0xF3,0x7B,0x33,0xA6,
  0xB7,0x94,0xC5,0x54,0x7E,0x93,0xE6,0x9A,0x4C,0x93,0x12,0xE4,0xF8,0x0C,0x6B,0xAD,
  0x99,0x93,0x69,0x5A,0x9C,0x9C,0xC0,0x6B,0x6C,0x43,0x42,0x32,0xCD,0xEC,0x55,0xA2,
  0x2B,0x24,0xD3,0xCC,0xBA,0x1A,0x5D,0xCD,0x98,0x16,0x55,0x94,0x7B,0x18,0x93,0x69,
  0x79,0x45,0x39,0xA6,0x1F,0x98,0x63,0x22,0x8D,0xCA,0x34,0xB9,0xAE,0x46,0xD7,0x64,
  0xDA,0x5E,0x51,0x99,0xA6,0xF6,0x2A,0xD1,0x15,0x96,0xE9,0xA8,0x93,0xE9,0x12,0x75,
  0x2F,0xF5,0x4F,0xDD,0x99,0x3E,0x84,0x50,0x29,0x0C,0x0B,0xCB,0xB4,0xFF,0xD8,0xBF,
  0x1D,0xD3,0x00,0x6B,0xD4,0x6D,0x99,0x76,0x84,0x7A,0x37,0xA6,0x7F,0xE6,0x3A,0x27,
  0x2A,0x71,0x62,0x9F,0x83,0xE2,0x66,0x4C,0x8B,0x2A,0xCA,0x3D,0x8C,0xAF,0xC3,0x00,
  0x50,0xEF,0xC2,0x94,0x8F,0xB4,0xC3,0x58,0x0E,0x69,0x32,0x6D,0xAF,0x9B,0x30,0xA5,
  0xFE,0xBA,0x43,0xBD,0x09,0xD3,0x50,0x42,0x4C,0xC1,0xA6,0x64,0x32,0x2D,0x50,0x4F,
  0xA6,0x77,0xD5,0x64,0xDA,0x5E,0x43,0x33,0x15,0xE6,0x1F,0xB2,0x33,0x1D,0xFE,0xED,
  0xE9,0xB7,0xD5,0xD4,0x39,0x28,0x0E,0xCA,0x54,0x67,0x02,0xC8,0x8D,0x4B,0x34,0x32,
  0x53,0xC6,0x4B,0x0F,0x2F,0x38,0xE0,0xAE,0xD0,0xC0,0x7B,0x29,0x0B,0xA0,0xFA,0xB7,
  0x34,0x57,0x43,0x1D,0x97,0x29,0x48,0xCA,0x85,0xE6,0xAE,0x2E,0xB9,0x4A,0x77,0x62,
  0x9A,0x3B,0xB8,0x4A,0xC3,0x32,0xE5,0xA3,0x5A,0xD3,0x45,0xBC,0x2F,0xD2,0xA8,0x4C,
  0xDF,0x86,0x26,0xD3,0xD6,0x4C,0x8D,0x8F,0x51,0x43,0x32,0x2D,0x97,0x8D,0xA6,0x56,
  0x8F,0xC8,0x4C,0x2F,0x51,0x73,0xA6,0x8A,0xDB,0x64,0xDA,0x82,0xE9,0xE7,0xC7,0x64,
  0xDA,0x88,0xA9,0xDE,0x25,0x4D,0xA6,0x07,0x99,0x82,0x9D,0xE7,0xCD,0x98,0x3A,0x80,
  0xF9,0x99,0xBA,0x22,0x1F,0x42,0xCB,0x64,0x3A,0x99,0x66,0x35,0x99,0xB6,0x57,0x08,
  0xA6,0xA1,0xDE,0xF7,0x8F,0xEB,0x7A,0xA6,0x9B,0x44,0x2E,0x46,0xF9,0x2E,0x75,0x5C,
  0x81,0x98,0xD2,0xC4,0xED,0xF8,0xFD,0xF4,0xB8,0x62,0x30,0x8D,0xF4,0x9D,0xBF,0x81,
  0x1C,0x18,0xEA,0x99,0x26,0x5B,0x66,0xB8,0x34,0xC0,0x71,0x91,0x6A,0x10,0x75,0x21,
  0x45,0x71,0x7F,0x12,0xBC,0x34,0xBF,0x51,0x89,0x2E,0x8A,0x44,0x65,0x48,0x41,0xD8,
  0x2F,0xC8,0x41,0xA2,0x86,0xE9,0x69,0x7E,0xC7,0x90,0x03,0x45,0x29,0xD3,0x93,0x9C,
  0x0E,0xA4,0x32,0x60,0x07,0x42,0x7E,0x49,0x0E,0x1A,0x25,0x4C,0x4F,0xF1,0x38,0x9C,
  0x1A,0x40,0x9D,0x48,0x95,0x1C,0x44,0x92,0x21,0x93,0x28,0x90,0x0D,0x65,0x2B,0x4A,
  0x85,0x4C,0xA4,0x48,0x16,0x16,0x52,0x94,0x0A,0x99,0x48,0x91,0x30,0x19,0x56,0x92,
  0x0A,0x99,0x48,0xA1,0x00,0x1B,0x59,0x92,0x08,0x99,0x44,0xA1,0x24,0x1E,0x90,0x81,
  0x8E,0x90,0x29,0x26,0x0E,0x08,0xF2,0x72,0x84,0xE4,0x35,0xC4,0xDF,0xE1,0x6C,0x25,
  0xCA,0xC8,0xC0,0xE5,0x08,0xC9,0x69,0x84,0xBF,0x6B,0xAC,0x55,0xED,0xF8,0xA9,0x55,
  0x11,0x92,0x73,0x37,0x22,0xD4,0x23,0x86,0x1D,0xBC,0x0E,0x22,0x1D,0x11,0xEA,0x41,
  0xC3,0x0E,0x5E,0x07,0x91,0x2E,0x05,0x7F,0x30,0x34,0x8A,0xDA,0x41,0x3D,0x10,0x92,
  0x35,0x38,0x20,0x54,0x72,0x58,0xEA,0xDD,0xC1,0xEB,0x10,0xD2,0xF7,0xDF,0x34,0x1F,
  0x8D,0xEA,0xE6,0xB6,0x36,0x21,0x1C,0xBC,0x0E,0x20,0xFD,0xFB,0x3B,0xF1,0x83,0x42,
  0x2D,0xFA,0xF3,0xD1,0x4C,0x0E,0x5E,0xF5,0x48,0x17,0xFE,0xC4,0x2B,0x2B,0xB9,0x5C,
  0x3C,0x13,0xAA,0xA0,0xB6,0x08,0x31,0x44,0xFF,0xA4,0xFD,0x38,0x50,0xC5,0xD8,0x8A,
  0x66,0x5C,0x4C,0xF7,0xB1,0xCC,0xD9,0x62,0x6E,0xC3,0xD9,0xDE,0xEC,0x8C,0xC4,0x94,
  0x79,0x0D,0x6D,0x3B,0xB2,0x37,0x2E,0xF6,0xF8,0x43,0x33,0xAD,0x7F,0x91,0xBE,0x58,
  0x0A,0x69,0x34,0xE3,0xD1,0xFC,0x38,0x14,0x1E,0x69,0x38,0x47,0x59,0xC1,0x17,0xA9,
  0x8E,0x68,0x65,0xC3,0x11,0x1F,0x73,0x4E,0x6C,0xC5,0xFF,0x3B,0xEE,0xB9,0x6B,0x91,
  0x0D,0x8F,0x88,0x74,0xEF,0x04,0xCF,0xD2,0x5E,0x7D,0x11,0xED,0x0E,0x89,0xF4,0x0B,
  0x55,0xEE,0x51,0x63,0x30,0x1D,0x14,0x29,0x7D,0xD3,0xDF,0x26,0xD6,0x6F,0x79,0x2F,
  0x37,0xEC,0xF4,0x7A,0x13,0xC7,0xA5,0x90,0xEE,0xE5,0xDD,0xCC,0x90,0xF3,0xEB,0x3D,
  0xB4,0x10,0x1E,0xE9,0x3D,0xF3,0x74,0x54,0x92,0x54,0x32,0x43,0xDF,0xFF,0xE9,0xC5,
  0x74,0xD8,0x59,0x34,0x25,0x6B,0x32,0xB8,0xA8,0xE9,0x71,0x97,0x26,0x24,0xF6,0xA9,
  0x92,0xED,0xB1,0xAE,0x68,0xF7,0xD3,0xD8,0x45,0x6D,0x5E,0x24,0xB1,0x55,0x65,0x7B,
  0xD5,0x93,0xDB,0x25,0xC7,0x7B,0xAB,0x67,0xB6,0x79,0x95,0xE8,0x06,0x95,0x14,0x9D,
  0xDC,0x41,0xB0,0x8D,0xCB,0x24,0xEA,0xBA,0x9E,0x66,0xA6,0xB9,0x28,0x53,0xFE,0x6E,
  0x75,0x26,0x54,0x73,0x23,0x67,0x35,0xB9,0x0E,0xC9,0x94,0x0F,0xFC,0xCF,0xD1,0x99,
  0xAD,0x16,0x40,0x5D,0xDF,0x3A,0xCB,0x4C,0x73,0x61,0xA6,0xDF,0x92,0xE5,0xAC,0x0D,
  0xB8,0x31,0xBF,0x60,0xA8,0xEB,0x60,0x4C,0x3F,0xDD,0xD8,0xFA,0xF7,0x92,0x90,0xCF,
  0x99,0x58,0x79,0xA3,0xAC,0x1C,0x44,0x8F,0x09,0x95,0xAD,0xF9,0x7B,0xF9,0x69,0x7B,
  0x00,0x5A,0x39,0xBF,0x80,0xA2,0xD7,0x61,0xA1,0x6E,0xC7,0x7B,0x31,0xBD,0xDC,0x14,
  0x2B,0x1D,0x04,0x8E,0x9A,0x87,0x63,0x4A,0xD3,0x45,0x23,0x5D,0x9A,0x50,0xB5,0x3E,
  0x2C,0x38,0x2B,0x1E,0x2F,0x51,0x77,0x71,0xB8,0xE2,0xB7,0xEC,0xD5,0x54,0xD1,0x8D,
  0xEC,0xD9,0xB9,0xA1,0x56,0x35,0xDF,0x5E,0x45,0x5E,0x78,0x9A,0x02,0xA6,0xAF,0xE2,
  0xDF,0x68,0x1A,0x0F,0x83,0x0F,0xFE,0x3C,0xD5,0x48,0x50,0xCB,0x46,0x0D,0x4E,0x53,
  0xB2,0xA2,0x54,0xEC,0x03,0x30,0x33,0xBE,0x02,0xE6,0xEB,0x8C,0xC4,0x74,0x83,0xEA,
  0xB2,0x63,0x23,0xFD,0x94,0x7B,0x33,0x8B,0xC4,0xD8,0x4C,0x45,0x88,0xAB,0x1F,0x9E,
  0x5E,0x9C,0xAE,0xB5,0x04,0x6A,0x2A,0x4D,0xF7,0xE3,0x97,0xF5,0xBD,0x93,0xDD,0x4E,
  0x41,0x25,0x98,0x1A,0xD7,0xCD,0x7E,0x38,0x7A,0x71,0xBE,0x4A,0xA0,0xD2,0xBC,0x61,
  0x85,0x8C,0xE9,0x22,0x98,0x4A,0x34,0x74,0x44,0xCB,0xED,0x04,0xAB,0x94,0x54,0xEB,
  0xEE,0x47,0x3E,0xF0,0x34,0x11,0x03,0xAB,0xDF,0x0F,0x9C,0xDE,0x24,0x60,0x12,0x29,
  0x02,0xC4,0x48,0xDE,0x63,0x64,0x85,0xAA,0xC8,0xD5,0x9B,0xBE,0x50,0xB5,0x83,0x52,
  0xA8,0xA2,0x88,0x9E,0x90,0x40,0x5D,0xB8,0x24,0x33,0x98,0xD4,0x57,0xC0,0x74,0x5D,
  0x03,0x30,0x45,0x16,0x0A,0x46,0x3F,0xEF,0xAD,0x9A,0x07,0x54,0x1C,0x39,0x10,0xF1,
  0xD6,0xB3,0x28,0x61,0xBA,0x4A,0xB9,0xEE,0x6A,0x2E,0x64,0xA1,0xDA,0x8F,0x9F,0xE9,
  0xCB,0x1E,0xD4,0x74,0x12,0x28,0x63,0xAA,0x90,0xF6,0x61,0x0A,0x3D,0xD4,0xFA,0x79,
  0x49,0xA6,0xA4,0x58,0xCC,0x96,0x09,0xA6,0x7C,0xF9,0x5A,0xCC,0x30,0xB3,0x33,0x4B,
  0xE1,0xAE,0xB0,0xB5,0x94,0x8D,0xBD,0xB0,0xBC,0x32,0x3B,0x4D,0x17,0xC8,0x54,0x4E,
  0x1D,0xE2,0x4E,0x30,0x35,0x3B,0xFA,0xC2,0x3B,0xD6,0x03,0x2A,0x4A,0xCF,0x5A,0x37,
  0x2A,0x4D,0x31,0xD3,0x65,0xFB,0x99,0x61,0x4A,0x4B,0xDC,0x7D,0xE1,0x67,0xDD,0x99,
  0x1E,0x5D,0x34,0x39,0x0B,0x31,0x85,0xF2,0x99,0x71,0x1F,0xFA,0x3E,0xA6,0xC5,0x5D,
  0xE9,0x99,0xA8,0xBC,0xDD,0x63,0xD3,0xBB,0x62,0x4A,0x8B,0x11,0x53,0x6B,0x4C,0xBB,
  0xD7,0x79,0x26,0x69,0x3B,0x08,0xD3,0xE5,0x08,0x53,0x63,0xE8,0xD3,0x17,0xAE,0x34,
  0x53,0xBD,0x55,0x2D,0x92,0xB2,0x1D,0x02,0xEA,0xA1,0x2C,0x5D,0xF8,0xB4,0x57,0xCE,
  0x74,0x7F,0x26,0xA3,0x33,0x05,0x9B,0x3A,0x95,0xB8,0x35,0xD5,0x2A,0xA6,0x62,0x4B,
  0xB5,0x5D,0x42,0x8B,0x7B,0x15,0x54,0x8B,0x69,0x10,0xA8,0xFA,0x4A,0x69,0xA5,0x1C,
  0xD0,0x56,0xB4,0xE7,0xAC,0x0A,0x6B,0xC4,0x34,0x08,0x54,0xBC,0xF1,0x37,0x4A,0x9D,
  0x02,0x4C,0x17,0x83,0x29,0xC8,0xD9,0xB6,0x83,0xBF,0xFF,0x6B,0xBF,0x2E,0xA9,0x71,
  0xA6,0x87,0x3E,0x64,0x4A,0xBF,0x6E,0xE1,0x15,0xCE,0x63,0x9C,0x3B,0xD6,0x9D,0x2A,
  0x72,0xDE,0x4E,0x79,0xA4,0x65,0xD6,0x50,0xCE,0xD1,0xE9,0x94,0x7F,0x7A,0x92,0x48,
  0x2D,0xA6,0xD2,0x02,0xB7,0x66,0x31,0x2D,0xF1,0xDD,0x50,0x0A,0x1B,0x43,0x59,0x0E,
  0x15,0x8F,0x63,0xB9,0x44,0xED,0x85,0x02,0xA9,0x93,0xA9,0x7C,0xE0,0x38,0x2D,0xFC,
  0xAE,0x1B,0xCB,0x42,0xCA,0xCF,0xDD,0xD5,0x89,0x81,0x4C,0x4A,0xF9,0xD0,0x07,0xD1,
  0x7C,0x83,0x20,0x4C,0x02,0xCF,0xC4,0x29,0x30,0xAD,0x52,0xFB,0x4A,0x25,0x91,0x16,
  0x7F,0x56,0x31,0xA0,0x18,0x4C,0x9D,0x77,0x0B,0x03,0x60,0x66,0x52,0xC7,0x6E,0xC3,
  0xE7,0x28,0x33,0xB9,0xD7,0x30,0xAD,0x58,0xBB,0xBF,0x77,0x63,0x87,0x7A,0x51,0x5F,
  0x98,0xD9,0x55,0xAA,0xD2,0x40,0x33,0xA5,0x3F,0x3F,0x14,0x59,0x3C,0xE5,0xFF,0x0D,
  0xB1,0x07,0x8E,0x0D,0xB5,0xAD,0x83,0x23,0xB2,0x90,0x96,0xEE,0xA7,0x4E,0x30,0xC5,
  0x4F,0xF5,0xB5,0xA8,0x48,0xD1,0xE4,0xD9,0xDF,0xE3,0xD7,0x01,0xFA,0x6C,0x4E,0xCE,
  0x82,0x22,0x85,0x00,0xBB,0x9B,0xE4,0xA8,0x00,0x52,0xF5,0x21,0xA8,0x8F,0x4F,0x2C,
  0xC3,0x91,0x72,0xDD,0xC3,0x15,0x60,0xAA,0xDC,0x04,0x44,0x9A,0xC9,0xC9,0x5E,0x13,
  0x16,0x6F,0x55,0x0D,0xF6,0x0B,0x9D,0x54,0x29,0xE1,0x72,0x15,0xBA,0xD8,0x93,0x62,
  0x3A,0x08,0x51,0x39,0x3F,0x81,0x2B,0x65,0x50,0x5B,0x74,0x5A,0x36,0x08,0x4C,0x04,
  0x47,0x6B,0x61,0xD3,0x48,0x3D,0xFD,0x68,0x91,0x4A,0xB2,0x39,0x44,0x74,0x24,0xA6,
  0xE0,0x5B,0x15,0x3D,0x75,0x56,0xD6,0xCA,0x11,0x3E,0x8F,0xCF,0x34,0xF3,0x95,0x9A,
  0x47,0x39,0xEB,0x6A,0x65,0x48,0x9C,0x17,0x59,0xE9,0x2C,0x00,0x55,0x22,0x75,0xF6,
  0xA4,0xB6,0xBB,0xC6,0x30,0xC1,0xB5,0x8E,0x80,0x14,0xFD,0x32,0x4A,0x27,0x5C,0x2A,
  0x73,0x16,0xF3,0xAE,0xD2,0xE6,0x21,0x46,0xC4,0xBB,0xB4,0x8D,0x1E,0x42,0x69,0x02,
  0xB6,0x01,0xE4,0x22,0xE0,0x57,0x85,0x94,0x8F,0x12,0xF6,0xD4,0xA0,0x9D,0xDA,0xB1,
  0xD0,0x5B,0x29,0xA6,0x90,0x81,0x75,0x57,0xBA,0x05,0x72,0x13,0x64,0x8A,0x56,0xFE,
  0x51,0x91,0x1A,0xB9,0x90,0xFB,0x6E,0xE9,0xEA,0x2F,0x7D,0x30,0xA4,0x3A,0x8C,0x51,
  0xD4,0x3C,0x3E,0x52,0xE8,0x9C,0x76,0x4B,0x86,0x81,0xBB,0x60,0x26,0xEB,0xAF,0xA0,
  0xBA,0x55,0x58,0xF5,0xC0,0x48,0x13,0x53,0xD6,0x0A,0x3A,0x6E,0xAD,0x6B,0x00,0xC2,
  0xE7,0x0C,0x22,0x45,0xCB,0xA0,0x6E,0x78,0x54,0xA4,0x79,0xA6,0x30,0x10,0x12,0x46,
  0x85,0x35,0x4C,0x7B,0x7D,0x22,0x6B,0x27,0xCB,0x3D,0x4E,0x45,0xFB,0x44,0x42,0x65,
  0x25,0x5F,0xA6,0xB0,0xF2,0xC1,0x01,0x02,0x09,0x3C,0xA2,0x5C,0x0E,0x49,0x70,0x4D,
  0x22,0x15,0xAF,0x12,0xF6,0xE3,0x1A,0xEB,0x6D,0xA9,0x44,0xA4,0x7B,0x06,0x29,0x5A,
  0xA0,0xEE,0xE1,0xE3,0xD4,0x2A,0xD7,0xED,0x69,0xA6,0x6B,0xF4,0x4F,0x50,0x05,0xCA,
  0xA4,0xD9,0xB7,0xCC,0xC3,0x17,0xBC,0x2E,0x24,0x1B,0xD3,0x85,0xE7,0x76,0xF5,0x3A,
  0x41,0xA8,0xAA,0x50,0xF3,0x56,0xC7,0x4B,0x8E,0xE9,0x5E,0xCD,0xDD,0x99,0xC2,0xD7,
  0xA5,0xEF,0x61,0xEA,0x9A,0x3C,0x5E,0x34,0x53,0xD8,0x8E,0xBA,0x7A,0x43,0xA6,0x99,
  0x2F,0x1B,0x05,0x69,0x9A,0x64,0x6A,0x3D,0x96,0xE4,0x7A,0x36,0xB2,0x6C,0x38,0xEA,
  0xF2,0x31,0xA6,0x89,0xEA,0x5B,0xF7,0x29,0x9A,0x20,0x12,0x7D,0x69,0x85,0x5A,0x34,
  0xEC,0xD4,0x06,0xF7,0x57,0x64,0x77,0x9A,0xD1,0x3A,0xC6,0xF4,0xA7,0xA1,0x6A,0x36,
  0xC7,0x98,0xAE,0xFA,0xF2,0x2F,0x88,0xF4,0x9A,0xF7,0x1F,0x8F,0x61,0xCC,0x54,0x57,
  0x48,0xEB,0xFE,0x39,0xA6,0xC6,0xBB,0x80,0xB9,0xC7,0x87,0x77,0x27,0xEB,0x9B,0x50,
  0x31,0xC5,0x02,0xA6,0x62,0xC7,0xF6,0x93,0x48,0xF5,0x78,0x26,0x85,0xF8,0x6C,0x49,
  0xC2,0x16,0x4C,0xCF,0xF5,0x1E,0x57,0x7A,0x8C,0xE2,0x73,0x7D,0x11,0x25,0xF0,0xEF,
  0x0E,0x79,0x29,0x7B,0xE3,0xBE,0x9F,0x5B,0x2F,0x03,0xAA,0xAA,0x49,0x54,0x4B,0x53,
  0x59,0xA5,0x68,0x71,0x17,0x8F,0xA3,0x69,0x32,0x3D,0x41,0xE9,0xA5,0xC7,0xB1,0x21,
  0x98,0x72,0x09,0x23,0xED,0xE9,0xE8,0x16,0x9A,0x59,0x39,0x35,0x35,0x35,0x35,0x35,
  0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,
  0x35,0x35,0x35,0x35,0xF5,0xD5,0x7F,0x21,0xF4,0xAA,0xE0
  };

#endif // 1==LOGO_PNG_0_ARGB2_1
#endif // 1==LOGO_DEMO
