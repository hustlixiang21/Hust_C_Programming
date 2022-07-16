/************************************************************************************
 简要描述：伪随机数发生器的实现与使用,将程序放在两个文件中。
           这是第1个文件ex5_8_1.c: 实现伪随机数发生器,
		   只包含srandom、random和probability等产生随机数的函数.
*************************************************************************************/
#include<time.h>
#define  INITIAL_SEED        17
#define  MULTIPLIER          25173
#define  INCREMENT           13849
#define  MODULUS             65535
static unsigned long seed=INITIAL_SEED; /* 随机数的种子 */

/****************************************************************
函数名称：srandom
函数功能：用系统时间初始化随机数种子seed
函数参数：无
函数返回值：无
****************************************************************/
void srandom( )
{
     seed=time(NULL);     /*  用系统时间初始化随机数的种子   */
}

/****************************************************************
函数名称：random
函数功能：产生在0~MODULUS间的整型随机数
函数参数：无
函数返回值：产生的整型随机数
****************************************************************/
unsigned  random(void)
{
	  seed=(MULTIPLIER*seed+INCREMENT)%(MODULUS+1);
	  return  seed;
}

/****************************************************************
函数名称：probability
函数功能：产生在0~1间的浮点随机数
函数参数：无
函数返回值：产生的浮点随机数
****************************************************************/
double  probability(void)
{
	seed=(MULTIPLIER*seed+INCREMENT)%(MODULUS+1);
	return(seed/(double)( MODULUS));
}
