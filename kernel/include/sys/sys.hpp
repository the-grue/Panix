/**
 * @file sys.hpp
 * @author Keeton Feavel (keetonfeavel@cedarville.edu)
 * @brief Includes many commonly used system functions.
 * @version 0.1
 * @date 2019-11-14
 * 
 * @copyright Copyright Keeton Feavel et al (c) 2019
 * 
 */

#ifndef PANIX_SYS_HPP
#define PANIX_SYS_HPP

#include <types.hpp>
#include <devices/tty/kprint.hpp>
// Kernel utility functions
void panic(int exception);
void panic(char* msg);
// String functions
int strlen(const char* s);
char* concat(const char *s1, const char *s2);
// Memory functions
void* memset(void* bufptr, int value, size_t size);
int memcmp(const void* aptr, const void* bptr, size_t size);
void* memmove(void* dstptr, const void* srcptr, size_t size);
void* memcpy(void* dstptr, const void* srcptr, size_t size);
// Userspace
extern "C" void jump_usermode(uintptr_t location, uintptr_t stack);;

#endif /* PANIX_SYS_HPP */