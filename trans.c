#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	int i;
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");
	for(i=0;args[i]!=NULL;i++){
		if(args[i]==',')
			break;
	if(args[i]==NULL)
		return 0;
	i++;
	
	if(args[0]=='%'&&args[i]=='%')
		mcode=89;

	/********************************/
    /*  							*/
	/*    generate machine code     */
    /*  							*/
	/********************************/
	
	return 1;	
}
