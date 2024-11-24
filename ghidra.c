#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004010dd)
// WARNING: Removing unreachable block (ram,0x004010e7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040111f)
// WARNING: Removing unreachable block (ram,0x00401129)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

int main(void)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char input [51];
  char output [51];
  int random2;
  int random1;
  char fix;
  int secret3;
  int secret2;
  int secret1;
  int len;
  int i_1;
  int i;
  
  output[0] = 'm';
  output[1] = 'p';
  output[2] = 'k';
  output[3] = 'n';
  output[4] = 'n';
  output[5] = 'p';
  output[6] = 'h';
  output[7] = 'j';
  output[8] = 'n';
  output[9] = 'g';
  output[10] = 'b';
  output[0xb] = 'h';
  output[0xc] = 'g';
  output[0xd] = 'z';
  output[0xe] = 'y';
  output[0xf] = 'd';
  output[0x10] = 't';
  output[0x11] = 't';
  output[0x12] = 'v';
  output[0x13] = 'k';
  output[0x14] = 'a';
  output[0x15] = 'h';
  output[0x16] = 'p';
  output[0x17] = 'p';
  output[0x18] = 'e';
  output[0x19] = 'v';
  output[0x1a] = 'h';
  output[0x1b] = 'k';
  output[0x1c] = 'm';
  output[0x1d] = 'p';
  output[0x1e] = 'w';
  output[0x1f] = 'g';
  output[0x20] = 'd';
  output[0x21] = 'z';
  output[0x22] = 'x';
  output[0x23] = 's';
  output[0x24] = 'y';
  output[0x25] = 'k';
  output[0x26] = 'k';
  output[0x27] = 'o';
  output[0x28] = 'k';
  output[0x29] = 'r';
  output[0x2a] = 'i';
  output[0x2b] = 'e';
  output[0x2c] = 'p';
  output[0x2d] = 'f';
  output[0x2e] = 'n';
  output[0x2f] = 'r';
  output[0x30] = 'd';
  output[0x31] = 'm';
  output[0x32] = '\0';
  setvbuf(stdout,(char *)0x0,2,0);
  printf("Enter the secret password: ");
  __isoc99_scanf(&DAT_00402024,input);
  i = 0;
  sVar3 = strlen(output);
  for (; i < 3; i = i + 1) {
    for (i_1 = 0; i_1 < (int)sVar3; i_1 = i_1 + 1) {
      uVar1 = (i_1 % 0xff >> 1 & 0x55U) + (i_1 % 0xff & 0x55U);
      uVar1 = ((int)uVar1 >> 2 & 0x33U) + (uVar1 & 0x33);
      iVar2 = ((int)uVar1 >> 4) + input[i_1] + -0x61 + (uVar1 & 0xf);
      input[i_1] = (char)iVar2 + (char)(iVar2 / 0x1a) * -0x1a + 'a';
    }
  }
  iVar2 = memcmp(input,output,(long)(int)sVar3);
  if (iVar2 == 0) {
    printf("SUCCESS! Here is your flag: %s\n","picoCTF{sample_flag}");
  }
  else {
    puts("FAILED!");
  }
  return 0;
}



void _fini(void)

{
  return;
}