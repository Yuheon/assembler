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
	}
	if(args[i]==NULL)
		return 0;
	i++;
	
	if(args[0]=='%'&&args[i]=='%')//reg to reg
		mcode="89";
	else if(args[0]=='('||args[0]=='-'){//mem to reg case 2,3
		if(args[i]=='%')
			mcode="8b";
	}
	else if(args[0]=='0'&&args[i]=='%')//mem to reg case 4
		mcode="a1";
	else if(args[0]=='%'&&(args[i]=='0'||args[i]=='('))//eax to mem
		mcode="a3";
	else if(args[0]=='$'&&args[i]=='%')//imd to reg
	{
		if(args[i+2]=='a')
			mcode="b8";
		else if(args[i+2]=='b')
			mcode="b9";
		else if(args[i+2]=='c')
			mcode="ba";
		else if(args[i+2])
			mcode="bb";
	}
	else
		return 0;
	/********************************/
    /*  							*/
	/*    generate machine code     */
    /*  							*/
	/********************************/
	
	return 1;	
}
