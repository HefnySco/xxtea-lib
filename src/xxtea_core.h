// ---------------------------------------------------------------------------
// Created by Abhijit Bose (boseji) on 04/03/16.
// Copyright 2016 - Under creative commons license 3.0:
//        Attribution-ShareAlike CC BY-SA
//
// This software is furnished "as is", without technical support, and with no 
// warranty, express or implied, as to its usefulness for any purpose.
//
// Thread Safe: No
// Extendable: Yes
//
// @file xxtea_internal.h
//
// @brief 
// Library to provide the XXTEA Encryption and Decryption Facility both for
// Raw input and Strings
// 
// @version API 2.0.0 - Program now In main to get included for RAW operations
//              1.2.1 - Fixed the Signed Arithmetic Problem
//              1.0.0 - Initial Release
//
//
// @author boseji - salearj@hotmail.com
// ---------------------------------------------------------------------------
#ifndef _XXTEA_CORE_H_
#define _XXTEA_CORE_H_
#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>

// -- Original Logic has Signed Arithmetic Problem for smaller Processors
//void dtea_fn(uint32_t *v, int32_t n, uint32_t const key[4]);

// new function with Signed Arithmetic Fixed
void dtea_fn1(uint32_t *v, int32_t n, uint32_t const key[4]);

// Easier Caller
#define xxtea_fn dtea_fn1
#ifdef __cplusplus
}
#endif
#endif /* _XXTEA_CORE_H_ */