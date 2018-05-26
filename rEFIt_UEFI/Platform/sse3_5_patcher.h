CONST UINT8 sse3_5_patcher[] = { 
  0x55, 0x48, 0x89, 0xe5, 0x48, 0x89, 0xf0, 0x48,
  0x89, 0xfe, 0x48, 0x89, 0xc7, 0x48, 0x29, 0xf0, 0x48, 0x39, 0xd0, 0x72,
  0x52, 0x48, 0x83, 0xfa, 0x50, 0x76, 0x1d, 0xeb, 0x4f, 0x90, 0x90, 0x90,
  0x55, 0x48, 0x89, 0xe5, 0x49, 0x89, 0xfb, 0x48, 0x89, 0xf8, 0x48, 0x29,
  0xf0, 0x48, 0x39, 0xd0, 0x72, 0x35, 0x48, 0x83, 0xfa, 0x50, 0x77, 0x34,
  0x89, 0xd1, 0xc1, 0xe9, 0x02, 0x74, 0x10, 0x8b, 0x06, 0x48, 0x83, 0xc6,
  0x04, 0x89, 0x07, 0x48, 0x83, 0xc7, 0x04, 0xff, 0xc9, 0x75, 0xf0, 0x83,
  0xe2, 0x03, 0x74, 0x0e, 0x8a, 0x06, 0x48, 0xff, 0xc6, 0x88, 0x07, 0x48,
  0xff, 0xc7, 0xff, 0xca, 0x75, 0xf2, 0x4c, 0x89, 0xd8, 0x5d, 0xc3, 0xe9,
  0xbd, 0x04, 0x00, 0x00, 0x48, 0x81, 0xfa, 0x00, 0xd0, 0x07, 0x00, 0x0f,
  0x83, 0x7f, 0x00, 0x00, 0x00, 0x89, 0xf9, 0xf7, 0xd9, 0x83, 0xe1, 0x0f,
  0x74, 0x04, 0x29, 0xca, 0xf3, 0xa4, 0x48, 0x89, 0xd1, 0x89, 0xf0, 0x83,
  0xe2, 0x3f, 0x83, 0xe0, 0x0f, 0x48, 0x83, 0xe1, 0xc0, 0x49, 0xb8, 0x80,
  0x07, 0xe0, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x49, 0x81, 0xc0, 0xb8, 0x00,
  0x00, 0x00, 0x48, 0x01, 0xce, 0x48, 0x01, 0xcf, 0x41, 0x8b, 0x04, 0x80,
  0x48, 0xf7, 0xd9, 0x4c, 0x01, 0xc0, 0xff, 0xe0, 0x66, 0x00, 0x00, 0x00,
  0xb1, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00,
  0x71, 0x01, 0x00, 0x00, 0xb1, 0x01, 0x00, 0x00, 0xf1, 0x01, 0x00, 0x00,
  0x31, 0x02, 0x00, 0x00, 0x71, 0x02, 0x00, 0x00, 0xb1, 0x02, 0x00, 0x00,
  0xf1, 0x02, 0x00, 0x00, 0x31, 0x03, 0x00, 0x00, 0x71, 0x03, 0x00, 0x00,
  0xb1, 0x03, 0x00, 0x00, 0xf1, 0x03, 0x00, 0x00, 0x31, 0x04, 0x00, 0x00,
  0x41, 0x53, 0x48, 0xb8, 0x00, 0x12, 0xe0, 0xff, 0xff, 0x7f, 0x00, 0x00,
  0xff, 0xd0, 0x58, 0x5d, 0xc3, 0x48, 0x01, 0xce, 0x48, 0x01, 0xcf, 0xf7,
  0xd9, 0x09, 0xd1, 0xfc, 0xc1, 0xe9, 0x02, 0xf3, 0xa5, 0xe9, 0x31, 0xff,
  0xff, 0xff, 0x81, 0xf9, 0x0f, 0xc0, 0xff, 0xff, 0x7e, 0xe3, 0xeb, 0x08,
  0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x66, 0x0f, 0x6f, 0x04,
  0x0e, 0x66, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0x66, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0x66, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0xcf, 0xfe, 0xff, 0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
  0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3,
  0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66,
  0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f,
  0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83,
  0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x8f, 0xfe, 0xff, 0xff, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f,
  0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f,
  0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c,
  0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c,
  0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x4f, 0xfe, 0xff,
  0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04,
  0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0x0f, 0xfe, 0xff, 0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
  0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3,
  0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66,
  0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f,
  0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83,
  0xc1, 0x40, 0x75, 0xcc, 0xe9, 0xcf, 0xfd, 0xff, 0xff, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f,
  0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f,
  0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c,
  0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c,
  0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x8f, 0xfd, 0xff,
  0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04,
  0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0x4f, 0xfd, 0xff, 0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
  0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3,
  0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66,
  0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f,
  0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83,
  0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x0f, 0xfd, 0xff, 0xff, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f,
  0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f,
  0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c,
  0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c,
  0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc, 0xe9, 0xcf, 0xfc, 0xff,
  0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04,
  0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0x8f, 0xfc, 0xff, 0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
  0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3,
  0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66,
  0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f,
  0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83,
  0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x4f, 0xfc, 0xff, 0xff, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f,
  0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f,
  0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c,
  0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c,
  0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x0f, 0xfc, 0xff,
  0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04,
  0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0xcf, 0xfb, 0xff, 0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
  0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3,
  0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66,
  0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f,
  0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83,
  0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x8f, 0xfb, 0xff, 0xff, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04, 0x0e, 0xf3, 0x0f, 0x6f,
  0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0x20, 0xf3, 0x0f, 0x6f,
  0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f, 0x66, 0x0f, 0x7f, 0x4c,
  0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20, 0x66, 0x0f, 0x7f, 0x5c,
  0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc, 0xe9, 0x4f, 0xfb, 0xff,
  0xff, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0xf3, 0x0f, 0x6f, 0x04,
  0x0e, 0xf3, 0x0f, 0x6f, 0x4c, 0x0e, 0x10, 0xf3, 0x0f, 0x6f, 0x54, 0x0e,
  0x20, 0xf3, 0x0f, 0x6f, 0x5c, 0x0e, 0x30, 0x66, 0x0f, 0x7f, 0x04, 0x0f,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0x10, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0x20,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0x30, 0x48, 0x83, 0xc1, 0x40, 0x75, 0xcc,
  0xe9, 0x0f, 0xfb, 0xff, 0xff, 0x48, 0x01, 0xd6, 0x48, 0x01, 0xd7, 0x48,
  0x83, 0xfa, 0x50, 0x77, 0x31, 0x89, 0xd1, 0xc1, 0xe9, 0x03, 0x74, 0x12,
  0x48, 0x83, 0xee, 0x08, 0x48, 0x8b, 0x06, 0x48, 0x83, 0xef, 0x08, 0x48,
  0x89, 0x07, 0xff, 0xc9, 0x75, 0xee, 0x83, 0xe2, 0x07, 0x74, 0x0e, 0x48,
  0xff, 0xce, 0x8a, 0x06, 0x48, 0xff, 0xcf, 0x88, 0x07, 0xff, 0xca, 0x75,
  0xf2, 0x4c, 0x89, 0xd8, 0x5d, 0xc3, 0x89, 0xf9, 0x83, 0xe1, 0x0f, 0x74,
  0x11, 0x48, 0x29, 0xca, 0x48, 0xff, 0xce, 0x8a, 0x06, 0x48, 0xff, 0xcf,
  0x88, 0x07, 0xff, 0xc9, 0x75, 0xf2, 0x48, 0x89, 0xd1, 0x83, 0xe2, 0x3f,
  0x48, 0x83, 0xe1, 0xc0, 0x48, 0x29, 0xce, 0x48, 0x29, 0xcf, 0xf7, 0xc6,
  0x0f, 0x00, 0x00, 0x00, 0x75, 0x3b, 0x66, 0x0f, 0x6f, 0x44, 0x0e, 0xf0,
  0x66, 0x0f, 0x6f, 0x4c, 0x0e, 0xe0, 0x66, 0x0f, 0x6f, 0x54, 0x0e, 0xd0,
  0x66, 0x0f, 0x6f, 0x5c, 0x0e, 0xc0, 0x66, 0x0f, 0x7f, 0x44, 0x0f, 0xf0,
  0x66, 0x0f, 0x7f, 0x4c, 0x0f, 0xe0, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0xd0,
  0x66, 0x0f, 0x7f, 0x5c, 0x0f, 0xc0, 0x48, 0x83, 0xe9, 0x40, 0x75, 0xca,
  0xe9, 0x64, 0xff, 0xff, 0xff, 0xf3, 0x0f, 0x6f, 0x44, 0x0e, 0xf0, 0xf3,
  0x0f, 0x6f, 0x4c, 0x0e, 0xe0, 0xf3, 0x0f, 0x6f, 0x54, 0x0e, 0xd0, 0xf3,
  0x0f, 0x6f, 0x5c, 0x0e, 0xc0, 0x66, 0x0f, 0x7f, 0x44, 0x0f, 0xf0, 0x66,
  0x0f, 0x7f, 0x4c, 0x0f, 0xe0, 0x66, 0x0f, 0x7f, 0x54, 0x0f, 0xd0, 0x66,
  0x0f, 0x7f, 0x5c, 0x0f, 0xc0, 0x48, 0x83, 0xe9, 0x40, 0x75, 0xca, 0xe9,
  0x29, 0xff, 0xff, 0xff
};
