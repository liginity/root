/* @(#)root/base:$Id$ */

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_Stipples
#define ROOT_Stipples

#include <ROOT/RConfig.hxx>

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Stipples                                                             //
//                                                                      //
//  Data to create fill area interior style.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#if !defined(R__WIN32)

const unsigned char gStipples[26][32] = {
   {
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55,
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55,
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55
   },  //0
   {
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55,
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55,
      0xaa, 0xaa, 0x55, 0x55, 0xaa, 0xaa, 0x55, 0x55
   },  //1
   {
      0x44, 0x44, 0x11, 0x11, 0x44, 0x44, 0x11, 0x11, 0x44, 0x44, 0x11, 0x11,
      0x44, 0x44, 0x11, 0x11, 0x44, 0x44, 0x11, 0x11, 0x44, 0x44, 0x11, 0x11,
      0x44, 0x44, 0x11, 0x11, 0x44, 0x44, 0x11, 0x11
   },  //2
   {
      0x00, 0x00, 0x44, 0x44, 0x00, 0x00, 0x11, 0x11, 0x00, 0x00, 0x44, 0x44,
      0x00, 0x00, 0x11, 0x11, 0x00, 0x00, 0x44, 0x44, 0x00, 0x00, 0x11, 0x11,
      0x00, 0x00, 0x44, 0x44, 0x00, 0x00, 0x11, 0x11
   }, //3
   {
      0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04,
      0x02, 0x02, 0x01, 0x01, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10,
      0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01
   }, //4
   {
      0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04,
      0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x01, 0x01,
      0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10
   }, //5
   {
      0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
      0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
      0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44
   }, //6
   {
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff
   }, //7
   {
      0x11, 0x11, 0xb8, 0xb8, 0x7c, 0x7c, 0x3a, 0x3a, 0x11, 0x11, 0xa3, 0xa3,
      0xc7, 0xc7, 0x8b, 0x8b, 0x11, 0x11, 0xb8, 0xb8, 0x7c, 0x7c, 0x3a, 0x3a,
      0x11, 0x11, 0xa3, 0xa3, 0xc7, 0xc7, 0x8b, 0x8b
   }, //8
   {
      0x10, 0x10, 0x10, 0x10, 0x28, 0x28, 0xc7, 0xc7, 0x01, 0x01, 0x01, 0x01,
      0x82, 0x82, 0x7c, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x28, 0x28, 0xc7, 0xc7,
      0x01, 0x01, 0x01, 0x01, 0x82, 0x82, 0x7c, 0x7c
   }, //9
   {
      0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01,
      0x01, 0x01, 0xff, 0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xff, 0xff,
      0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff
   }, //10
   {
      0x08, 0x08, 0x49, 0x49, 0x2a, 0x2a, 0x1c, 0x1c, 0x2a, 0x2a, 0x49, 0x49,
      0x08, 0x08, 0x00, 0x00, 0x80, 0x80, 0x94, 0x94, 0xa2, 0xa2, 0xc1, 0xc1,
      0xa2, 0xa2, 0x94, 0x94, 0x80, 0x80, 0x00, 0x00
   }, //11
   {
      0x1c, 0x1c, 0x22, 0x22, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x22, 0x22,
      0x1c, 0x1c, 0x00, 0x00, 0xc1, 0xc1, 0x22, 0x22, 0x14, 0x14, 0x14, 0x14,
      0x14, 0x14, 0x22, 0x22, 0xc1, 0xc1, 0x00, 0x00
   }, //12
   {
      0x01, 0x01, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10, 0x28, 0x28,
      0x44, 0x44, 0x82, 0x82, 0x01, 0x01, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28,
      0x10, 0x10, 0x28, 0x28, 0x44, 0x44, 0x82, 0x82
   }, //13
   {
      0xff, 0xff, 0x11, 0x10, 0x11, 0x10, 0x11, 0x10, 0xf1, 0x1f, 0x11, 0x11,
      0x11, 0x11, 0x11, 0x11, 0xff, 0x11, 0x01, 0x11, 0x01, 0x11, 0x01, 0x11,
      0xff, 0xff, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10
   }, //14
   {
      0x22, 0x22, 0x55, 0x55, 0x22, 0x22, 0x00, 0x00, 0x88, 0x88, 0x55, 0x55,
      0x88, 0x88, 0x00, 0x00, 0x22, 0x22, 0x55, 0x55, 0x22, 0x22, 0x00, 0x00,
      0x88, 0x88, 0x55, 0x55, 0x88, 0x88, 0x00, 0x00
   }, //15
   {
      0x0e, 0x0e, 0x11, 0x11, 0xe0, 0xe0, 0x00, 0x00, 0x0e, 0x0e, 0x11, 0x11,
      0xe0, 0xe0, 0x00, 0x00, 0x0e, 0x0e, 0x11, 0x11, 0xe0, 0xe0, 0x00, 0x00,
      0x0e, 0x0e, 0x11, 0x11, 0xe0, 0xe0, 0x00, 0x00
   }, //16
   {
      0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x00, 0x00, 0x44, 0x44, 0x22, 0x22,
      0x11, 0x11, 0x00, 0x00, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x00, 0x00,
      0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x00, 0x00
   }, //17
   {
      0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x00, 0x00, 0x11, 0x11, 0x22, 0x22,
      0x44, 0x44, 0x00, 0x00, 0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x00, 0x00,
      0x11, 0x11, 0x22, 0x22, 0x44, 0x44, 0x00, 0x00
   }, //18
   {
      0xe0, 0x03, 0x98, 0x0c, 0x84, 0x10, 0x42, 0x21, 0x42, 0x21, 0x21, 0x42,
      0x19, 0x4c, 0x07, 0xf0, 0x19, 0x4c, 0x21, 0x42, 0x42, 0x21, 0x42, 0x21,
      0x84, 0x10, 0x98, 0x0c, 0xe0, 0x03, 0x80, 0x00
   }, //19
   {
      0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x22, 0x44, 0x44,
      0x44, 0x44, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
      0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44
   }, //20
   {
      0xf1, 0xf1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0x1f, 0x01, 0x01,
      0x01, 0x01, 0x01, 0x01, 0xf1, 0xf1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
      0x1f, 0x1f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
   }, //21
   {
      0x8f, 0x8f, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xf8, 0xf8, 0x80, 0x80,
      0x80, 0x80, 0x80, 0x80, 0x8f, 0x8f, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
      0xf8, 0xf8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
   }, //22
   {
      0xAA, 0xAA, 0x55, 0x55, 0x6a, 0x6a, 0x74, 0x74, 0x78, 0x78, 0x74, 0x74,
      0x6a, 0x6a, 0x55, 0x55, 0xAA, 0xAA, 0x55, 0x55, 0x6a, 0x6a, 0x74, 0x74,
      0x78, 0x78, 0x74, 0x74, 0x6a, 0x6a, 0x55, 0x55
   }, //23
   {
      0x80, 0x00, 0xc0, 0x00, 0xea, 0xa8, 0xd5, 0x54, 0xea, 0xa8, 0xd5, 0x54,
      0xeb, 0xe8, 0xd5, 0xd4, 0xe8, 0xe8, 0xd4, 0xd4, 0xa8, 0xe8, 0x54, 0xd5,
      0xa8, 0xea, 0x54, 0xd5, 0xfc, 0xff, 0xfe, 0xff
   }, //24
   {
      0x80, 0x00, 0xc0, 0x00, 0xe0, 0x00, 0xf0, 0x00, 0xff, 0xf0, 0xff, 0xf0,
      0xfb, 0xf0, 0xf9, 0xf0, 0xf8, 0xf0, 0xf8, 0x70, 0xf8, 0x30, 0xff, 0xf0,
      0xff, 0xf8, 0xff, 0xfc, 0xff, 0xfe, 0xff, 0xff
   } //25
};

#else

const unsigned char gStipples[26][32] = {
   {
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55,
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55,
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55
   },  //0
   {
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55,
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55,
      ~0xaa, ~0xaa, ~0x55, ~0x55, ~0xaa, ~0xaa, ~0x55, ~0x55
   },  //1
   {
      ~0x44, ~0x44, ~0x11, ~0x11, ~0x44, ~0x44, ~0x11, ~0x11, ~0x44, ~0x44, ~0x11, ~0x11,
      ~0x44, ~0x44, ~0x11, ~0x11, ~0x44, ~0x44, ~0x11, ~0x11, ~0x44, ~0x44, ~0x11, ~0x11,
      ~0x44, ~0x44, ~0x11, ~0x11, ~0x44, ~0x44, ~0x11, ~0x11
   },  //2
   {
      ~0x00, ~0x00, ~0x44, ~0x44, ~0x00, ~0x00, ~0x11, ~0x11, ~0x00, ~0x00, ~0x44, ~0x44,
      ~0x00, ~0x00, ~0x11, ~0x11, ~0x00, ~0x00, ~0x44, ~0x44, ~0x00, ~0x00, ~0x11, ~0x11,
      ~0x00, ~0x00, ~0x44, ~0x44, ~0x00, ~0x00, ~0x11, ~0x11
   }, //3
   {
      ~0x80, ~0x80, ~0x40, ~0x40, ~0x20, ~0x20, ~0x10, ~0x10, ~0x08, ~0x08, ~0x04, ~0x04,
      ~0x02, ~0x02, ~0x01, ~0x01, ~0x80, ~0x80, ~0x40, ~0x40, ~0x20, ~0x20, ~0x10, ~0x10,
      ~0x08, ~0x08, ~0x04, ~0x04, ~0x02, ~0x02, ~0x01, ~0x01
   }, //4
   {
      ~0x20, ~0x20, ~0x40, ~0x40, ~0x80, ~0x80, ~0x01, ~0x01, ~0x02, ~0x02, ~0x04, ~0x04,
      ~0x08, ~0x08, ~0x10, ~0x10, ~0x20, ~0x20, ~0x40, ~0x40, ~0x80, ~0x80, ~0x01, ~0x01,
      ~0x02, ~0x02, ~0x04, ~0x04, ~0x08, ~0x08, ~0x10, ~0x10
   }, //5
   {
      ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44,
      ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44,
      ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44
   }, //6
   {
      ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0xff, ~0xff, ~0x00, ~0x00, ~0x00, ~0x00,
      ~0x00, ~0x00, ~0xff, ~0xff, ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0xff, ~0xff,
      ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0x00, ~0xff, ~0xff
   }, //7
   {
      ~0x11, ~0x11, ~0xb8, ~0xb8, ~0x7c, ~0x7c, ~0x3a, ~0x3a, ~0x11, ~0x11, ~0xa3, ~0xa3,
      ~0xc7, ~0xc7, ~0x8b, ~0x8b, ~0x11, ~0x11, ~0xb8, ~0xb8, ~0x7c, ~0x7c, ~0x3a, ~0x3a,
      ~0x11, ~0x11, ~0xa3, ~0xa3, ~0xc7, ~0xc7, ~0x8b, ~0x8b
   }, //8
   {
      ~0x10, ~0x10, ~0x10, ~0x10, ~0x28, ~0x28, ~0xc7, ~0xc7, ~0x01, ~0x01, ~0x01, ~0x01,
      ~0x82, ~0x82, ~0x7c, ~0x7c, ~0x10, ~0x10, ~0x10, ~0x10, ~0x28, ~0x28, ~0xc7, ~0xc7,
      ~0x01, ~0x01, ~0x01, ~0x01, ~0x82, ~0x82, ~0x7c, ~0x7c
   }, //9
   {
      ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0xff, ~0xff, ~0x01, ~0x01, ~0x01, ~0x01,
      ~0x01, ~0x01, ~0xff, ~0xff, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0xff, ~0xff,
      ~0x01, ~0x01, ~0x01, ~0x01, ~0x01, ~0x01, ~0xff, ~0xff
   }, //10
   {
      ~0x08, ~0x08, ~0x49, ~0x49, ~0x2a, ~0x2a, ~0x1c, ~0x1c, ~0x2a, ~0x2a, ~0x49, ~0x49,
      ~0x08, ~0x08, ~0x00, ~0x00, ~0x80, ~0x80, ~0x94, ~0x94, ~0xa2, ~0xa2, ~0xc1, ~0xc1,
      ~0xa2, ~0xa2, ~0x94, ~0x94, ~0x80, ~0x80, ~0x00, ~0x00
   }, //11
   {
      ~0x1c, ~0x1c, ~0x22, ~0x22, ~0x41, ~0x41, ~0x41, ~0x41, ~0x41, ~0x41, ~0x22, ~0x22,
      ~0x1c, ~0x1c, ~0x00, ~0x00, ~0xc1, ~0xc1, ~0x22, ~0x22, ~0x14, ~0x14, ~0x14, ~0x14,
      ~0x14, ~0x14, ~0x22, ~0x22, ~0xc1, ~0xc1, ~0x00, ~0x00
   }, //12
   {
      ~0x01, ~0x01, ~0x82, ~0x82, ~0x44, ~0x44, ~0x28, ~0x28, ~0x10, ~0x10, ~0x28, ~0x28,
      ~0x44, ~0x44, ~0x82, ~0x82, ~0x01, ~0x01, ~0x82, ~0x82, ~0x44, ~0x44, ~0x28, ~0x28,
      ~0x10, ~0x10, ~0x28, ~0x28, ~0x44, ~0x44, ~0x82, ~0x82
   }, //13
   {
      ~0xff, ~0xff, ~0x11, ~0x10, ~0x11, ~0x10, ~0x11, ~0x10, ~0xf1, ~0x1f, ~0x11, ~0x11,
      ~0x11, ~0x11, ~0x11, ~0x11, ~0xff, ~0x11, ~0x01, ~0x11, ~0x01, ~0x11, ~0x01, ~0x11,
      ~0xff, ~0xff, ~0x01, ~0x10, ~0x01, ~0x10, ~0x01, ~0x10
   }, //14
   {
      ~0x22, ~0x22, ~0x55, ~0x55, ~0x22, ~0x22, ~0x00, ~0x00, ~0x88, ~0x88, ~0x55, ~0x55,
      ~0x88, ~0x88, ~0x00, ~0x00, ~0x22, ~0x22, ~0x55, ~0x55, ~0x22, ~0x22, ~0x00, ~0x00,
      ~0x88, ~0x88, ~0x55, ~0x55, ~0x88, ~0x88, ~0x00, ~0x00
   }, //15
   {
      ~0x0e, ~0x0e, ~0x11, ~0x11, ~0xe0, ~0xe0, ~0x00, ~0x00, ~0x0e, ~0x0e, ~0x11, ~0x11,
      ~0xe0, ~0xe0, ~0x00, ~0x00, ~0x0e, ~0x0e, ~0x11, ~0x11, ~0xe0, ~0xe0, ~0x00, ~0x00,
      ~0x0e, ~0x0e, ~0x11, ~0x11, ~0xe0, ~0xe0, ~0x00, ~0x00
   }, //16
   {
      ~0x44, ~0x44, ~0x22, ~0x22, ~0x11, ~0x11, ~0x00, ~0x00, ~0x44, ~0x44, ~0x22, ~0x22,
      ~0x11, ~0x11, ~0x00, ~0x00, ~0x44, ~0x44, ~0x22, ~0x22, ~0x11, ~0x11, ~0x00, ~0x00,
      ~0x44, ~0x44, ~0x22, ~0x22, ~0x11, ~0x11, ~0x00, ~0x00
   }, //17
   {
      ~0x11, ~0x11, ~0x22, ~0x22, ~0x44, ~0x44, ~0x00, ~0x00, ~0x11, ~0x11, ~0x22, ~0x22,
      ~0x44, ~0x44, ~0x00, ~0x00, ~0x11, ~0x11, ~0x22, ~0x22, ~0x44, ~0x44, ~0x00, ~0x00,
      ~0x11, ~0x11, ~0x22, ~0x22, ~0x44, ~0x44, ~0x00, ~0x00
   }, //18
   {
      ~0xe0, ~0x03, ~0x98, ~0x0c, ~0x84, ~0x10, ~0x42, ~0x21, ~0x42, ~0x21, ~0x21, ~0x42,
      ~0x19, ~0x4c, ~0x07, ~0xf0, ~0x19, ~0x4c, ~0x21, ~0x42, ~0x42, ~0x21, ~0x42, ~0x21,
      ~0x84, ~0x10, ~0x98, ~0x0c, ~0xe0, ~0x03, ~0x80, ~0x00
   }, //19
   {
      ~0x22, ~0x22, ~0x11, ~0x11, ~0x11, ~0x11, ~0x11, ~0x11, ~0x22, ~0x22, ~0x44, ~0x44,
      ~0x44, ~0x44, ~0x44, ~0x44, ~0x22, ~0x22, ~0x11, ~0x11, ~0x11, ~0x11, ~0x11, ~0x11,
      ~0x22, ~0x22, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44, ~0x44
   }, //20
   {
      ~0xf1, ~0xf1, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0x1f, ~0x1f, ~0x01, ~0x01,
      ~0x01, ~0x01, ~0x01, ~0x01, ~0xf1, ~0xf1, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10, ~0x10,
      ~0x1f, ~0x1f, ~0x01, ~0x01, ~0x01, ~0x01, ~0x01, ~0x01
   }, //21
   {
      ~0x8f, ~0x8f, ~0x08, ~0x08, ~0x08, ~0x08, ~0x08, ~0x08, ~0xf8, ~0xf8, ~0x80, ~0x80,
      ~0x80, ~0x80, ~0x80, ~0x80, ~0x8f, ~0x8f, ~0x08, ~0x08, ~0x08, ~0x08, ~0x08, ~0x08,
      ~0xf8, ~0xf8, ~0x80, ~0x80, ~0x80, ~0x80, ~0x80, ~0x80
   }, //22
   {
      ~0xAA, ~0xAA, ~0x55, ~0x55, ~0x6a, ~0x6a, ~0x74, ~0x74, ~0x78, ~0x78, ~0x74, ~0x74,
      ~0x6a, ~0x6a, ~0x55, ~0x55, ~0xAA, ~0xAA, ~0x55, ~0x55, ~0x6a, ~0x6a, ~0x74, ~0x74,
      ~0x78, ~0x78, ~0x74, ~0x74, ~0x6a, ~0x6a, ~0x55, ~0x55
   }, //23
   {
      ~0x80, ~0x00, ~0xc0, ~0x00, ~0xea, ~0xa8, ~0xd5, ~0x54, ~0xea, ~0xa8, ~0xd5, ~0x54,
      ~0xeb, ~0xe8, ~0xd5, ~0xd4, ~0xe8, ~0xe8, ~0xd4, ~0xd4, ~0xa8, ~0xe8, ~0x54, ~0xd5,
      ~0xa8, ~0xea, ~0x54, ~0xd5, ~0xfc, ~0xff, ~0xfe, ~0xff
   }, //24
   {
      ~0x80, ~0x00, ~0xc0, ~0x00, ~0xe0, ~0x00, ~0xf0, ~0x00, ~0xff, ~0xf0, ~0xff, ~0xf0,
      ~0xfb, ~0xf0, ~0xf9, ~0xf0, ~0xf8, ~0xf0, ~0xf8, ~0x70, ~0xf8, ~0x30, ~0xff, ~0xf0,
      ~0xff, ~0xf8, ~0xff, ~0xfc, ~0xff, ~0xfe, ~0xff, ~0xff
   } //25
};

#endif

#endif
