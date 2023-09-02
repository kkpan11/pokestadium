#include <ultra64.h>
#include <leo.h>
#include "libleo/internal.h"

// file of magic tables used for libleo.

// Firmware revision of libleo library.
const char LEOfirmware_rev[] = "B014A26";

const u8 LEOBYTE_TBL1[9] = { 0xE8, 0xD8, 0xD0, 0xC0, 0xB0, 0xA0, 0x90, 0x80, 0x70 };

const u16 LEOBYTE_TBL2[9] = { 0x4D08, 0x47B8, 0x4510, 0x3FC0, 0x3A70, 0x3520, 0x2FD0, 0x2A80, 0x2530 };

const u16 LEOVZONE_TBL[][0x10] = {
    { 0x0124, 0x0248, 0x035A, 0x047E, 0x05A2, 0x06B4, 0x07C6, 0x08D8, 0x09EA, 0x0AB6, 0x0B82, 0x0C94, 0x0DA6, 0x0EB8,
      0x0FCA, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x06A2, 0x07C6, 0x08D8, 0x09EA, 0x0AFC, 0x0BC8, 0x0C94, 0x0DA6, 0x0EB8,
      0x0FCA, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x0690, 0x07A2, 0x08C6, 0x09EA, 0x0AFC, 0x0C0E, 0x0CDA, 0x0DA6, 0x0EB8,
      0x0FCA, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x0690, 0x07A2, 0x08B4, 0x09C6, 0x0AEA, 0x0C0E, 0x0D20, 0x0DEC, 0x0EB8,
      0x0FCA, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x0690, 0x07A2, 0x08B4, 0x09C6, 0x0AD8, 0x0BEA, 0x0D0E, 0x0E32, 0x0EFE,
      0x0FCA, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x0690, 0x07A2, 0x086E, 0x0980, 0x0A92, 0x0BA4, 0x0CB6, 0x0DC8, 0x0EEC,
      0x1010, 0x10DC },
    { 0x0124, 0x0248, 0x035A, 0x046C, 0x057E, 0x0690, 0x07A2, 0x086E, 0x093A, 0x0A4C, 0x0B5E, 0x0C70, 0x0D82, 0x0E94,
      0x0FB8, 0x10DC },
};

const u16 LEOZONE_SCYL_TBL[16] = { 0x0000, 0x009E, 0x013C, 0x01D1, 0x0266, 0x02FB, 0x0390, 0x0425,
                                   0x0091, 0x012F, 0x01C4, 0x0259, 0x02EE, 0x0383, 0x0418, 0x048A };

const u8 LEOVZONE_PZONEHD_TBL[][0x10] = {
    { 0x00, 0x01, 0x02, 0x09, 0x08, 0x03, 0x04, 0x05, 0x06, 0x07, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A },
    { 0x00, 0x01, 0x02, 0x03, 0x0A, 0x09, 0x08, 0x04, 0x05, 0x06, 0x07, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x0B, 0x0A, 0x09, 0x08, 0x05, 0x06, 0x07, 0x0F, 0x0E, 0x0D, 0x0C },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x06, 0x07, 0x0F, 0x0E, 0x0D },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x0F, 0x0E },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x0F },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08 }
};

const u16 LEOZONE_OUTERCYL_TBL[8] = { 0x0000, 0x009E, 0x013C, 0x01D1, 0x0266, 0x02FB, 0x0390, 0x0425 };

const u16 LEORAM_START_LBA[7] = { 0x05A2, 0x07C6, 0x09EA, 0x0C0E, 0x0E32, 0x1010, 0x10DC };

const s32 LEORAM_BYTE[7] = { 0x024A9DC0, 0x01C226C0, 0x01450F00, 0x00D35680, 0x006CFD40, 0x001DA240, 0x00000000 };
