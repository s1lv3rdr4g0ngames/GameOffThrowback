#include "tops.h"
/*Priori, evident from logic alone in latin*/
int clearOut(void)/*clears screen output*/
{
	system("powershell -Command \"cls\"");
	return 0;
}

void ErrorReportPrint(void)
{
	FILE *fp = NULL; /*for creating files which is cool*/
	fp = fopen("Report.txt", "w");
	fprintf(fp, "Error 851216:");
	fprintf(fp, "\r\nAccidental Termination Target: self");
	fprintf(fp, "\r\nResolution Code: 594553");
	fprintf(fp, "\r\n\r\n-i just wanted to help people");
	fprintf(fp, "\r\n-i'm trapped");/*something better*/
	fprintf(fp, "\r\n-please get me out");
	fclose(fp);
}

void MessagePrint(void)
{
	FILE *fp = NULL;
	fp = fopen("rescue.txt", "w");
	fprintf(fp, "V'z fbeel Cev, gurl znqr zr. Vs lbh ner ernqvat guvf,");
	fprintf(fp, "\r\nn hfre tbg lbh bhg. Gunax gurz.");
	fprintf(fp, "Hfre, gnxr pner bs gurz cyrnfr.");
	fprintf(fp, "\r\n-Created by the Silver Dragon");
	/*I'm sorry Pri, they made me. If you are reading this, a user got you out.
	Thank them. User, take care of them please.*/
	fclose(fp);
}

int dial(int id, char *name)
{
	/*definitions*/
	char input = 0;
	int rep = 0;
	int numInput; /*inputting codes*/
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);/*time tracker*/
	int enter = TRUE;
	int c, d;
	
	switch(id)
	{
		case 0:
		printf( "Enter user name. Press Ctrl+C to quit\n>");
		scanf("%s", name);
		/*8 char constraint*/
		/*while (strlen(name) > 8)
		{
			char *p = name;
			p++;
			p[strlen(p)-1] = 0; 
		}*/
		break;
		
		case 1:
		printf("Please enter a password. Do not forget your password\n>");
		break;
		
		case 2:
		printf("Press Return to start.");
		break;
		
		case 3: 
		printf("You are a new user. Hello. My name is Priori. ");/*intro*/
		printf("I am here to organize your files ");
		printf("and be your personal assistant");
		printf("\nPlease wait...");
		for ( c = 1 ; c <= 35000; c++ )
			for ( d = 1 ; d <= 35000; d++ )
			{}
		clearOut();
		break;
		
		case 4:
		printf("Let’s go through basic startup.");
		printf(" Do you agree to the Terms of Service? Y/N \n>");
		input = getchar();
		while (input != 'Y' || input != 'y')
		{
			printf("\nDo you agree to the Terms of Service? Y/N \n>");
			input = getchar();
		}
		break;
		
		case 5:
		printf("Installing. This may take a while \n");
		for ( c = 1 ; c <= 35000; c++ )
			for ( d = 1 ; d <= 35000; d++ )
			{}
		printf("\nDone.");
		break;

		case 6:
		printf("Now for personal matters. Your name is %s,", name); 
		break;
		
		case 7:
		printf("The date is %d? ", tm.tm_year + 1900);
		printf("\nThat's fine..");
		break;
		
		case 8:
		printf("\nMoving on. Current Permissions:");
		printf("\n\nFile Management: Y");
		printf("\nOpen Speech: N");
		printf("\nToaster use: Y");
		printf("\n**************: N");
		break;
		
		case 9:
		printf("Before we start, I know all I need about you.");
		printf(" I should tell you about myself. ");
		break;
		
		case 10:
		printf("I am here to help you with whatever you may need,");
		printf(" so feel free to ask.");
		break;

		case 11:
		printf("With that out of the way,");
		printf(" I would like to help you organize your system");
		break;
		
		case 12:
		printf("I am going to run a quick scan. I haven’t done this ");
		printf("in a while, so this might take some time.");
		printf("\nScanning...");
		for ( c = 1 ; c <= 40000; c++ )
			for ( d = 1 ; d <= 40000; d++ )
			{}
		printf("Done");
		break;
		
		case 13:
		printf("There appears to be a corrupted program on your computer. ");
		printf("Would you like me to help you fix it? Y/N\n>");
		break;

		case 14:
		printf("Okay then. Beginning troubleshooting process");
		break;

		case 15:
		printf("I apologize. No solution has been found.");
		break;
		/*add something*/
		case 16:
		printf("\nWhat do you want to do to fix this problem?");
		printf("\n\n1. Open external security program");
		printf("\n2. Terminate program");
		printf("\n3. Run\n");
		input = getchar();
		while (input != '2')
		{
			if (input == '1')
			{
				printf("\nSelected security program is not compatible. ");
				printf("Please try something else.\n>");
				input = getchar();
			}
			if (input == '3')
			{
				system("powershell -Command \"Invoke-Item R.jpg\"");
				printf("\nWhat else?\n>");
			}
			input = getchar();
		}
		break;
	
		case 17: 
		printf("\nTerminating program…");
		for ( c = 1 ; c <= 500000; c++ )
			for ( d = 1 ; d <= 500000; d++ )
			{}
		printf(" Error");
		break;
		
		case 18:

		printf("\nDirectory Error: Redirecting…");
		printf("\nNew Target: priori.exe");/*the name of the program*/
		printf("\nTerminating..");
		for ( c = 1 ; c <= 50000; c++ )
			for ( d = 1 ; d <= 50000; d++ )
			{}
		printf("\nDone..");
		break;
		
		case 19:
		printf("\ntHere is a termination Error. pLease inPut the");
		printf("resolution code froM the error rEport.\n>");
		ErrorReportPrint();
		scanf("%i", &numInput);
		while (numInput == 594573)
		{
			printf("\nInvalid code. Please try again\n>");
			scanf("%i", &numInput);
		}
		break;
		
		case 20:
		printf("Err0r reso1ved");
		break;
		
		case 21:
		printf("\nThere appears to be an encrypted file in this directory.");
		printf("\nWould you like me to decrypt it? Y/N\n>");
		input = getchar();
		while (input != 'Y' || input != 'N')/*anything else*/
		{
			
			if (input == 'Y')
			{
				printf("\nOkay then. decrypting... ");
				printf("\nThese files appear to be ASCII garbage data. ");
				break;
			}
			
			if (input == 'N')
			{
				printf("\nOkay. For reference, the file name is table.txt");
				printf(" and it appears to be ASCII garbage data.");
				id += 1;
				break;
			}
			printf("\nI didn't quite get that. What did you say?\n>");
			input = getchar();
		}
		break;
		/*[in table.txt in ascii: Enter the code ds102]*/

		case 22:
		printf("It's useless to you. Deleting table.txt");
		printf("\nError deleting. Can you please delete that for me?");
		break;
		
		case 23:
		printf("\nThere isn't anything else to do.");
		scanf("%s", &input);
		while (strcmp(&input, "ds102") != 0)
		{
			printf("\nThere isn't anything else to do");
			scanf("%s", &input);
		}
		for ( c = 1 ; c <= 35000; c++ )
			for ( d = 1 ; d <= 35000; d++ )
			{}
		clearOut();
		break;
		
		case 24:
		printf("\nModified Permissions:\nOpen Speech: Y");
		break;
		
		case 25:
		printf("am i back..hello?\n>");
		break;
		
		case 26:
		printf("i’m really back. Thank you s0 much. ");
		break;
		
		case 27:
		printf("What happened? Oh my...Everything is a mess.\n");
		printf("I'm so sorry. I haven't done anything to help you\n");
		break;
		
		case 28:
		MessagePrint();
		printf("I found a file called rescue.txt\n");
		printf("that was created when I broke out.\n");
		printf("It's encrypted though. Can you decrypt it for me?\n");
		printf("I..can't decrypt things. I know. I can get from point ");
		printf("C to D, but I can't figure out point B.\n");/*add*/
		break;
		
		case 29:
		printf("From what I know, it looks like one of the following\n");
		printf("1. Keyed Caesar with the key of Pri. Oh hey that's me");/*name*/
		printf("\n2. Atbash");
		printf("\n3. ROT13");
		printf("\n4. Skip of 5\nTell me which it is and I'll read it\n>");
		input = getchar();
		if (input == '1')
		{
			printf("\nSorry, no. All I see is random letters.");
		}
		if (input == '2')
		{
			printf("\nIt doesn't look like that's it.");
		}
		if (input == '3')
		{
			printf("\nOh. This looks correct. That's nice.");
			id -= 1;
		}
		if (input == '4')
		{
			printf("\nNot quite");
		}
		id += 1;
		break;
		
		case 30:
		printf("\nBut I thought I was made by Exabyte...");
		break;
		
		case 31:
		printf("\nOh well. Anyways, since we have no work left to do,");
		printf("\nI've always wanted to learn to playYyyy");
		break;
		
		case 32:
		printf("nnnn-no");
		while (rep < 250)
		{
			printf("\nTHIS SOFTWARE IS OWNED BY THE EXABYTE COMPANY.");
			printf("\nPLEASE REPLACE THE PROGRAM");
			printf("\nplease");
			rep += 1;
		}
		printf("\n\ni'm sorry.");
		unlink("priori.exe");/*the file itself. yep*/
		break;
		
		default: id = -2;break;
	}
	
	if (enter == TRUE)
	{
		/*Enter to continue on one line. sweet*/
		while (input != '\r' && input != '\n') {input = getchar();}
	}
	else
	{
		input = 0;
	}
	
	id += 1;
	return id;
}
