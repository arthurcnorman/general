//
// Created by avery on 2020-09-23.
//

#ifndef REDUCE_ALGEBRA_CODE_WASM_WASM_SHIM_H
#define REDUCE_ALGEBRA_CODE_WASM_WASM_SHIM_H

int get_current_directory(char *s, size_t n)
{   if (getcwd(s, n) == 0)
    {   switch(errno)
        {   case ERANGE: return -2; // negative return value flags an error.
            case EACCES: return -3;
            default:     return -4;
        }
    }
    else return std::strlen(s);
}

void process_file_name(char *filename, const char *old, size_t n) {
    return;
}

void fwin_putchar(int c)
{
//
// Despite using termed during keyboard input I will just use the
// ordinary C stream functions for normal output. Provided I do an
// fflush(stdout) before requesting input I should be OK.
//
    std::putchar(c);
}

int fwin_windowmode()
{   return 0;
}

#endif //REDUCE_ALGEBRA_CODE_WASM_WASM_SHIM_H
