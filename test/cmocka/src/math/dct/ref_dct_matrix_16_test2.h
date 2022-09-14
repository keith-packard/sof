/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 */

/* Created 02-Sep-2022 16:36:35 with script ref_matrix.m v1.9-rc1-1720-g5b4f9f481 */

#define DCT_MATRIX_16_TEST2_NUM_IN  42
#define DCT_MATRIX_16_TEST2_NUM_OUT  42
#define DCT_MATRIX_16_TEST2_TYPE  DCT_II
#define DCT_MATRIX_16_TEST2_ORTHO  true

static const int16_t dct_matrix_16_test2_matrix[1764] = {
	  5056,   7146,   7131,   7106,   7071,   7026,   6971,   6907,   6833,   6749,
	  6656,   6554,   6442,   6322,   6193,   6055,   5908,   5753,   5591,   5420,
	  5242,   5056,   4864,   4664,   4458,   4246,   4028,   3804,   3575,   3341,
	  3103,   2859,   2612,   2362,   2108,   1851,   1591,   1329,   1066,    801,
	   534,    267,   5056,   7106,   6971,   6749,   6442,   6055,   5591,   5056,
	  4458,   3804,   3103,   2362,   1591,    801,      0,   -801,  -1591,  -2362,
	 -3103,  -3804,  -4458,  -5056,  -5591,  -6055,  -6442,  -6749,  -6971,  -7106,
	 -7151,  -7106,  -6971,  -6749,  -6442,  -6055,  -5591,  -5056,  -4458,  -3804,
	 -3103,  -2362,  -1591,   -801,   5056,   7026,   6656,   6055,   5242,   4246,
	  3103,   1851,    534,   -801,  -2108,  -3341,  -4458,  -5420,  -6193,  -6749,
	 -7071,  -7146,  -6971,  -6554,  -5908,  -5056,  -4028,  -2859,  -1591,   -267,
	  1066,   2362,   3575,   4664,   5591,   6322,   6833,   7106,   7131,   6907,
	  6442,   5753,   4864,   3804,   2612,   1329,   5056,   6907,   6193,   5056,
	  3575,   1851,      0,  -1851,  -3575,  -5056,  -6193,  -6907,  -7151,  -6907,
	 -6193,  -5056,  -3575,  -1851,      0,   1851,   3575,   5056,   6193,   6907,
	  7151,   6907,   6193,   5056,   3575,   1851,      0,  -1851,  -3575,  -5056,
	 -6193,  -6907,  -7151,  -6907,  -6193,  -5056,  -3575,  -1851,   5056,   6749,
	  5591,   3804,   1591,   -801,  -3103,  -5056,  -6442,  -7106,  -6971,  -6055,
	 -4458,  -2362,      0,   2362,   4458,   6055,   6971,   7106,   6442,   5056,
	  3103,    801,  -1591,  -3804,  -5591,  -6749,  -7151,  -6749,  -5591,  -3804,
	 -1591,    801,   3103,   5056,   6442,   7106,   6971,   6055,   4458,   2362,
	  5056,   6554,   4864,   2362,   -534,  -3341,  -5591,  -6907,  -7071,  -6055,
	 -4028,  -1329,   1591,   4246,   6193,   7106,   6833,   5420,   3103,    267,
	 -2612,  -5056,  -6656,  -7146,  -6442,  -4664,  -2108,    801,   3575,   5753,
	  6971,   7026,   5908,   3804,   1066,  -1851,  -4458,  -6322,  -7131,  -6749,
	 -5242,  -2859,   5056,   6322,   4028,    801,  -2612,  -5420,  -6971,  -6907,
	 -5242,  -2362,   1066,   4246,   6442,   7146,   6193,   3804,    534,  -2859,
	 -5591,  -7026,  -6833,  -5056,  -2108,   1329,   4458,   6554,   7131,   6055,
	  3575,    267,  -3103,  -5753,  -7071,  -6749,  -4864,  -1851,   1591,   4664,
	  6656,   7106,   5908,   3341,   5056,   6055,   3103,   -801,  -4458,  -6749,
	 -6971,  -5056,  -1591,   2362,   5591,   7106,   6442,   3804,      0,  -3804,
	 -6442,  -7106,  -5591,  -2362,   1591,   5056,   6971,   6749,   4458,    801,
	 -3103,  -6055,  -7151,  -6055,  -3103,    801,   4458,   6749,   6971,   5056,
	  1591,  -2362,  -5591,  -7106,  -6442,  -3804,   5056,   5753,   2108,  -2362,
	 -5908,  -7146,  -5591,  -1851,   2612,   6055,   7131,   5420,   1591,  -2859,
	 -6193,  -7106,  -5242,  -1329,   3103,   6322,   7071,   5056,   1066,  -3341,
	 -6442,  -7026,  -4864,   -801,   3575,   6554,   6971,   4664,    534,  -3804,
	 -6656,  -6907,  -4458,   -267,   4028,   6749,   6833,   4246,   5056,   5420,
	  1066,  -3804,  -6833,  -6554,  -3103,   1851,   5908,   7106,   4864,    267,
	 -4458,  -7026,  -6193,  -2362,   2612,   6322,   6971,   4246,   -534,  -5056,
	 -7131,  -5753,  -1591,   3341,   6656,   6749,   3575,  -1329,  -5591,  -7146,
	 -5242,   -801,   4028,   6907,   6442,   2859,  -2108,  -6055,  -7071,  -4664,
	  5056,   5056,      0,  -5056,  -7151,  -5056,      0,   5056,   7151,   5056,
	     0,  -5056,  -7151,  -5056,      0,   5056,   7151,   5056,      0,  -5056,
	 -7151,  -5056,      0,   5056,   7151,   5056,      0,  -5056,  -7151,  -5056,
	     0,   5056,   7151,   5056,      0,  -5056,  -7151,  -5056,      0,   5056,
	  7151,   5056,   5056,   4664,  -1066,  -6055,  -6833,  -2859,   3103,   6907,
	  5908,    801,  -4864,  -7146,  -4458,   1329,   6193,   6749,   2612,  -3341,
	 -6971,  -5753,   -534,   5056,   7131,   4246,  -1591,  -6322,  -6656,  -2362,
	  3575,   7026,   5591,    267,  -5242,  -7106,  -4028,   1851,   6442,   6554,
	  2108,  -3804,  -7071,  -5420,   5056,   4246,  -2108,  -6749,  -5908,   -267,
	  5591,   6907,   2612,  -3804,  -7131,  -4664,   1591,   6554,   6193,    801,
	 -5242,  -7026,  -3103,   3341,   7071,   5056,  -1066,  -6322,  -6442,  -1329,
	  4864,   7106,   3575,  -2859,  -6971,  -5420,    534,   6055,   6656,   1851,
	 -4458,  -7146,  -4028,   2362,   6833,   5753,   5056,   3804,  -3103,  -7106,
	 -4458,   2362,   6971,   5056,  -1591,  -6749,  -5591,    801,   6442,   6055,
	     0,  -6055,  -6442,   -801,   5591,   6749,   1591,  -5056,  -6971,  -2362,
	  4458,   7106,   3103,  -3804,  -7151,  -3804,   3103,   7106,   4458,  -2362,
	 -6971,  -5056,   1591,   6749,   5591,   -801,  -6442,  -6055,   5056,   3341,
	 -4028,  -7106,  -2612,   4664,   6971,   1851,  -5242,  -6749,  -1066,   5753,
	  6442,    267,  -6193,  -6055,    534,   6554,   5591,  -1329,  -6833,  -5056,
	  2108,   7026,   4458,  -2859,  -7131,  -3804,   3575,   7146,   3103,  -4246,
	 -7071,  -2362,   4864,   6907,   1591,  -5420,  -6656,   -801,   5908,   6322,
	  5056,   2859,  -4864,  -6749,   -534,   6322,   5591,  -1851,  -7071,  -3804,
	  4028,   7026,   1591,  -5753,  -6193,    801,   6833,   4664,  -3103,  -7146,
	 -2612,   5056,   6656,    267,  -6442,  -5420,   2108,   7106,   3575,  -4246,
	 -6971,  -1329,   5908,   6055,  -1066,  -6907,  -4458,   3341,   7131,   2362,
	 -5242,  -6554,   5056,   2362,  -5591,  -6055,   1591,   7106,   3103,  -5056,
	 -6442,    801,   6971,   3804,  -4458,  -6749,      0,   6749,   4458,  -3804,
	 -6971,   -801,   6442,   5056,  -3103,  -7106,  -1591,   6055,   5591,  -2362,
	 -7151,  -2362,   5591,   6055,  -1591,  -7106,  -3103,   5056,   6442,   -801,
	 -6971,  -3804,   4458,   6749,   5056,   1851,  -6193,  -5056,   3575,   6907,
	     0,  -6907,  -3575,   5056,   6193,  -1851,  -7151,  -1851,   6193,   5056,
	 -3575,  -6907,      0,   6907,   3575,  -5056,  -6193,   1851,   7151,   1851,
	 -6193,  -5056,   3575,   6907,      0,  -6907,  -3575,   5056,   6193,  -1851,
	 -7151,  -1851,   6193,   5056,  -3575,  -6907,   5056,   1329,  -6656,  -3804,
	  5242,   5753,  -3103,  -6907,    534,   7106,   2108,  -6322,  -4458,   4664,
	  6193,  -2362,  -7071,   -267,   6971,   2859,  -5908,  -5056,   4028,   6554,
	 -1591,  -7146,  -1066,   6749,   3575,  -5420,  -5591,   3341,   6833,   -801,
	 -7131,  -1851,   6442,   4246,  -4864,  -6055,   2612,   7026,   5056,    801,
	 -6971,  -2362,   6442,   3804,  -5591,  -5056,   4458,   6055,  -3103,  -6749,
	  1591,   7106,      0,  -7106,  -1591,   6749,   3103,  -6055,  -4458,   5056,
	  5591,  -3804,  -6442,   2362,   6971,   -801,  -7151,   -801,   6971,   2362,
	 -6442,  -3804,   5591,   5056,  -4458,  -6055,   3103,   6749,  -1591,  -7106,
	  5056,    267,  -7131,   -801,   7071,   1329,  -6971,  -1851,   6833,   2362,
	 -6656,  -2859,   6442,   3341,  -6193,  -3804,   5908,   4246,  -5591,  -4664,
	  5242,   5056,  -4864,  -5420,   4458,   5753,  -4028,  -6055,   3575,   6322,
	 -3103,  -6554,   2612,   6749,  -2108,  -6907,   1591,   7026,  -1066,  -7106,
	   534,   7146,   5056,   -267,  -7131,    801,   7071,  -1329,  -6971,   1851,
	  6833,  -2362,  -6656,   2859,   6442,  -3341,  -6193,   3804,   5908,  -4246,
	 -5591,   4664,   5242,  -5056,  -4864,   5420,   4458,  -5753,  -4028,   6055,
	  3575,  -6322,  -3103,   6554,   2612,  -6749,  -2108,   6907,   1591,  -7026,
	 -1066,   7106,    534,  -7146,   5056,   -801,  -6971,   2362,   6442,  -3804,
	 -5591,   5056,   4458,  -6055,  -3103,   6749,   1591,  -7106,      0,   7106,
	 -1591,  -6749,   3103,   6055,  -4458,  -5056,   5591,   3804,  -6442,  -2362,
	  6971,    801,  -7151,    801,   6971,  -2362,  -6442,   3804,   5591,  -5056,
	 -4458,   6055,   3103,  -6749,  -1591,   7106,   5056,  -1329,  -6656,   3804,
	  5242,  -5753,  -3103,   6907,    534,  -7106,   2108,   6322,  -4458,  -4664,
	  6193,   2362,  -7071,    267,   6971,  -2859,  -5908,   5056,   4028,  -6554,
	 -1591,   7146,  -1066,  -6749,   3575,   5420,  -5591,  -3341,   6833,    801,
	 -7131,   1851,   6442,  -4246,  -4864,   6055,   2612,  -7026,   5056,  -1851,
	 -6193,   5056,   3575,  -6907,      0,   6907,  -3575,  -5056,   6193,   1851,
	 -7151,   1851,   6193,  -5056,  -3575,   6907,      0,  -6907,   3575,   5056,
	 -6193,  -1851,   7151,  -1851,  -6193,   5056,   3575,  -6907,      0,   6907,
	 -3575,  -5056,   6193,   1851,  -7151,   1851,   6193,  -5056,  -3575,   6907,
	  5056,  -2362,  -5591,   6055,   1591,  -7106,   3103,   5056,  -6442,   -801,
	  6971,  -3804,  -4458,   6749,      0,  -6749,   4458,   3804,  -6971,    801,
	  6442,  -5056,  -3103,   7106,  -1591,  -6055,   5591,   2362,  -7151,   2362,
	  5591,  -6055,  -1591,   7106,  -3103,  -5056,   6442,    801,  -6971,   3804,
	  4458,  -6749,   5056,  -2859,  -4864,   6749,   -534,  -6322,   5591,   1851,
	 -7071,   3804,   4028,  -7026,   1591,   5753,  -6193,   -801,   6833,  -4664,
	 -3103,   7146,  -2612,  -5056,   6656,   -267,  -6442,   5420,   2108,  -7106,
	  3575,   4246,  -6971,   1329,   5908,  -6055,  -1066,   6907,  -4458,  -3341,
	  7131,  -2362,  -5242,   6554,   5056,  -3341,  -4028,   7106,  -2612,  -4664,
	  6971,  -1851,  -5242,   6749,  -1066,  -5753,   6442,   -267,  -6193,   6055,
	   534,  -6554,   5591,   1329,  -6833,   5056,   2108,  -7026,   4458,   2859,
	 -7131,   3804,   3575,  -7146,   3103,   4246,  -7071,   2362,   4864,  -6907,
	  1591,   5420,  -6656,    801,   5908,  -6322,   5056,  -3804,  -3103,   7106,
	 -4458,  -2362,   6971,  -5056,  -1591,   6749,  -5591,   -801,   6442,  -6055,
	     0,   6055,  -6442,    801,   5591,  -6749,   1591,   5056,  -6971,   2362,
	  4458,  -7106,   3103,   3804,  -7151,   3804,   3103,  -7106,   4458,   2362,
	 -6971,   5056,   1591,  -6749,   5591,    801,  -6442,   6055,   5056,  -4246,
	 -2108,   6749,  -5908,    267,   5591,  -6907,   2612,   3804,  -7131,   4664,
	  1591,  -6554,   6193,   -801,  -5242,   7026,  -3103,  -3341,   7071,  -5056,
	 -1066,   6322,  -6442,   1329,   4864,  -7106,   3575,   2859,  -6971,   5420,
	   534,  -6055,   6656,  -1851,  -4458,   7146,  -4028,  -2362,   6833,  -5753,
	  5056,  -4664,  -1066,   6055,  -6833,   2859,   3103,  -6907,   5908,   -801,
	 -4864,   7146,  -4458,  -1329,   6193,  -6749,   2612,   3341,  -6971,   5753,
	  -534,  -5056,   7131,  -4246,  -1591,   6322,  -6656,   2362,   3575,  -7026,
	  5591,   -267,  -5242,   7106,  -4028,  -1851,   6442,  -6554,   2108,   3804,
	 -7071,   5420,   5056,  -5056,      0,   5056,  -7151,   5056,      0,  -5056,
	  7151,  -5056,      0,   5056,  -7151,   5056,      0,  -5056,   7151,  -5056,
	     0,   5056,  -7151,   5056,      0,  -5056,   7151,  -5056,      0,   5056,
	 -7151,   5056,      0,  -5056,   7151,  -5056,      0,   5056,  -7151,   5056,
	     0,  -5056,   7151,  -5056,   5056,  -5420,   1066,   3804,  -6833,   6554,
	 -3103,  -1851,   5908,  -7106,   4864,   -267,  -4458,   7026,  -6193,   2362,
	  2612,  -6322,   6971,  -4246,   -534,   5056,  -7131,   5753,  -1591,  -3341,
	  6656,  -6749,   3575,   1329,  -5591,   7146,  -5242,    801,   4028,  -6907,
	  6442,  -2859,  -2108,   6055,  -7071,   4664,   5056,  -5753,   2108,   2362,
	 -5908,   7146,  -5591,   1851,   2612,  -6055,   7131,  -5420,   1591,   2859,
	 -6193,   7106,  -5242,   1329,   3103,  -6322,   7071,  -5056,   1066,   3341,
	 -6442,   7026,  -4864,    801,   3575,  -6554,   6971,  -4664,    534,   3804,
	 -6656,   6907,  -4458,    267,   4028,  -6749,   6833,  -4246,   5056,  -6055,
	  3103,    801,  -4458,   6749,  -6971,   5056,  -1591,  -2362,   5591,  -7106,
	  6442,  -3804,      0,   3804,  -6442,   7106,  -5591,   2362,   1591,  -5056,
	  6971,  -6749,   4458,   -801,  -3103,   6055,  -7151,   6055,  -3103,   -801,
	  4458,  -6749,   6971,  -5056,   1591,   2362,  -5591,   7106,  -6442,   3804,
	  5056,  -6322,   4028,   -801,  -2612,   5420,  -6971,   6907,  -5242,   2362,
	  1066,  -4246,   6442,  -7146,   6193,  -3804,    534,   2859,  -5591,   7026,
	 -6833,   5056,  -2108,  -1329,   4458,  -6554,   7131,  -6055,   3575,   -267,
	 -3103,   5753,  -7071,   6749,  -4864,   1851,   1591,  -4664,   6656,  -7106,
	  5908,  -3341,   5056,  -6554,   4864,  -2362,   -534,   3341,  -5591,   6907,
	 -7071,   6055,  -4028,   1329,   1591,  -4246,   6193,  -7106,   6833,  -5420,
	  3103,   -267,  -2612,   5056,  -6656,   7146,  -6442,   4664,  -2108,   -801,
	  3575,  -5753,   6971,  -7026,   5908,  -3804,   1066,   1851,  -4458,   6322,
	 -7131,   6749,  -5242,   2859,   5056,  -6749,   5591,  -3804,   1591,    801,
	 -3103,   5056,  -6442,   7106,  -6971,   6055,  -4458,   2362,      0,  -2362,
	  4458,  -6055,   6971,  -7106,   6442,  -5056,   3103,   -801,  -1591,   3804,
	 -5591,   6749,  -7151,   6749,  -5591,   3804,  -1591,   -801,   3103,  -5056,
	  6442,  -7106,   6971,  -6055,   4458,  -2362,   5056,  -6907,   6193,  -5056,
	  3575,  -1851,      0,   1851,  -3575,   5056,  -6193,   6907,  -7151,   6907,
	 -6193,   5056,  -3575,   1851,      0,  -1851,   3575,  -5056,   6193,  -6907,
	  7151,  -6907,   6193,  -5056,   3575,  -1851,      0,   1851,  -3575,   5056,
	 -6193,   6907,  -7151,   6907,  -6193,   5056,  -3575,   1851,   5056,  -7026,
	  6656,  -6055,   5242,  -4246,   3103,  -1851,    534,    801,  -2108,   3341,
	 -4458,   5420,  -6193,   6749,  -7071,   7146,  -6971,   6554,  -5908,   5056,
	 -4028,   2859,  -1591,    267,   1066,  -2362,   3575,  -4664,   5591,  -6322,
	  6833,  -7106,   7131,  -6907,   6442,  -5753,   4864,  -3804,   2612,  -1329,
	  5056,  -7106,   6971,  -6749,   6442,  -6055,   5591,  -5056,   4458,  -3804,
	  3103,  -2362,   1591,   -801,      0,    801,  -1591,   2362,  -3103,   3804,
	 -4458,   5056,  -5591,   6055,  -6442,   6749,  -6971,   7106,  -7151,   7106,
	 -6971,   6749,  -6442,   6055,  -5591,   5056,  -4458,   3804,  -3103,   2362,
	 -1591,    801,   5056,  -7146,   7131,  -7106,   7071,  -7026,   6971,  -6907,
	  6833,  -6749,   6656,  -6554,   6442,  -6322,   6193,  -6055,   5908,  -5753,
	  5591,  -5420,   5242,  -5056,   4864,  -4664,   4458,  -4246,   4028,  -3804,
	  3575,  -3341,   3103,  -2859,   2612,  -2362,   2108,  -1851,   1591,  -1329,
	  1066,   -801,    534,   -267,
};
