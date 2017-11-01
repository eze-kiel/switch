#include <stdio.h>

int main()
{
	signed short var, i;
	i = 0;
	
do{		
	printf("chosis la langue:\n1: anglais\n2: français\n");
	fflush(stdin);
	scanf("%hd", &var);
	switch(var)
 	{
		case 1:
			printf("tu as choisi anglais\n");
			break;
		case 2:
			printf("tu as choisi francais\n");
			break;
		default:
			printf("fermeture du programme...\n");
			i = i++;
			break;
	}
}
while(i<1);
	return 0;
}
