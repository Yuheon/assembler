#include "myas.h"

int is_valid(char *op, char *args)
{
	int i;
	for(i=0;args[i]!=NULL;i++){
		if(args[i]==',')
			break;
	}
	if(args[i]==NULL)
		return 0;
	i++;
	if(args[0]=='('||args[0]=='0'||args[0]=='-'){
		if(args[i]=='('||args[i]=='0')
			return 0;
	}

if(args[i]=='$')
	return 0;
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/
	/*         syntax check         */
    /*  							*/
	/********************************/
	
	return 1;
}
