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
    mov [mcsema_regs + 0], EAX
    mov [mcsema_regs + 4], EBX
    mov [mcsema_regs + 8], ECX
    mov [mcsema_regs + 12], EDX
    mov [mcsema_regs + 20], EDI
    mov [mcsema_regs + 16], ESI
    mov [mcsema_regs + 28], EBP
    mov [mcsema_regs + 24], ESP
    lea ESP, [mcsema_stack + 32760]
    lea EAX, [mcsema_regs]
    push EAX
    call mcsema_main
    ret
