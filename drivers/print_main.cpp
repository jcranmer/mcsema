
#include <cstdio>
#include <iostream>
#include <sstream>

#undef DEBUG

#include "mc-sema/common/RegisterState.h"

#ifdef __x86_64__
# define REG_XAX RAX
# define REG_XBX RBX
# define REG_XCX RCX
# define REG_XDX RDX
# define REG_XDI RDI
# define REG_XSI RSI
# define REG_XBP RBP
# define REG_XSP RSP
# define REG_XIP RIP
#else
# define REG_XAX EAX
# define REG_XBX EBX
# define REG_XCX ECX
# define REG_XDX EDX
# define REG_XDI EDI
# define REG_XSI ESI
# define REG_XBP EBP
# define REG_XSP ESP
# define REG_XIP EIP
#endif

#define STACK_SIZE (4096UL * 8UL)

#define _S(M) #M
#define S(M) _S(M)

using namespace mcsema;

int main(void) {
  printf("/* Auto-generated file! Don't modify! */\n\n");
  printf("    .file __FILE__\n");
  printf("    .intel_syntax noprefix\n");
  printf("    .data\n");
  printf("    .align 64\n");
  printf("    .globl mcsema_regs\n");
  printf("mcsema_regs:\n");
  printf("    .space 444, 0\n");
  printf("\n");
  printf("    .align 64\n");
  printf("    .globl mcsema_stack\n");
  printf("mcsema_stack:\n");
  printf("    .space 32768, 0\n");
  printf("    .text\n");
  printf("\n");
  printf("    .globl mcsema_main\n");
  printf("    .globl main\n");
  printf("main:\n");
  printf("    mov [mcsema_regs + %lu], " S(REG_XAX) "\n", __builtin_offsetof(_RegState, REG_XAX));
  printf("    mov [mcsema_regs + %lu], " S(REG_XBX) "\n", __builtin_offsetof(_RegState, REG_XBX));
  printf("    mov [mcsema_regs + %lu], " S(REG_XCX) "\n", __builtin_offsetof(_RegState, REG_XCX));
  printf("    mov [mcsema_regs + %lu], " S(REG_XDX) "\n", __builtin_offsetof(_RegState, REG_XDX));
  printf("    mov [mcsema_regs + %lu], " S(REG_XDI) "\n", __builtin_offsetof(_RegState, REG_XDI));
  printf("    mov [mcsema_regs + %lu], " S(REG_XSI) "\n", __builtin_offsetof(_RegState, REG_XSI));
  printf("    mov [mcsema_regs + %lu], " S(REG_XBP) "\n", __builtin_offsetof(_RegState, REG_XBP));
  printf("    mov [mcsema_regs + %lu], " S(REG_XSP) "\n", __builtin_offsetof(_RegState, REG_XSP));
  
  // Don't bother with the 64-bit regs.
  printf("    lea " S(REG_XSP) ", [mcsema_stack + %lu]\n", (STACK_SIZE - 8));
#ifdef __x86_64__
  printf("    lea RDI, [RIP + mcsema_regs]\n");
#else
  printf("    lea EAX, [mcsema_regs]\n");
  printf("    push EAX\n");
#endif
  printf("    call mcsema_main\n");
  printf("    ret\n");
}

