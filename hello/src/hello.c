/*
 ============================================================================
 Name        : hello.c
 Author      : Titan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	cl_int status = 0;
	cl_uint numPlatforms;
	cl_platform_id platform = NULL;
	status = clGetPlatformIDs( 0, NULL, &numPlatforms);

	if(status != CL_SUCCESS){
	    printf("Error: Getting Platforms\n");
	    return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
