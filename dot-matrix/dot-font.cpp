/*
 * dot-font.cpp
 *
 *  Created on: Aug 16, 2013
 *      Author: agu
 */

#include "dot-matrix/dot-font.h"

#ifdef USE_VFONT_7X3

static const uint8_t vfont_7x3_pattern[] = {
	0x00, 0x00, 0x00, // Space
	0x5f, 0x00, 0x00, // !
	0x03, 0x00, 0x03, // "
	0x28, 0x7c, 0x28, // #
	0x2e, 0x6b, 0x3a, // $
	0x64, 0x10, 0x4c, // %
	0x5f, 0x75, 0x57, // &
	0x03, 0x00, 0x00, // '

	0x1c, 0x22, 0x41, // (
	0x41, 0x22, 0x1c, // )
	0x0a, 0x04, 0x0a, // *
	0x04, 0x0e, 0x04, // +
	0x60, 0x00, 0x00, // ,
	0x04, 0x04, 0x04, // -
	0x40, 0x00, 0x00, // .
	0x60, 0x18, 0x06, // /

	0x7f, 0x41, 0x7f, // 0
	0x42, 0x7f, 0x40, // 1
	0x7d, 0x45, 0x47, // 2
	0x45, 0x45, 0x7f, // 3
	0x3f, 0x20, 0x7f, // 4
	0x47, 0x45, 0x7d, // 5
	0x7f, 0x45, 0x7d, // 6
	0x01, 0x01, 0x7f, // 7

	0x7f, 0x45, 0x7f, // 8
	0x5f, 0x51, 0x7f, // 9
	0x50, 0x00, 0x00, // :
	0x68, 0x00, 0x00, // ;
	0x08, 0x14, 0x22, // <
	0x14, 0x14, 0x14, // =
	0x22, 0x14, 0x08, // >
	0x59, 0x0f, 0x00, // ?

	0x74, 0x44, 0x7c, // @
	0x7f, 0x21, 0x7f, // A
	0x7f, 0x47, 0x7c, // B
	0x7f, 0x41, 0x63, // C
	0x7d, 0x41, 0x7f, // D
	0x7f, 0x45, 0x45, // E
	0x7f, 0x05, 0x05, // F
	0x7f, 0x41, 0x7d, // G
	0x7f, 0x04, 0x7f, // H
	0x41, 0x7f, 0x41, // I
	0x40, 0x41, 0x7f, // J
	0x7f, 0x0a, 0x7b, // K
	0x7f, 0x40, 0x40, // L
	0x7f, 0x0e, 0x7f, // M
	0x7f, 0x01, 0x7f, // N
	0x7f, 0x41, 0x7f, // O

	0x7f, 0x21, 0x3f, // P
	0x3f, 0x21, 0x5f, // Q
	0x7f, 0x31, 0x5f, // R
	0x47, 0x45, 0x7d, // S
	0x01, 0x7f, 0x01, // T
	0x7F, 0x40, 0x7f, // U
	0x7f, 0x20, 0x1f, // V
	0x7f, 0x38, 0x7f, // W
	0x7b, 0x0e, 0x7b, // X
	0x07, 0x7c, 0x07, // Y
	0x79, 0x45, 0x43, // Z
	0x7f, 0x41, 0x00, // [
	0x06, 0x18, 0x60, // "\"
	0x41, 0x7f, 0x00, // ]
	0x02, 0x01, 0x02, // ^
	0x40, 0x40, 0x40, // _

	0x01, 0x02, 0x00, // `
	0x74, 0x54, 0x7c, // a
	0x7f, 0x44, 0x7c, // b
	0x7c, 0x44, 0x44, // c
	0x7c, 0x44, 0x7f, // d
	0x7c, 0x54, 0x5c, // e
	0x04, 0x7f, 0x05, // f
	0x5c, 0x54, 0x7c, // g
	0x7f, 0x04, 0x7c, // h
	0x7d, 0x00, 0x00, // i
	0x40, 0x7d, 0x00, // j
	0x7f, 0x10, 0x6c, // k
	0x7f, 0x40, 0x00, // l

	0x7c, 0x18, 0x7c, // m
	0x7c, 0x04, 0x7c, // n
	0x7c, 0x44, 0x7c, // o
	0x7c, 0x24, 0x3c, // p
	0x3c, 0x24, 0x7c, // q
	0x7c, 0x04, 0x04, // r
	0x5c, 0x54, 0x74, // s
	0x04, 0x7e, 0x44, // t
	0x7c, 0x40, 0x7c, // u
	0x7c, 0x20, 0x1c, // v
	0x7c, 0x30, 0x7c, // w
	0x6c, 0x10, 0x6c, // x
	0x5c, 0x50, 0x7c, // y
	0x64, 0x54, 0x4c, // z

	0x08, 0x7f, 0x41, // {
	0x00, 0x7f, 0x00, // |
	0x41, 0x7f, 0x08, // }
	0x01, 0x03, 0x02, // ~
	0x7f, 0x7f, 0x7f, // Full Filled
};

const DotFont vfont_7x3 = {
	3, 7, 0x20, 0x60, vfont_7x3_pattern
};

#endif

#ifdef USE_VFONT_5X3

static const uint8_t vfont_5x3_pattern[] = {
	0x1f, 0x11, 0x1f,	//0
	0x00, 0x1f, 0x00,	//1
	0x1d, 0x15, 0x17,	//2
	0x15, 0x15, 0x1f,	//3
	0x0f, 0x08, 0x1f,	//4
	0x17, 0x15, 0x1d,	//5
	0x1f, 0x15, 0x1d,	//6
	0x01, 0x01, 0x1f,	//7
	0x1f, 0x15, 0x1f,	//8
	0x17, 0x15, 0x1f,	//9
};

const DotFont vfont_5x3 = {
	3, 5, 0x30, 10, vfont_5x3_pattern
};

#endif



