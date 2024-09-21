#include "32D10.h"
#include "334D0.h"
#include "src/util.h"
#include "src/fragments/31/fragment31.h"

extern s16 D_800AF778[4];
extern s16 D_800AF780[4];
extern s16 D_800AF788[4];
extern s16 D_800AF790[4];
extern s16 D_800AF798[4];
extern s16 D_800AF7A0[4];
extern s16 D_800AF7AE;
extern s16 D_800AF7C0[];

void func_80032110(u8 arg0, s16 arg1) {
    D_800AF778[arg0] = 0x167 - ((arg1 % 10) * 0x24);
    D_800AF780[arg0] = 0x167 - (((arg1 / 10) % 10) * 0x24);
    D_800AF788[arg0] = 0x167 - (((arg1 / 100) % 10) * 0x24);
}

void func_80032244(u8 arg0, s16 arg1) {
    s16 tmp;
    s16 tmp2;

    D_800AF790[arg0] = 0x167 - ((arg1 % 10) * 0x24);
    D_800AF798[arg0] = 0x167 - (((arg1 / 10) % 10) * 0x24);
    D_800AF7A0[arg0] = 0x167 - (((arg1 / 100) % 10) * 0x24);

    tmp2 = D_800AF790[arg0];
    tmp = D_800AF778[arg0];
    if (((tmp2 < 0x5A) && (tmp >= 0x10F)) || ((tmp < 0x5A) && (tmp2 >= 0x10F))) {
        if (tmp < tmp2) {
            D_800AF778[arg0] -= 6;
        }

        if (tmp2 < tmp) {
            D_800AF778[arg0] += 6;
        }
    } else {
        if (tmp < tmp2) {
            D_800AF778[arg0] += 6;
        }

        if (tmp2 < tmp) {
            D_800AF778[arg0] -= 6;
        }
    }

    if (D_800AF778[arg0] < 0) {
        D_800AF778[arg0] += 0x168;
    }

    if (D_800AF778[arg0] >= 0x168) {
        D_800AF778[arg0] -= 0x168;
    }

    tmp2 = D_800AF798[arg0];
    tmp = D_800AF780[arg0];
    if (((tmp2 < 0x5A) && (tmp >= 0x10F)) || ((tmp < 0x5A) && (tmp2 >= 0x10F))) {
        if (tmp < tmp2) {
            D_800AF780[arg0] -= 6;
        }

        if (tmp2 < tmp) {
            D_800AF780[arg0] += 6;
        }
    } else {
        if (tmp < tmp2) {
            D_800AF780[arg0] += 6;
        }

        if (tmp2 < tmp) {
            D_800AF780[arg0] -= 6;
        }
    }

    if (D_800AF780[arg0] < 0) {
        D_800AF780[arg0] += 0x168;
    }

    if (D_800AF780[arg0] >= 0x168) {
        D_800AF780[arg0] -= 0x168;
    }

    tmp2 = D_800AF7A0[arg0];
    tmp = D_800AF788[arg0];
    if (((tmp2 < 0x5A) && (tmp >= 0x10F)) || ((tmp < 0x5A) && (tmp2 >= 0x10F))) {
        if (tmp < tmp2) {
            D_800AF788[arg0] -= 6;
        }

        if (tmp2 < tmp) {
            D_800AF788[arg0] += 6;
        }
    } else {
        if (tmp < tmp2) {
            D_800AF788[arg0] += 6;
        }

        if (tmp2 < tmp) {
            D_800AF788[arg0] -= 6;
        }
    }

    if (D_800AF788[arg0] < 0) {
        D_800AF788[arg0] += 0x168;
    }

    if (D_800AF788[arg0] >= 0x168) {
        D_800AF788[arg0] -= 0x168;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_80032570.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_800325AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_800325B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_800325E0.s")

void func_8003260C(unk_D_86002F58_004_000* arg0) {
    void (*func)(void*);
    s32 unk1A = arg0->unk_01A;
    s32 idx = arg0->unk_0A6;

    D_800AF7AE = 0;

    if (unk1A < 0x98) {
        D_800AF7C0[idx & 1] = 0;
        func_80032A34(idx & 1);
        func = Util_ConvertAddrToVirtAddr(func_810007A8);
        func(arg0);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_80032670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_80032738.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/32D10/func_800327CC.s")
