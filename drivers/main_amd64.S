/* Auto-generated file! Don't modify! */

    .file __FILE__
    .intel_syntax noprefix
    .data
    .align 64
    .globl mcsema_regs
mcsema_regs:
    .space 444, 0

    .align 64
    .globl mcsema_stack
mcsema_stack:
    .space 32768, 0
    .text

    .globl mcsema_main
    .globl main
main:
    mov [mcsema_regs + 0], RAX
    mov [mcsema_regs + 8], RBX
    mov [mcsema_regs + 16], RCX
    mov [mcsema_regs + 24], RDX
    mov [mcsema_regs + 40], RDI
    mov [mcsema_regs + 32], RSI
    mov [mcsema_regs + 56], RBP
    mov [mcsema_regs + 48], RSP
    lea RSP, [mcsema_stack + 32760]
    lea RDI, [RIP + mcsema_regs]
    call mcsema_main
    ret
