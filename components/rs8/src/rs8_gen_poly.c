/*
 * coefficients table of generator polynomial for Reed-Solomon fast encoder
 */
#include <esp_attr.h>

#include "gf8.h"
#include "rs8.h"

/* generator polynomial coefficients table, 2..64 parity, descending order, index form */
WORD_ALIGNED_ATTR const gf8_t rs8_gen_poly[] = {
0x1a, 0x03, 0x4c, 0xfb, 0x51, 0x0a, 0xa7, 0x02, 0x89, 0x09, 0xb5, 0x15, 0xb0, 0xf0, 0xd3, 0xfd,
0xdc, 0x03, 0xcb, 0x24, 0xfc, 0x45, 0x31, 0x41, 0x7b, 0x4c, 0x47, 0x66, 0x29, 0x37, 0x67, 0x2d,
0x65, 0x7d, 0xc0, 0x77, 0xcd, 0x97, 0x8c, 0x61, 0xa8, 0x4e, 0xc8, 0xfb, 0x9e, 0x34, 0xc3, 0x82,
0xe1, 0x91, 0xe1, 0x61, 0xda, 0x47, 0x23, 0x69, 0x79, 0x6a, 0x6e, 0x71, 0x6b, 0xa7, 0x53, 0x0b,
0x64, 0xc9, 0x9e, 0xb5, 0xc3, 0xd0, 0xf0, 0x88, 0xd8, 0xec, 0xa1, 0x62, 0xbd, 0x67, 0x7d, 0xb2,
0x58, 0xc5, 0xa3, 0xa0, 0x0a, 0xc1, 0x14, 0x72, 0x71, 0xab, 0x12, 0x3e, 0x52, 0x36, 0x42, 0xa9,
0x21, 0xc3, 0xd3, 0xbe, 0xe8, 0xed, 0x60, 0xfd, 0xab, 0xb4, 0xe5, 0xe6, 0xcf, 0xd2, 0xd3, 0xad,
0xfa, 0xf6, 0x62, 0xec, 0x15, 0x75, 0xe6, 0x3f, 0xd3, 0x56, 0x15, 0xba, 0x71, 0x60, 0xec, 0x98,
0xb3, 0x7d, 0xba, 0xfd, 0xe6, 0x7b, 0x8a, 0x34, 0xd8, 0x7b, 0x03, 0x86, 0xa8, 0xbe, 0xb4, 0xa4,
0xcd, 0xf0, 0xf3, 0xea, 0x80, 0x12, 0x88, 0xfc, 0x6c, 0x76, 0xfa, 0x2d, 0xae, 0x7f, 0xa1, 0x06,
0x6c, 0xbc, 0x7d, 0x19, 0x9a, 0xd3, 0x7a, 0x28, 0xb2, 0x43, 0xb0, 0x25, 0x07, 0xa0, 0x20, 0x7a,
0x45, 0xf9, 0xb0, 0xa9, 0xf3, 0x60, 0xa9, 0xe1, 0xcb, 0x6c, 0xe5, 0xf0, 0x73, 0xbc, 0x77, 0xc8,
0xce, 0x9f, 0xda, 0x29, 0xf7, 0xd9, 0x26, 0x3d, 0x09, 0x6b, 0x3f, 0xd9, 0xeb, 0x8f, 0x0c, 0x3f,
0x24, 0x97, 0x2a, 0xaf, 0x94, 0x9c, 0xdd, 0x25, 0xba, 0xbe, 0x3b, 0x3a, 0x79, 0x62, 0xfc, 0x6e,
0xed, 0x8d, 0x3b, 0xbf, 0xf5, 0xd5, 0xf5, 0x98, 0xb3, 0x3d, 0x15, 0xf2, 0x0a, 0x44, 0xdd, 0xd2,
0x0b, 0x08, 0x6d, 0xc2, 0xfe, 0xad, 0x0b, 0x4b, 0xda, 0x94, 0x95, 0x2c, 0x00, 0x89, 0x68, 0x2b,
0x89, 0xcb, 0x63, 0xb0, 0x3b, 0x5b, 0xc2, 0x54, 0x35, 0xf8, 0x6b, 0x50, 0x1c, 0xd7, 0xfb, 0x12,
0x70, 0x4f, 0x95, 0x62, 0x1f, 0x1b, 0x73, 0x1b, 0x72, 0x68, 0x7c, 0xcd, 0x63, 0x9a, 0xb2, 0x8d,
0x4b, 0xb0, 0xf8, 0x04, 0xef, 0x7d, 0x4f, 0x5e, 0x8b, 0x57, 0xd2, 0x9d, 0xc4, 0x2b, 0x81, 0x5e,
0xa2, 0x55, 0xc9, 0xb9, 0x65, 0x14, 0xb1, 0x25, 0xfd, 0xf2, 0x45, 0xa2, 0x7e, 0x0c, 0xb4, 0xa6,
0x80, 0x09, 0x00, 0x7d, 0x25, 0x53, 0xef, 0x3b, 0x6e, 0xea, 0x82, 0xcb, 0x93, 0x66, 0x96, 0xe2,
0x94, 0x1c, 0x92, 0x0c, 0x41, 0x9c, 0xa0, 0x24, 0x29, 0xe8, 0xeb, 0x41, 0xfa, 0x67, 0x3a, 0xe4,
0xbb, 0xb0, 0x21, 0x4f, 0x3c, 0x7f, 0x38, 0x63, 0x44, 0x8a, 0x86, 0xf4, 0xd8, 0x13, 0x0c, 0xc2,
0xf4, 0x45, 0xc1, 0x16, 0xd0, 0x3e, 0x10, 0x34, 0x9b, 0xbd, 0x61, 0xe7, 0x3c, 0x76, 0x52, 0xa5,
0x02, 0x68, 0x87, 0xd5, 0x89, 0xab, 0x03, 0x45, 0xb0, 0x46, 0xfa, 0x7a, 0x46, 0x2c, 0xce, 0xc2,
0xf7, 0x7e, 0xc1, 0x1f, 0xc8, 0x3d, 0xd0, 0x8e, 0x75, 0x47, 0x4e, 0xc3, 0x9e, 0xa8, 0x6b, 0x38,
0x0e, 0x5b, 0x4a, 0x37, 0xfb, 0x69, 0xe0, 0xea, 0x1e, 0x18, 0x90, 0xef, 0x09, 0x0d, 0x45, 0xfe,
0xea, 0xcd, 0x7d, 0x64, 0xf7, 0x1a, 0xcf, 0x7e, 0x75, 0xa9, 0x26, 0x9b, 0xa4, 0x3c, 0x80, 0xfb,
0x44, 0x83, 0xf4, 0xe7, 0x0f, 0x21, 0xec, 0x9f, 0xd0, 0xc8, 0xe9, 0x9d, 0x5b, 0x8a, 0xbf, 0x09,
0x40, 0x7d, 0x4c, 0xfc, 0x4c, 0x3f, 0xb1, 0xc6, 0x64, 0x00, 0xcc, 0x27, 0x57, 0x8b, 0x1a, 0xa3,
0x21, 0x0c, 0x16, 0x05, 0x43, 0x66, 0xa8, 0x58, 0xfb, 0x9a, 0x93, 0x90, 0x63, 0xc3, 0x55, 0xe4,
0xfc, 0xb7, 0xf1, 0xcf, 0x4c, 0xaa, 0x9a, 0x90, 0x74, 0xe1, 0x71, 0x60, 0x5b, 0x74, 0x03, 0xe6,
0xd1, 0x7b, 0xc4, 0x6d, 0x64, 0x11, 0x43, 0x7f, 0x90, 0x3c, 0x4b, 0x22, 0x9a, 0xec, 0xbe, 0xe9,
0x3b, 0x19, 0x1d, 0x7a, 0x57, 0x0e, 0x66, 0x86, 0x0a, 0x28, 0x1b, 0x18, 0x9a, 0xd2, 0x59, 0x3f,
0xc4, 0x09, 0x54, 0xf4, 0x0b, 0x3f, 0x7f, 0x3d, 0xe5, 0x1b, 0xc7, 0x86, 0xd8, 0x98, 0x43, 0x20,
0x05, 0x64, 0x32, 0x72, 0xfd, 0x4b, 0xc1, 0x4f, 0x3f, 0x8d, 0x86, 0x26, 0xf2, 0x85, 0x9e, 0xb8,
0xcf, 0xe7, 0x86, 0xea, 0x7c, 0xb4, 0x97, 0xd8, 0x7c, 0x37, 0x1b, 0xc0, 0xb1, 0x15, 0xe6, 0x33,
0x87, 0x0e, 0x7f, 0x5e, 0xd0, 0x55, 0x51, 0x9c, 0xe9, 0x7f, 0xa0, 0xa5, 0xa9, 0x0f, 0x7d, 0x36,
0xda, 0x6d, 0xd6, 0xcd, 0x30, 0x11, 0xe0, 0x7f, 0xd4, 0x05, 0xde, 0xf5, 0x43, 0x23, 0x37, 0xb8,
0x97, 0xeb, 0x9d, 0xbc, 0x10, 0xf5, 0x12, 0x6b, 0x6e, 0x4c, 0xe0, 0x44, 0x96, 0x67, 0xa3, 0x6d,
0x0e, 0x9c, 0x17, 0xdb, 0xa9, 0xd8, 0x07, 0x19, 0xb6, 0x00, 0x75, 0x34, 0x59, 0xbe, 0x37, 0xe2,
0x03, 0x61, 0xc9, 0x38, 0x61, 0x8b, 0x89, 0x21, 0xc7, 0xf9, 0xa8, 0xe9, 0x29, 0x22, 0x50, 0xa7,
0x3c, 0x0b, 0xe4, 0xa0, 0x1a, 0x75, 0xdb, 0x7c, 0x5a, 0x61, 0x9d, 0x93, 0x87, 0x0e, 0x11, 0x9f,
0x3d, 0x74, 0x7f, 0x8b, 0x52, 0x1f, 0xf5, 0x0b, 0x94, 0x51, 0x21, 0x31, 0xa7, 0x67, 0xb8, 0x1c,
0xcc, 0x5b, 0xd7, 0xe3, 0x78, 0x1d, 0x37, 0x4b, 0x38, 0x3e, 0xfb, 0xc6, 0x09, 0xf1, 0x77, 0x4c,
0xe4, 0xee, 0x82, 0xbb, 0x31, 0x77, 0xd1, 0xda, 0x4f, 0x12, 0x40, 0x1d, 0x0e, 0xcf, 0xcd, 0x71,
0x9e, 0x3d, 0x9f, 0x51, 0x9f, 0x94, 0x01, 0x7a, 0xab, 0xf5, 0x19, 0x36, 0xc8, 0x6b, 0x96, 0x51,
0xf9, 0x80, 0x54, 0xd2, 0x6b, 0x7a, 0x6e, 0xa1, 0xa9, 0xde, 0x77, 0x7c, 0x0b, 0x65, 0x04, 0xaf,
0x31, 0xd7, 0xd9, 0xf5, 0x17, 0xa2, 0x12, 0xaf, 0x9c, 0xe6, 0xc1, 0xe9, 0x25, 0xa5, 0x9a, 0xaa,
0xd3, 0x18, 0xd0, 0xce, 0xdf, 0x3e, 0x2d, 0x79, 0x15, 0xde, 0x8c, 0xa4, 0xc1, 0xf8, 0x8b, 0x43,
0xd0, 0x6b, 0x4a, 0xf4, 0x29, 0xc9, 0xcd, 0xfe, 0x05, 0x4a, 0x74, 0x42, 0x53, 0x76, 0x1d, 0xfb,
0x47, 0x21, 0x45, 0x73, 0x06, 0xc0, 0xd3, 0xc5, 0xf8, 0x45, 0x0b, 0x03, 0xe3, 0xa2, 0xad, 0x02,
0xc5, 0xa3, 0xd7, 0x11, 0xb1, 0x14, 0xe9, 0x71, 0x1b, 0xac, 0x60, 0xc5, 0x9e, 0x39, 0x3b, 0x42,
0x9f, 0x17, 0xfd, 0x2e, 0xaa, 0x05, 0x48, 0xbd, 0xac, 0xb4, 0xfd, 0x26, 0xa6, 0x4f, 0x5c, 0x73,
0xd4, 0xc4, 0x21, 0xb5, 0xcd, 0xb5, 0x6c, 0x8e, 0x1d, 0x10, 0x0e, 0x93, 0xfa, 0xcd, 0xeb, 0xcf,
0xe6, 0x39, 0xe0, 0x73, 0xea, 0x88, 0x2d, 0xc7, 0x92, 0x1a, 0x79, 0x0e, 0x19, 0xe5, 0xdf, 0x53,
0x8e, 0xf7, 0x82, 0x8b, 0xbf, 0x72, 0x46, 0x48, 0x12, 0x55, 0xc5, 0xf7, 0xa0, 0x7e, 0x34, 0xa6,
0x49, 0xe1, 0x81, 0x47, 0xf1, 0x87, 0x72, 0x98, 0xf1, 0x11, 0x7b, 0x51, 0x09, 0x48, 0x92, 0x41,
0x5c, 0x2d, 0x42, 0xcc, 0x74, 0x66, 0x4c, 0xe5, 0x00, 0x7e, 0xdf, 0x68, 0x0b, 0x86, 0x32, 0x25,
0x11, 0xf4, 0x4b, 0x8b, 0x1a, 0x7d, 0x9c, 0x64, 0x0b, 0x8e, 0x5f, 0x66, 0xfa, 0x75, 0x65, 0x50,
0x65, 0x8f, 0xe3, 0x33, 0xf7, 0xa2, 0xda, 0x49, 0x05, 0x9d, 0x15, 0x35, 0x11, 0xc1, 0xc0, 0xa9,
0x05, 0x58, 0xa4, 0x38, 0xfb, 0x98, 0x4f, 0x2d, 0xed, 0x13, 0xb8, 0x12, 0x5f, 0xf6, 0xab, 0xa8,
0x2e, 0x35, 0xb2, 0x0d, 0x0c, 0xa4, 0xa6, 0x39, 0x4d, 0x81, 0x67, 0x87, 0xbe, 0xda, 0xca, 0x0f,
0xd9, 0x60, 0xa0, 0xa9, 0x8c, 0x30, 0x96, 0x4d, 0xb9, 0x77, 0xe2, 0xf0, 0x3a, 0x36, 0xb0, 0xbc,
0xf1, 0xb8, 0xfd, 0xf5, 0x29, 0xfe, 0x82, 0x57, 0xe1, 0xbc, 0x5a, 0xb8, 0xf0, 0xf1, 0xac, 0x23,
0x20, 0x71, 0x96, 0xa0, 0xc1, 0x1d, 0x2a, 0x57, 0x06, 0x45, 0xed, 0x30, 0x17, 0xda, 0x15, 0x28,
};

/*
 * return pointer for the generator polynomial coefficients table specified by "parity" (2..64, even)
 */
const gf8_t *rs8_gen_poly_table(int parity)
{
    if (parity < RS8_PARITY_MIN || parity > RS8_PARITY_MAX || (parity & 1) != 0) {
	return NULL;
    }

    return &rs8_gen_poly[parity * (parity - 2) / 4];
}
