#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	int i;
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		strcpy(mcode,"error");
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
		//mcode="89";
		strcpy(mcode,"89");
	else if(args[0]=='('||args[0]=='-'){//mem to reg case 2,3
		if(args[i]=='%')
			strcpy(mcode,"8b");
	}
	else if(args[0]=='0'&&args[i]=='%')//mem to reg case 4
		strcpy(mcode,"a1");
	else if(args[0]=='%'&&(args[i]=='0'||args[i]=='('))//eax to mem
		strcpy(mcode,"a3");
	else if(args[0]=='$'&&args[i]=='%')//imd to reg
	{
		if(args[i+2]=='a')
			strcpy(mcode,"b8");
		else if(args[i+2]=='b')
			strcpy(mcode,"bb");
		else if(args[i+2]=='c')
			strcpy(mcode,"b9");
		else if(args[i+2]=='d')
			strcpy(mcode,"ba");
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
