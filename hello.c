#include<stdio.h>
#include<limits.h>
void main()
{
printf("short int:\nsigned: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
printf("unsigned: %hu to %hu\n",0,USHRT_MAX);
printf("int:\nsigned:%d to %d\n",SHRT_MIN,SHRT_MAX);
printf("unsigned: %u to %u\n",0,USHRT_MAX);
printf("long int:\nsigned: %ld to %ld\n",SHRT_MIN,SHRT_MAX);
printf("unsigned: %lu to %lu\n",0,USHRT_MAX);
printf("long long int:\nsigned: %lld to %lld\n",SHRT_MIN,SHRT_MAX);
printf("unsigned: %llu to %llu\n",0,USHRT_MAX);
}
