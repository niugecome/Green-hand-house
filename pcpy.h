#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int block(const char * SFile,int pronum);
int check_arg(const char *SFile,int arg_num , int pronum);
int procreate(const char * SFile,const char * DFile,int pronum,int block);

