#include "fragment3.h"
#include "src/fragments/2/fragment2.h"
#include "src/1CF30.h"

void func_8140C84C();
void func_8140CDDC();
void func_8140C7C0();
void func_8140C8B8();

extern u32 D_87903E80[];
extern u32 D_87904E80[];
extern u32 D_87905280[];
extern u32 D_87905680[];

unk_D_87903E00 D_87903E00 = {
    0x00000001,
    func_8140C84C,
    func_8140CDDC,
    D_87903E80,
};

unk_D_87903E10 D_87903E10 = {
    0x00000001,
    &D_87903E00,
};

unk_D_87903E00 D_87903E18 = {
    0x01000001,
    func_8140C7C0,
    func_8140CDDC,
    D_87904E80,
};

unk_D_87903E10 D_87903E28 = {
    0x00000001,
    &D_87903E18,
};

unk_D_87903E00 D_87903E30 = {
    0x01000002,
    func_8140C7C0,
    func_8140CDDC,
    D_87905280,
};

unk_D_87903E10 D_87903E40 = {
    0x00000001,
    &D_87903E30,
};

unk_D_87903E00 D_87903E48 = {
    0x00000001,
    func_8140C8B8,
    func_8140CDDC,
    D_87905680,
};

unk_D_87903E10 D_87903E58 = {
    0x00000001,
    &D_87903E48,
};

s16 D_87903E60[4][4] = {
    { 0x006E, 0x006E, 0x006E, 0x006E },
    { 0x0060, 0x007C, 0x006E, 0x006E },
    { 0x0054, 0x006E, 0x0088, 0x006E },
    { 0x0046, 0x0060, 0x007C, 0x0096 },
};

u32 D_87903E80[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x01000000, 0x00000000, 0x00000000, 0x00001111, 0x22221000, 0x00000000,
    0x00000000, 0x11244434, 0x43442000, 0x00000000, 0x00000000, 0x13344445, 0x65632000, 0x00000000, 0x00000001,
    0x24554666, 0x77851000, 0x00000000, 0x00000001, 0x24443556, 0x78852000, 0x00000000, 0x00000001, 0x13554455,
    0x88752000, 0x00000000, 0x00000000, 0x23544455, 0x78751100, 0x00000000, 0x00000002, 0x25643566, 0x88643100,
    0x00000000, 0x00000003, 0x46743343, 0x68853320, 0x00000000, 0x00000003, 0x57633543, 0x58A96431, 0x00000000,
    0x00000001, 0x23334754, 0x56774333, 0x10000000, 0x00000002, 0x34346664, 0x55563321, 0x10000000, 0x00000002,
    0x33445443, 0x67442422, 0x00000000, 0x00000000, 0x12333444, 0x66423332, 0x10000000, 0x00000000, 0x01023444,
    0x55422122, 0x00000000, 0x00000000, 0x00001123, 0x45410000, 0x00000000, 0x00000000, 0x00000001, 0x11100000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000122, 0x11100000, 0x00000000, 0x00000000, 0x00123345, 0x54221000, 0x00000000, 0x00000011, 0x12666567,
    0x76574100, 0x00000000, 0x00000012, 0x34566789, 0x98895200, 0x00000000, 0x00000013, 0x76458A9A, 0xABBA5200,
    0x00000000, 0x00000026, 0x9866899A, 0xBCCA7410, 0x00000000, 0x00000015, 0x88678AAA, 0xBCC97420, 0x00000000,
    0x00000012, 0x6977888A, 0xBAA95310, 0x00000000, 0x00000013, 0x68856579, 0x9A894210, 0x00000000, 0x00000113,
    0x8986667A, 0xAA895320, 0x00000000, 0x00000145, 0x8A975679, 0xA9BA8532, 0x10000000, 0x00000158, 0xABA87746,
    0x8BCBA753, 0x20000000, 0x00000025, 0xA98ABA86, 0x8CCCA752, 0x31000000, 0x00000013, 0x67789B97, 0x7ABA9843,
    0x42100000, 0x00000014, 0x67887AB9, 0x78997455, 0x41000000, 0x00000024, 0x56788897, 0x79A75455, 0x51000000,
    0x00000012, 0x45256566, 0x8AA73454, 0x41000000, 0x00000001, 0x11134665, 0x69852221, 0x10000000, 0x00000000,
    0x00002555, 0x57752000, 0x00000000, 0x00000000, 0x00001232, 0x33442000, 0x00000000, 0x00000000, 0x00000000,
    0x00110000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000022, 0x10000000, 0x00000000, 0x00000000, 0x00122366, 0x43100000,
    0x00000000, 0x00000000, 0x01443458, 0x87321000, 0x00000000, 0x00000000, 0x04866899, 0x99685300, 0x00000000,
    0x00000232, 0x23789BBB, 0xBAAB7400, 0x00000000, 0x00001246, 0x6345BCBA, 0xCDDB9410, 0x00000000, 0x0000135A,
    0xA778BBBC, 0xCDDDB652, 0x00000000, 0x0000049C, 0xB999BACD, 0xDDDCA942, 0x00000000, 0x0000138C, 0xB988ABDD,
    0xDDDA8842, 0x00000000, 0x00000158, 0xBB988ACC, 0xCAB97521, 0x00000000, 0x00000146, 0xAA9879BA, 0xCBAA7552,
    0x00000000, 0x00000149, 0xBA8899BB, 0xCBAB7561, 0x00000000, 0x0000135A, 0xB9899ABB, 0xBCDDC974, 0x11000000,
    0x0000158B, 0xCBB9AAA9, 0x8BDEDA64, 0x21200000, 0x0000158C, 0xBBBBCCA8, 0xACEEDB87, 0x63200000, 0x00000149,
    0x98ACCCBB, 0xBDEDCBA9, 0x62210000, 0x00000037, 0x8789BDCB, 0xACCCA987, 0x65310000, 0x00000136, 0xAAA9ACDB,
    0x99AB9777, 0x57200000, 0x00000146, 0x89A99BCC, 0xBBCB8564, 0x45200000, 0x00000134, 0x6555789A, 0xBCCB7334,
    0x22100000, 0x00000012, 0x10157678, 0x9BAA6311, 0x00000000, 0x00000000, 0x00035555, 0x66775200, 0x00000000,
    0x00000000, 0x00013333, 0x33233100, 0x00000000, 0x00000000, 0x00000111, 0x10000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000132, 0x20000000, 0x00000000, 0x00000000, 0x00111478, 0x64100000, 0x00000000, 0x00000000,
    0x0232357A, 0xA7320000, 0x00000000, 0x00000000, 0x157688AB, 0xB9863200, 0x00000000, 0x00000000, 0x15899ACC,
    0xBABA7520, 0x00000000, 0x00012342, 0x13579CCB, 0xBCDCA830, 0x00000000, 0x00012487, 0x3569BCDC, 0xDEDCDB64,
    0x20000000, 0x000147B8, 0x699ABCDE, 0xEEECCBA5, 0x10000000, 0x000169CB, 0xAA9AADEE, 0xEEEDA9A6, 0x10000000,
    0x000149BC, 0xCA99BDDE, 0xEDDA7984, 0x21000000, 0x0000269C, 0xDB97ACDD, 0xDBB85644, 0x31000000, 0x0000147A,
    0xAB98ACCD, 0xECCA8767, 0x20000000, 0x00001479, 0xABAA9BBC, 0xDDCA9964, 0x00000000, 0x000114AB, 0xB9A9ACCC,
    0xDCDDDC83, 0x01100000, 0x000135AB, 0xBBCBBBCB, 0xBCEEED95, 0x13210000, 0x000158AC, 0xCCCCDDCC, 0xCDEFEDB7,
    0x47410000, 0x0000259A, 0x9AACDCCB, 0xCDEEECA7, 0x78411000, 0x00000157, 0x79BCDDDC, 0xCCCDCA97, 0x77321000,
    0x00000149, 0x89A9BEED, 0xCBABB898, 0x54630000, 0x00000149, 0xAAB8ADDB, 0xCCBBB867, 0x43510000, 0x00000257,
    0x8A989BBC, 0xDDCCB534, 0x32200000, 0x00000134, 0x44458AAB, 0xBBCCB521, 0x10000000, 0x00000000, 0x0003887A,
    0xABC98420, 0x00000000, 0x00000000, 0x00047756, 0x56634310, 0x00000000, 0x00000000, 0x00024432, 0x22211100,
    0x00000000, 0x00000000, 0x00001211, 0x21000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000122,
    0x10000000, 0x00000000, 0x00000000, 0x00000377, 0x52000000, 0x00000000, 0x00000000, 0x1112358A, 0x85200000,
    0x00000000, 0x00000000, 0x2468889B, 0xA8631210, 0x00000000, 0x00000000, 0x257789AB, 0xA9A84531, 0x00000000,
    0x00001000, 0x12567889, 0xABCB9851, 0x00000000, 0x00012420, 0x13469BCB, 0xCDDCCB73, 0x20000000, 0x00124742,
    0x5678ADEE, 0xEEECCCA8, 0x30000000, 0x00147964, 0x68A9ADEE, 0xEEFDA9A9, 0x30000000, 0x00158999, 0xA999ADEE,
    0xEEEB98A7, 0x21000000, 0x000379BB, 0x978AACDC, 0xCD964565, 0x42000000, 0x000158BC, 0xA978ACCC, 0xCB765327,
    0x51000000, 0x00003899, 0xBAA98ABD, 0xDB987534, 0x10000000, 0x00003777, 0xCAA989AC, 0xCBA99853, 0x00000000,
    0x00016889, 0xA998ABCC, 0xCCDCBA64, 0x20010000, 0x00004789, 0x9ABABBAC, 0xCCEECCA7, 0x31031000, 0x0012689B,
    0xCCCCCCBD, 0xCDEEDDB7, 0x32341000, 0x0002568B, 0xCBABCCCC, 0xCEEEDC95, 0x43342000, 0x00001247, 0xAA8BDDDD,
    0xCCCDB877, 0x44641000, 0x00000146, 0x8BAADEEE, 0xDA88A956, 0x54442000, 0x00000157, 0x7A87ADED, 0xDC888845,
    0x42220000, 0x00000257, 0x8B979CDC, 0xCDCB9843, 0x31000000, 0x00000144, 0x57658ABA, 0xACDBA931, 0x10000000,
    0x00000012, 0x212589AA, 0x999A8831, 0x00000000, 0x00000000, 0x00136887, 0x89986520, 0x00000000, 0x00000000,
    0x00025754, 0x55542210, 0x00000000, 0x00000000, 0x00013431, 0x12100000, 0x00000000, 0x00000000, 0x00000110,
    0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000233, 0x10000000, 0x00000000, 0x00000000, 0x11222466, 0x31100000, 0x00000000, 0x00000000,
    0x24555677, 0x54330000, 0x00000000, 0x00000000, 0x23346788, 0x66773220, 0x00000000, 0x00000000, 0x01245456,
    0x67995651, 0x00000000, 0x00000000, 0x01234577, 0x9AABA962, 0x00000000, 0x00001101, 0x12236ABB, 0xCCCCBA84,
    0x20000000, 0x00013102, 0x35569BDC, 0xCDDD9776, 0x30000000, 0x00234324, 0x6876ACCB, 0xDECB9667, 0x30000000,
    0x00245568, 0x66879BBB, 0xCDA75565, 0x21000000, 0x00134697, 0x447769A9, 0x98643324, 0x31000000, 0x00014798,
    0x65578999, 0x87643213, 0x10000000, 0x00014679, 0x99987799, 0x98766412, 0x00000000, 0x00035559, 0x99965698,
    0x78877542, 0x11000000, 0x00367668, 0x886679A9, 0x89A88665, 0x31000000, 0x00256566, 0x7878AAAA, 0xAAA8A987,
    0x31001000, 0x00155378, 0x9BBAAAAA, 0xAABBBA96, 0x21212000, 0x002468AB, 0xBBBBAABB, 0xBCCBB954, 0x31102000,
    0x0001147B, 0xB889ACDC, 0xBDB98654, 0x21123100, 0x00000138, 0xA979CEED, 0xCA875553, 0x22242000, 0x00000026,
    0x9877ACCD, 0xCA755641, 0x21110000, 0x00000124, 0x88458ABB, 0xBB756532, 0x10000000, 0x00000123, 0x78357899,
    0xAA9A9433, 0x10000000, 0x00000012, 0x33247888, 0x999B8553, 0x00000000, 0x00000001, 0x00037877, 0x77575243,
    0x00000000, 0x00000000, 0x00134443, 0x24542132, 0x00000000, 0x00000000, 0x00012221, 0x12311110, 0x00000000,
    0x00000000, 0x00001220, 0x12100000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00100111, 0x00000000, 0x00000000, 0x00000000, 0x12212232, 0x10110000,
    0x00000000, 0x00000000, 0x11112333, 0x11342000, 0x00000000, 0x00000000, 0x00022222, 0x24652330, 0x00000000,
    0x00000000, 0x00021123, 0x35775541, 0x00000000, 0x00000000, 0x00012235, 0x77896562, 0x00000000, 0x00000000,
    0x11113368, 0x78AA5352, 0x10000000, 0x00000001, 0x33234689, 0x89A96222, 0x10000000, 0x00011013, 0x34346789,
    0x98865322, 0x10000000, 0x00112233, 0x23544678, 0x76432111, 0x00000000, 0x00012342, 0x23335566, 0x43211101,
    0x00000000, 0x00012333, 0x33455333, 0x22221100, 0x00000000, 0x00002345, 0x66665223, 0x24432210, 0x00000000,
    0x00011244, 0x68643233, 0x23443311, 0x10000000, 0x01221234, 0x66333454, 0x34333221, 0x21000000, 0x01344222,
    0x54356666, 0x56443344, 0x31000000, 0x00232233, 0x57866666, 0x55644443, 0x20000000, 0x01222466, 0x88987767,
    0x78854331, 0x10000000, 0x00014689, 0x778678AA, 0xAA743221, 0x10000000, 0x00001256, 0x567679BA, 0x88742111,
    0x10011000, 0x00000035, 0x66457889, 0xA7531121, 0x00000000, 0x00000014, 0x55335657, 0x75422221, 0x00000000,
    0x00000003, 0x42135665, 0x56424311, 0x10000000, 0x00000001, 0x22023444, 0x58677412, 0x10000000, 0x00000000,
    0x00014544, 0x57455212, 0x10000000, 0x00000000, 0x00025533, 0x33212002, 0x10000000, 0x00000000, 0x00023122,
    0x00110011, 0x00000000, 0x00000000, 0x00010000, 0x00100000, 0x00000000, 0x00000000, 0x00000100, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00121000, 0x00000000, 0x00000000, 0x00000000, 0x01221110, 0x00000000, 0x00000000, 0x00000000,
    0x01332220, 0x00000000, 0x00000000, 0x00000001, 0x12443221, 0x00000000, 0x00000000, 0x00000001, 0x23442121,
    0x00000000, 0x00000000, 0x00000013, 0x22442000, 0x00000000, 0x00000000, 0x10001124, 0x31342100, 0x00000000,
    0x00000000, 0x10011124, 0x21221000, 0x00000000, 0x00000000, 0x11111112, 0x32100000, 0x00000000, 0x00000000,
    0x11111111, 0x11100000, 0x00000000, 0x00000000, 0x01221000, 0x01110000, 0x00000000, 0x00000001, 0x23331000,
    0x00111000, 0x00000000, 0x00000011, 0x24320000, 0x00000000, 0x00000000, 0x00000001, 0x23320111, 0x00000000,
    0x00000000, 0x00011011, 0x23232211, 0x11100000, 0x00000000, 0x00121100, 0x13433221, 0x11110000, 0x00000000,
    0x00110223, 0x34323323, 0x43311000, 0x00000000, 0x00011235, 0x64323335, 0x65310000, 0x00000000, 0x00001243,
    0x33323355, 0x44320000, 0x00000000, 0x00000121, 0x23312244, 0x43210000, 0x00000000, 0x00000011, 0x22111211,
    0x23210000, 0x00000000, 0x00000001, 0x11002221, 0x12101100, 0x00000000, 0x00000000, 0x00012221, 0x13211100,
    0x00000000, 0x00000000, 0x00000011, 0x13333100, 0x00000000, 0x00000000, 0x00001100, 0x12111000, 0x00000000,
    0x00000000, 0x00002100, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

u32 D_87904E80[] = {
    0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xE0E0D0C0, 0xE0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xE0D0C1B3, 0xB6B9AD9B, 0x92D0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xD0C0B1A4,
    0xA79B9E9F, 0xAFAFAF8F, 0x7E95C0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0D0A4, 0x999C8E8F, 0x8F8F9F9F,
    0x9F9F8F7F, 0x7F8F89A1, 0xE0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0C0977F, 0x8F8F9F8F, 0x8F8F8F8F, 0x8F8F7F6F,
    0x6F7F7F7D, 0x94C0F0F0, 0xF0F0F0F0, 0xF0F0F0E0, 0xB0898F9F, 0x9F8F8F7F, 0x7F7F7F7F, 0x7F7F7F7F, 0x7F7F6F6F,
    0x6F78B1F0, 0xF0F0F0F0, 0xF0F0E0A1, 0x6B7F9F9F, 0x9F8F7F6F, 0x6F7F7F7F, 0x7F7F6F7F, 0x7F7F6F6F, 0x7F7F96D0,
    0xF0F0F0F0, 0xF0E0935D, 0x6F7F8F8F, 0x8F7F6F6F, 0x6F7F7F7F, 0x7F7F7F7F, 0x7F8F7F7F, 0x7F8F86C0, 0xF0F0F0F0,
    0xD0956E6F, 0x6F8F8F8F, 0x7F6F6F6F, 0x6F6F6F6F, 0x7F7F6F7F, 0x7F7F7F7F, 0x7F6F67C0, 0xF0F0F0C0, 0x786F7F6F,
    0x6F8F8F7F, 0x6F6F6F6F, 0x6F5F6F6F, 0x7F6F6F6F, 0x6F6F5F6F, 0x6F4F57C0, 0xF0F0D077, 0x5F6F6F6F, 0x5F7F7F6F,
    0x6F6F6F6F, 0x5F5F5F6F, 0x6F6F6F6F, 0x6F5F5F5F, 0x5F3F57C0, 0xF0F0936F, 0x5F4F4F3F, 0x3F5F6F6F, 0x6F6F6F6F,
    0x5F5F5F6F, 0x6F6F6F6F, 0x6F6F6F5F, 0x4F4F68C0, 0xF0B06B5F, 0x4F4F4F4F, 0x4F4F5F6F, 0x6F6F7F6F, 0x6F5F5F5F,
    0x6F6F6F6F, 0x6F6F6F6F, 0x5F5F68C0, 0xF0904E4F, 0x4F4F4F4F, 0x4F4F4F5F, 0x6F6F7F7F, 0x6F6F6F6F, 0x6F6F6F6F,
    0x6F5F6F6F, 0x6F6F78C0, 0xF0723F3F, 0x4F4F4F3F, 0x4F4F4F4F, 0x4F4F5F7F, 0x7F7F7F7F, 0x7F7F6F6F, 0x5F6F6F6F,
    0x6F6F79C0, 0xE0542F3F, 0x3F3F3F3F, 0x3F4F4F4F, 0x3F3F4F7F, 0x7F7F7F7F, 0x6F6F5F5F, 0x5F5F6F6F, 0x5F5F79C0,
    0xD0552F3F, 0x3F3F3F3F, 0x3F3F3F3F, 0x3F3F5F7F, 0x7F7F6F5F, 0x5F5F5F5F, 0x5F5F6F6F, 0x5F5F6AB0, 0xB0473F3F,
    0x3F3F3F2F, 0x2F2F2F3F, 0x3F3F4F6F, 0x6F5F5F5F, 0x4F4F5F6F, 0x6F6F6F7F, 0x6F5F69B0, 0xA0393F3F, 0x3F3F3F2F,
    0x2F2F3F3F, 0x3F3F4F5F, 0x5F5F4F4F, 0x4F4F5F6F, 0x6F5F7F8F, 0x7F6A91F0, 0xD0723A3F, 0x3F3F3F3F, 0x3F3F4F4F,
    0x4F3F4F4F, 0x5F5F4F4F, 0x4F5F6F5F, 0x4F4F6F7F, 0x88B0F0F0, 0xF0E0A056, 0x3E3F3F4F, 0x4F4F4F5F, 0x4F4F4F4F,
    0x5F5F5F5F, 0x5F4F4F4F, 0x3F3F5F86, 0xC0F0F0F0, 0xF0F0F0D0, 0x81493F5F, 0x4F3F4F4F, 0x5F4F4F4F, 0x5F5F5F5F,
    0x4F3F3F3F, 0x3F3E74D0, 0xF0F0F0F0, 0xF0F0F0F0, 0xE0A0483F, 0x3F2F3F3F, 0x4F4F5F4F, 0x4F4F4F3F, 0x3F2F2F3F,
    0x4C82D0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0902B, 0x2F2F2F2F, 0x3F3F4F3F, 0x2F2F3F3F, 0x3F2F2F5A, 0x91E0F0F0,
    0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0E061, 0x2D2F2F2F, 0x2F3F3F3F, 0x2F2F3F4F, 0x4F3F58A0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xF0F0F0D0, 0x532F2F1F, 0x2F3F3F3F, 0x2F1F2F3F, 0x4E66B0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xC0461F1F, 0x2F2F3F3E, 0x3B384673, 0x91C0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0A0383B, 0x58567381, 0x90B0D0E0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0B0A0,
    0xC0D0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
    0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0, 0xF0F0F0F0,
};

u32 D_87905280[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000102, 0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000113,
    0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000223, 0x02000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000234, 0x02000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001345, 0x13000000, 0x00000000, 0x00000000,
    0x00000000, 0x00010100, 0x00000000, 0x00000000, 0x00002367, 0x23000000, 0x00000000, 0x00000000, 0x01010000,
    0x00000102, 0x01010000, 0x00000000, 0x00002488, 0x24000000, 0x00000000, 0x00010102, 0x01000000, 0x00000001,
    0x02131202, 0x00000000, 0x000035AB, 0x35000000, 0x00000002, 0x12130201, 0x00000000, 0x00000000, 0x01022434,
    0x23020000, 0x011246EE, 0x46120100, 0x00022334, 0x24020100, 0x00000000, 0x00000000, 0x00000224, 0x56563502,
    0x234588FF, 0x88452302, 0x35565634, 0x02000000, 0x00000000, 0x00000000, 0x00000002, 0x2467AA89, 0x67BBFFFF,
    0xFFBB6789, 0xAB672402, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x001367EE, 0xFFFFFFFF, 0xFFFFFFEE,
    0x67130000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00012367, 0xFFFFFFFF, 0xFFFFFF67, 0x23010000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00012377, 0xFFFFFFFF, 0xFFFFFF77, 0x23010000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00012367, 0xFFFFFFFF, 0xFFFFFF67, 0x23010000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x001367EE, 0xFFFFFFFF, 0xFFFFFFEE, 0x67130000, 0x00000000, 0x00000000, 0x00000000,
    0x00000002, 0x2467AA89, 0x67BBFFFF, 0xFFBB6789, 0xAB672402, 0x00000000, 0x00000000, 0x00000000, 0x00000224,
    0x56563502, 0x234588FF, 0x88452302, 0x35566734, 0x02000000, 0x00000000, 0x00000000, 0x01022434, 0x23020000,
    0x011246EE, 0x46120100, 0x00022334, 0x24020100, 0x00000000, 0x00000001, 0x02131202, 0x00000000, 0x000035AB,
    0x35000000, 0x00000002, 0x12130201, 0x00000000, 0x00000102, 0x01010000, 0x00000000, 0x00002489, 0x24000000,
    0x00000000, 0x00010102, 0x01000000, 0x00010100, 0x00000000, 0x00000000, 0x00002367, 0x23000000, 0x00000000,
    0x00000000, 0x01010000, 0x00000000, 0x00000000, 0x00000000, 0x00001345, 0x13000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000234, 0x02000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000223, 0x02000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000113, 0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000102, 0x01000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

u32 D_87905680[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00013000, 0x00000000, 0x00000000, 0x00000000, 0x0012A000, 0x00000000, 0x00000000, 0x00000000, 0x00284000,
    0x00000000, 0x00000000, 0x00000000, 0x00110000, 0x00000000, 0x00000000, 0x00000000, 0x00001100, 0x00000000,
    0x00000000, 0x00000000, 0x00012621, 0x00000000, 0x00000000, 0x00000000, 0x01237C12, 0x235C5000, 0x00000000,
    0x00000000, 0x126BD212, 0x4DF81000, 0x00000000, 0x00000000, 0x25E32112, 0x35100000, 0x00011110, 0x00000002,
    0x3B511111, 0x11000000, 0x00126B86, 0x20000002, 0x31101111, 0x00000000, 0x00123678, 0x10000001, 0x200024BC,
    0xA0000000, 0x23012331, 0x00001127, 0x00001364, 0x20000000, 0xFA000000, 0x000023B8, 0x00000000, 0x00000000,
    0x10000000, 0x000034C1, 0x00000000, 0x00000000, 0x00000000, 0x10003300, 0x00000000, 0x00000000, 0x00000001,
    0x53000000, 0x00000000, 0x00000000, 0x0000013A, 0xA0000000, 0x00000000, 0x00000000, 0x00000277, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00012100, 0x00000000, 0x00000000, 0x00000000, 0x00012100,
    0x00000000, 0x00000000, 0x00000000, 0x00012100, 0x00000000, 0x00000000, 0x00000000, 0x00014700, 0x00000000,
    0x00000000, 0x00000000, 0x00128100, 0x00000000, 0x00000000, 0x00000000, 0x00120000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000237, 0x30000000, 0x00000000, 0x00000000,
    0x0012239A, 0x00000000, 0x00000000, 0x00000000, 0x0024D7C1, 0x00000000, 0x00000000, 0x00000000, 0x013AA210,
    0x00000000, 0x00000000, 0x00000000, 0x023C1000, 0x00000000, 0x11111000, 0x00000000, 0x01110000, 0x00000000,
    0x23431000, 0x00000000, 0x01100000, 0x00000000, 0x39FEC400, 0x00000011, 0x10000000, 0x00000000, 0x12332000,
    0x00000121, 0x11100002, 0x8DB80000, 0x01111000, 0x0000236F, 0x51100001, 0x24210000, 0x00000000, 0x000038F5,
    0xC1100000, 0x00000000, 0x00000000, 0x000049C5, 0xF1000000, 0x00000000, 0x00000000, 0x00115F44, 0x72000000,
    0x00000000, 0x00000000, 0x00136811, 0x10000000, 0x00000000, 0x00001210, 0x00011100, 0x00000000, 0x00000000,
    0x000024C2, 0x00000000, 0x00000000, 0x00000000, 0x00026C10, 0x00000000, 0x00000000, 0x00000000, 0x00012100,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x27400000, 0x00000000, 0x00000000, 0x00000004, 0xBA000000, 0x00000000, 0x00000000, 0x000037B7, 0xC0000000,
    0x00000000, 0x00000000, 0x00026F33, 0x10000000, 0x00000000, 0x00000000, 0x00239400, 0x00000000, 0x00000000,
    0x00000000, 0x00111100, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x62000000, 0x00000001, 0x22000000, 0x00000000, 0xEC000000, 0x00000012, 0xB2000000,
    0x00000000, 0x10000000, 0x00000012, 0x61000000, 0x002ADD92, 0x00000000, 0x00001111, 0x21000000, 0x00122111,
    0x00000000, 0x00012531, 0x10000000, 0x00000000, 0x00000000, 0x0024AA12, 0x21000000, 0x00000000, 0x00000000,
    0x0026B313, 0xC3000000, 0x00000000, 0x00000000, 0x0026D514, 0x88000000, 0x00000000, 0x00000000, 0x002BD003,
    0x59000000, 0x00000000, 0x00010000, 0x00262002, 0x20000000, 0x00000000, 0x00127200, 0x00000000, 0x00000000,
    0x00000000, 0x013B7000, 0x00000000, 0x00000000, 0x00000000, 0x02430000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00220000, 0x00000000, 0x00000000, 0x00000000, 0x00220000, 0x00000000, 0x00000000, 0x00000000, 0x00220000,
    0x00000000, 0x00000000, 0x00000000, 0x012A1000, 0x00000000, 0x00000000, 0x00000124, 0x74AA0000, 0x00000000,
    0x00000000, 0x0000024E, 0x38B10000, 0x00000000, 0x00000000, 0x000013E8, 0x12000000, 0x00000000, 0x00000000,
    0x00002281, 0x00000000, 0x00000000, 0x00000000, 0x00002100, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x10000000, 0x00000000,
    0x00000000, 0x00000002, 0x35200000, 0x00000000, 0x00000000, 0x00000014, 0xDC000000, 0x00000000, 0x00000000,
    0x00000124, 0xF3000000, 0x00000000, 0x00000000, 0x00000123, 0x41000000, 0x000022AB, 0x00000000, 0x00000136,
    0x11000000, 0x00001111, 0x00000000, 0x0000125D, 0x11000000, 0x00000000, 0x00000000, 0x001223B7, 0x11000000,
    0x00000000, 0x00000000, 0x123A9332, 0x11000000, 0x00000000, 0x00000000, 0x15F92111, 0x11000000, 0x00000000,
    0x00000000, 0x14862113, 0x31000000, 0x00000000, 0x00000000, 0x046F2114, 0x5D100000, 0x00000000, 0x00000000,
    0x15E71003, 0x5A400000, 0x00000000, 0x00000000, 0x03400002, 0x35400000, 0x00000000, 0x00000000, 0x00000001,
    0x11000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

void func_87903260(void) {
    if (D_87903DC4 > 0) {
        D_87903DCC = D_87903DC4;
        D_87903DC4 = -2;
        D_87903DC0 = 1;
    }
}

void func_87903294(void) {
    D_87903DC4 = -1;
    D_87903DC0 = 0;
    D_87903DCC = 0;
    D_87903DD0 = 0;
}

void func_879032BC(s16 arg0) {
    switch (D_87903DC0) {
        case 1:
            D_87903DD0 = 0x18;
            D_87903DC8 = arg0;
            D_87903DC0++;
            break;

        case 2:
            D_87903DC8--;
            if (D_87903DC8 == 0) {
                func_87903294();
            }
            break;
    }
}

void func_87903358(s16 arg0, s16 arg1) {
    switch (D_87903DC0) {
        case 1:
            D_87903DD0 = arg0;
            D_87903DC8 = arg1;
            D_87903DC0++;
            break;

        case 2:
            D_87903DC8--;
            if (D_87903DC8 == 0) {
                func_87903294();
            }
            break;
    }
}

void func_879033FC(unk_func_8790002C* arg0) {
    s32 i;
    s16 temp_a2;
    s32 var_s2;

    if (1) {}

    gSPDisplayList(gDisplayListHead++, D_8006F518);
    gDPSetEnvColor(gDisplayListHead++, 255, 255, 255, 255);

    var_s2 = 0;
    for (i = 0; i < 4; i++) {
        if (arg0[i].unk_2A8 != 0) {
            temp_a2 = D_87903E60[D_87903DD4][var_s2];
            if (arg0[i].unk_2AC != 0) {
                func_87801644(-1 - i, 0x78, temp_a2, 1.0f);
            } else {
                func_87801644(i, 0x78, temp_a2, 1.0f);
            }
            var_s2++;
        }
    }

    gSPDisplayList(gDisplayListHead++, D_8006F630);
}

void func_8790354C(void) {
    switch (D_87906046) {
        case 0:
            func_8001F1E8(0xC8, 0x20, "(EASY)");
            break;

        case 1:
            func_8001F1E8(0xC8, 0x20, "(NORMAL)");
            break;

        case 2:
            func_8001F1E8(0xC8, 0x20, "(HARD)");
            break;

        case 3:
            func_8001F1E8(0xC8, 0x20, "(SUPER)");
            break;
    }
}
