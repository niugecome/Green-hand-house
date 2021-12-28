#include "pcpy.h"

int check_arg(const char *SFile,int arg_num,int pronum)
{
	if((access(SFile,F_OK))!=0)
	{
		perror("Check_Arg Error");
		exit(0);
	}

	if(arg_num < 3)
	{
		printf("Check_Arg Error : 参数数量异常\n");
		exit(-1);
	}
	
	if(pronum > 100 && pronum <= 0 )
	{
		printf("Check_arg Error: 进程数量应该小于100，大于0\n");
		exit(-1);
	}
	return 0;
	
}
