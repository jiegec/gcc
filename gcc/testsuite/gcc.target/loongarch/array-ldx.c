/* { dg-do compile } */
/* { dg-options "-march=loongarch32 -mabi=ilp32d -O2" } */
long long foo(long long *arr, long long index)
{
	return arr[index];
}