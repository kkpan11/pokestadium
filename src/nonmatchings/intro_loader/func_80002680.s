.section .text
glabel func_80002680
/* 3280 80002680 27BDFFD0 */  addiu      $sp, $sp, -0x30
/* 3284 80002684 AFA40030 */  sw         $a0, 0x30($sp)
/* 3288 80002688 AFBF0014 */  sw         $ra, 0x14($sp)
/* 328C 8000268C 00A03825 */  or         $a3, $a1, $zero
/* 3290 80002690 3C04800A */  lui        $a0, %hi(D_800A6074)
/* 3294 80002694 AFA00028 */  sw         $zero, 0x28($sp)
/* 3298 80002698 24846074 */  addiu      $a0, $a0, %lo(D_800A6074)
/* 329C 8000269C AFA70034 */  sw         $a3, 0x34($sp)
/* 32A0 800026A0 00002825 */  or         $a1, $zero, $zero
/* 32A4 800026A4 0C015AB4 */  jal        osRecvMesg
/* 32A8 800026A8 24060001 */   addiu     $a2, $zero, 0x1
/* 32AC 800026AC 8FA60030 */  lw         $a2, 0x30($sp)
/* 32B0 800026B0 3C05800A */  lui        $a1, %hi(D_800A6070)
/* 32B4 800026B4 24A56070 */  addiu      $a1, $a1, %lo(D_800A6070)
/* 32B8 800026B8 24C3FFF0 */  addiu      $v1, $a2, -0x10
/* 32BC 800026BC 8C640004 */  lw         $a0, 0x4($v1)
/* 32C0 800026C0 8CAE0028 */  lw         $t6, 0x28($a1)
/* 32C4 800026C4 8FA70034 */  lw         $a3, 0x34($sp)
/* 32C8 800026C8 00861023 */  subu       $v0, $a0, $a2
/* 32CC 800026CC 15C4001B */  bne        $t6, $a0, .L8000273C
/* 32D0 800026D0 24E7000F */   addiu     $a3, $a3, 0xF
/* 32D4 800026D4 2401FFF0 */  addiu      $at, $zero, -0x10
/* 32D8 800026D8 00E13824 */  and        $a3, $a3, $at
/* 32DC 800026DC 0047082B */  sltu       $at, $v0, $a3
/* 32E0 800026E0 50200007 */  beql       $at, $zero, .L80002700
/* 32E4 800026E4 8C79000C */   lw        $t9, 0xC($v1)
/* 32E8 800026E8 8CAF001C */  lw         $t7, 0x1C($a1)
/* 32EC 800026EC 00E2C023 */  subu       $t8, $a3, $v0
/* 32F0 800026F0 01F8082B */  sltu       $at, $t7, $t8
/* 32F4 800026F4 14200011 */  bnez       $at, .L8000273C
/* 32F8 800026F8 00000000 */   nop
/* 32FC 800026FC 8C79000C */  lw         $t9, 0xC($v1)
.L80002700:
/* 3300 80002700 00C02025 */  or         $a0, $a2, $zero
/* 3304 80002704 00002825 */  or         $a1, $zero, $zero
/* 3308 80002708 AFB90020 */  sw         $t9, 0x20($sp)
/* 330C 8000270C 8C680008 */  lw         $t0, 0x8($v1)
/* 3310 80002710 AFA70034 */  sw         $a3, 0x34($sp)
/* 3314 80002714 0C00090C */  jal        func_80002430
/* 3318 80002718 AFA8001C */   sw        $t0, 0x1C($sp)
/* 331C 8000271C 8FA40034 */  lw         $a0, 0x34($sp)
/* 3320 80002720 0C0008E0 */  jal        func_80002380
/* 3324 80002724 00002825 */   or        $a1, $zero, $zero
/* 3328 80002728 AFA20028 */  sw         $v0, 0x28($sp)
/* 332C 8000272C 00402025 */  or         $a0, $v0, $zero
/* 3330 80002730 8FA50020 */  lw         $a1, 0x20($sp)
/* 3334 80002734 0C000A85 */  jal        func_80002A14
/* 3338 80002738 8FA6001C */   lw        $a2, 0x1C($sp)
.L8000273C:
/* 333C 8000273C 3C04800A */  lui        $a0, %hi(D_800A6074)
/* 3340 80002740 24846074 */  addiu      $a0, $a0, %lo(D_800A6074)
/* 3344 80002744 00002825 */  or         $a1, $zero, $zero
/* 3348 80002748 0C015A30 */  jal        osSendMesg
/* 334C 8000274C 00003025 */   or        $a2, $zero, $zero
/* 3350 80002750 8FBF0014 */  lw         $ra, 0x14($sp)
/* 3354 80002754 8FA20028 */  lw         $v0, 0x28($sp)
/* 3358 80002758 27BD0030 */  addiu      $sp, $sp, 0x30
/* 335C 8000275C 03E00008 */  jr         $ra
/* 3360 80002760 00000000 */   nop

