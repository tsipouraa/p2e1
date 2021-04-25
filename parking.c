#include <stdio.h>
#include <string.h>
int check(char arr[][11],char a_k[], int tupos_oxhmatos);
int vres_thesi(char arr[][11], int tupos_oxhmatos);
int main()
 {
    char carseats[200][11];
    char motoseats[40][11];
    int xrhmata = 0;
	int tupos_oxhmatos, sun_kostos;
	int thesi;
	char a_k[11];
	int k;
	int free; 
	
	while(strcmp(a_k, "liski") != 0) 
	{
		printf("Plhktrologeiste ton arithmo kukloforias tou oxhmatos sas. (ews 10 xarakthres)\n");
	    printf("Plhktrologeiste ton tupo tou oxhmatos sas.\n");
		printf("Plhktrologeiste 1 gia autokinhto\n");
		printf("Plhktrologeiste 2 gia motosukleta\n");
		printf("Plhktrologeiste 'liksi' otan eiste etoimoi.\n");
		scanf("%s", &a_k);
		scanf("%d", &tupos_oxhmatos);
		
		if(tupos_oxhmatos == 1) 
		{
			sun_kostos =  check(carseats, a_k, tupos_oxhmatos);
			
			if(sun_kostos == -1) 
			{
				thesi=vres_thesi(carseats, tupos_oxhmatos);
				strcpy(carseats[thesi], a_k);
			}
			else 
			{
				xrhmata += 10;
				strcpy(carseats[sun_kostos], "0");
			}
		}
		
		else if(tupos_oxhmatos == 2)
		{
			sun_kostos = check(motoseats, a_k, tupos_oxhmatos);
			if(sun_kostos == -1)
			{
				thesi = vres_thesi(motoseats, tupos_oxhmatos);
				strcpy(motoseats[thesi], a_k);
			}
			else {
				xrhmata += 10;
				strcpy(motoseats[sun_kostos], "0");
			}
		}
		
		printf("Plhktrologeiste ton arithmo kukloforias kai 1 gia motosukleta h 2 gia autokinhto\n");
		scanf("%s", a_k);
		scanf("%d", &tupos_oxhmatos);
}
printf("H telikh timh einai: %d", xrhmata);


for(k = 0; k < 200; k++)
{
	if(strcmp(carseats[k], "0") == 0)
	{
		free++;
	}
}
for(k = 0; k <40; k++) 
{
	if(strcmp(motoseats[k], "0") == 0)
	{
		free++;
	}
}
    printf("Oi eleutheres theseis einai : %d", free);
    return 0;
}


int check(char arr[][11], char a_k[], int tupos_oxhmatos) {
	int k;
	
	if(tupos_oxhmatos == 1)
	{
		for(k = 0; k < 200; k++) {
			if(strcmp(arr[k], a_k)== 0) 
			{
				return k;
			}
		}
		
		if(k == 200)
		{
			return -1;
		}
	}
	else if(tupos_oxhmatos == 2)
	{
		for(k = 0; k < 40; k++)
		{
			if(strcmp(arr[k], a_k) == 0)
			{
				return k;
			}
		}
		
		if(k == 40)
		{
			return -1;
		}
	}
}

int vres_thesi(char arr[][11], int tupos_oxhmatos)
{
    int k;
    
    if(tupos_oxhmatos == 1)
    {
    	for(k = 0; k < 200; k++)
    	{
    		if(strcmp(arr[k], "0") == 0)
    		{
    			return k;
			}
		}
	}
	else if(tupos_oxhmatos == 2)
	{
		for(k = 0; k < 40; k++) {
			if(strcmp(arr[k], "0") == 0)
			{
				return k;
			}
		}
	}
}

