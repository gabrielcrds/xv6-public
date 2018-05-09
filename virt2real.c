#include "types.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"
#include "vm.h"

char*
virt2real(char *va)
{
  pde_t* pgdir = myproc()->pgdir;
  return (char *)walkpgdir(pgdir, va, 0);
}
