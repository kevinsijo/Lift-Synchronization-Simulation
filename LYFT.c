		#include <string.h>
		#include <stdio.h>
		#include <stdlib.h> //for malloc(); and realloc();
		#include <ctype.h> //Character class
		#include <stdbool.h>
		#include <time.h>
		#include <math.h>

		#define RESET   "\033[0m"
		#define BLACK   "\033[30m"      /* Black */
		#define RED     "\033[31m"      /* Red */
		#define GREEN   "\033[32m"      /* Green */
		#define YELLOW  "\033[33m"      /* Yellow */
		#define BLUE    "\033[34m"      /* Blue */
		#define MAGENTA "\033[35m"      /* Magenta */
		#define CYAN    "\033[36m"      /* Cyan */
		#define WHITE   "\033[37m"      /* White */
		#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
		#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
		#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
		#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
		#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
		#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
		#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
		#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
		#define Line1	"  \033[1m\033[31mFLOOR NO.\033[22m\033[36m    ┏━━━━━┳━━━━━┳━━━━━┳━━━━━┓"
		#define Line2	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor6	"\033[36m       \033[1m\033[31m6\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 3
		#define Line4	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line5	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line6	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor5	"\033[36m       \033[1m\033[31m5\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 7
		#define Line8	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line9	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line10	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor4	"\033[36m       \033[1m\033[31m4\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 11
		#define Line12	"\033[36m               ┃     ┃     ┃     ┃     ┃	\033[1m\033[31m\tLIST OF LIFT PROCESSES EXCECUTED : \033[22m\033[36m"
		#define Line13	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line14	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor3	"\033[36m       \033[1m\033[31m3\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 15
		#define Line16	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line17	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line18	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor2	"\033[36m       \033[1m\033[31m2\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 19
		#define Line20	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line21	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line22	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor1	"\033[36m       \033[1m\033[31m1\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 23
		#define Line24	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line25	"\033[36m               ┣━━━━━╋━━━━━╋━━━━━╋━━━━━┫"
		#define Line26	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Floor0	"\033[36m       \033[1m\033[31m0\033[22m\033[36m       ┃     ┃     ┃     ┃     ┃" //Line 27
		#define Line28	"\033[36m               ┃     ┃     ┃     ┃     ┃"
		#define Line29	"\033[36m               ┗━━━━━┻━━━━━┻━━━━━┻━━━━━┛"

		void WELCOME();
		void initial_W(char w[][22+1], char spc_w[][22+1]);
		void initial_E(char e[][14+1], char spc_e[][14+1]);
		void initial_L(char l[][14+1], char spc_l[][14+1]);
		void initial_C(char c[][14+1], char spc_c[][14+1]);
		void initial_O1(char o1[][20+1], char spc_o1[][20+1]);
		void initial_M(char m[][22+1], char spc_m[][22+1]);
		void initial_T1(char t1[][24+1], char spc_t1[][24+1]);
		void initial_O2(char o2[][21+1], char spc_o2[][21+1]);
		void initial_T2(char t2[][18+1], char spc_t2[][18+1]);
		void initial_E2(char e2[][14+1], char spc_e2[][14+1]);
		void initial_H(char h[][16+1], char spc_h[][16+1]);
		void initial_L2(char l2[][14+1], char spc_l2[][14+1]);
		void initial_Y(char y[][18+1], char spc_y[][18+1]);
		void initial_F(char f[][14+1], char spc_f[][14+1]);
		void printWelcomeTo(char w[][22+1],char e[][14+1],char l[][14+1],char c[][14+1],char o1[][20+1],char m[][22+1],char t1[][24+1],char o2[][21+1]);
		void ABread();
		void ABwrite();
		void postpickup(char lift);
		void runassign (char lift);
		void watermark();
		char* readinput();//unlimited input
		int nsleep(long milliseconds);//to delay
		int* indexOf(char* str,char ch);//to get index of repetitive element in the input
		int intlen (int* a);
		char* int_char(int* s);
		int* char_int(char* s);
		void startassign();
		void blinksane(char* s , int m, int n); //Normal Cyan printing
		void blinkbling(char* s , int m, int n); //Highlighted Magenta printing
		void blinkinsane(char* s , int m, int n); //Alarming Red printing
		void wrtLift();
		void wrtCall();
		void destinate();
		void run();
		void postdrop(char lift);
		void postadd();
		void crucialA();
		void crucialB();
		void update();
		void ANull();
		void BNull();
		void moveA();
		void moveB();
		void deleteindex(int row,int col);
		char* ReadFile(char *filename);
		void blinkmove(int uod_A, int uod_B);
		void blinklist(char* s , int m, int n);
		void writeS(char* s);
		void blinkmatrix(int line);
		void smartprint(int ALine,int BLine);
		void instant();
		int getN();
		void renewList();
		//Call stands for Floor Direction
		//Global variables
		int APos,BPos;//Initial Lift positions
		int n;//No. of valid floor directions
		int topmost,bottomost;
		int ACall;//Call assigned to Lift A
		int BCall;//Call assigned to Lift B
		int ADest;//Destination of A
		int BDest;//Destination of B
		int ATravel;//Travel distance of A
		int BTravel;//Travel distance of B
		int ADircn;//Direction of travel for A
		int BDircn;//Direction of travel for B
		int ACausative;//Showing what is "causing" the movement of Lift A. Either a real.pickup or a drop.
		int BCausative;//Showing what is "causing" the movement of Lift A. Either a real.pickup or a drop.
		int AUsers;//Showing number of users present inside lift A.
		int BUsers;//SHowing number of users present inside lift B.
		const int APrimary = 1;//Assigning primary direction of travel for A (to be used only in case of equi-probability).
		const int BPrimary = 0;//Assigning primary direction of travel for B (to be used only in case of equi-probability).
		int ALastaction;
		int BLastaction;
		const int maxUsers = 6;
		struct essential
		{
			int *pickup;
		}real,dummy;
		int* uod;
		int* drop[13];
		int *Callpos_A;
		int *Callpos_B;
		int *Adis_Call;
		int *Bdis_Call;
		int *ProbableLift;
		int *f_ADircn;
		int *f_BDircn;
		int* APicklist;
		int* ADroplist;
		int* BPicklist;
		int* BDroplist;

		int main()
		{
			//Basics
			system("clear");
			setbuf(stdout,NULL);
			int delay;//Delay printing
			printf("\n\n\n\t\t");
			//blinkinsane("THIS PROJECT AIMS TO DEMONSTRATE LIFT SYNCHRONIZATION SYSTEMS OF THE MODERN WORLD ON A SMALL SCALE!",-1,-1);
			//delay = nsleep(2000);
			//Declaring variables
			int i,j,k,l,m;//Loop control varibales
			char* s;
			char temp;
			printf(CYAN);
			WELCOME();
			printf(RESET);
			delay = nsleep(1200);
			real.pickup = malloc (sizeof(int)*13);
			for(i=0;i<13;i++)
				drop[i] = malloc (sizeof(int)*(maxUsers+1));
			uod = malloc (sizeof(int)*13);
			Callpos_A = malloc (sizeof(int)*13);
			Callpos_B = malloc (sizeof(int)*13);
			Adis_Call = malloc (sizeof(int)*13);
			Bdis_Call = malloc (sizeof(int)*13);
			ProbableLift = malloc (sizeof(int)*13);
			f_ADircn = malloc (sizeof(int)*13);
			f_BDircn = malloc (sizeof(int)*13);
			dummy.pickup = malloc (sizeof(int)*13);
			APicklist = malloc (sizeof(int)*(maxUsers+1));
			BPicklist = malloc (sizeof(int)*(maxUsers+1));
			ADroplist = malloc (sizeof(int)*(maxUsers+1));
			BDroplist = malloc (sizeof(int)*(maxUsers+1));
			ABread();
			ANull();
			BNull();
			//Initializing the essentials to int-pointer terminating number -5. -5 shows that the given int pointer is unoperated on till the occurence of -5.
			for(i=0;i<13;i++)
			{
				real.pickup[i]=-5;
				uod[i]=-5;
				Callpos_A[i] = -5;
				Callpos_B[i] = -5;
				Adis_Call[i] = -5;
				Bdis_Call[i] = -5;
				ProbableLift[i] = -5;
				f_ADircn[i] = -5;
				f_BDircn[i] = -5;
				dummy.pickup[i]=-5;
			}
			for(i=0;i<13;i++)
			{
				for(j=0;j<maxUsers+1;j++)
				{
					drop[i][j] = -5;
				}
			}
			for(i=0;i<maxUsers;i++)
			{
				APicklist[i] = -4;
				BPicklist[i] = -4;
				ADroplist[i] = -4;
				BDroplist[i] = -4;
			}
			APicklist[maxUsers] = -5;
			BPicklist[maxUsers] = -5;
			ADroplist[maxUsers] = -5;
			BDroplist[maxUsers] = -5;
			delay = nsleep(2000);
			instant();
			s = "Enter initial number of pick-up calls : ";
			blinksane(s,-1,-1);
			scanf("%d",&n);
			system("clear");
			instant();
			for(i=0;i<n;i++)
			{
				real.pickup[i]=-4;
				uod[i]=-4;
				Callpos_A[i] = -4;
				Callpos_B[i] = -4;
				Adis_Call[i] = -4;
				Bdis_Call[i] = -4;
				ProbableLift[i] = -4;
				f_ADircn[i] = -4;
				f_BDircn[i] = -4;
				dummy.pickup[i]=-4;
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<maxUsers;j++)
				{
					drop[i][j] = -4;
				}
			}
			for(i=0;i<n;i++)
			{
				//Printing --> |USER ~ : |
				s = "Call ";
				blinksane(s,-1,-1);
				s = "~";
				blinkbling(s,i+1,-1);
				s = " : ";
				blinksane(s,-1,-1);
				//Printing --> |YOU ARE ON FLOOR : |
				s = "\nYou are on floor : ";
				//Printing --> |YOU WANT TO GO UP(1)/DOWN(0) : |
				blinksane(s,-1,-1);
				scanf("%d",&real.pickup[i]);
				dummy.pickup[i] = real.pickup[i];
				s = "You want to go ";
				blinksane(s,-1,-1);
				s = "Up(1)/Down(0)";
				blinkbling(s,-1,-1);
				s = " : ";
				blinksane(s,-1,-1);
				scanf("%d",&uod[i]);
				system("clear");
				instant();
			}
			startassign();
			printf("\n@@@@~\n");
			delay = nsleep(1000);
			wrtLift();//Finding direction(/position) of each user w.r.t. the lifts.
			wrtCall();
			system("clear");
			instant();
			destinate();
			run();
			ABwrite();
			renewList();
			system("clear");
			printf("\n\n\n\t\t\t");
			blinkinsane("THE SYSTEM HAS FINISHED EXECUTING!\n\n\n\t\t\tTHANK YOU!",-1,-1);
			delay = nsleep(2000);
			system("clear");
			return 0;
		}


		void run()
		{
			//Declaring variables
			int i=0,j=0,k=0,l=0;//Loop control variables
			char* s;
			int* x;
			int* y;
			char* temp;
			char* chk;
			char p,q;
			int lx,ly;
			int delay;
			int add;
			int index;
			int u;
			int r=1;
			char destA, destB;
			int min,max;
			int count = 0;
			destA = -1;
			destB = -1;
			//Initialization
			system("clear");
			instant();
			while((ATravel > 0) || (BTravel > 0))
			{

			if((ATravel != -1) && (BTravel != -1))
			{
				blinkmove(ADircn,BDircn);
			}
			else
			if(ATravel != -1)
			{
				blinkmove(ADircn,-1);
			}
			else
			if(BTravel != -1)
			{
				blinkmove(-1,BDircn);
			}
				/*//Moving Lift A
				moveA();
				//Moving Lift B
				moveB();
				delay=nsleep(700);
				system("clear");
				instant();
				delay=nsleep(700);*/

				destA = -1;
				destB = -1;
				//Call-based processing
				/*printf("\n");
				for(i=0;i<maxUsers;i++)
				{
					printf("%d - ",i);
					for(j=0;j<n;j++)
						printf(" %d ",drop[j][i]);
					printf("\n");
				}
				printf("\n");
				printf("\n┋A's Pickup\tADest\tATravel\tADircn\tACausative┋\n");
				printf("┋\t%d\t%d\t%d\t%d\t%c┋\n",real.pickup[ACall],ADest,ATravel,ADircn,ACausative);
				printf("\n┋B's Pickup\tBDest\tBTravel\tBDircn\tBCausative┋\n");
				printf("┋\t%d\t%d\t%d\t%d\t%c┋\n",real.pickup[BCall],BDest,BTravel,BDircn,BCausative);
				wrtCall();
				for(i=0;i<n;i++)
				{
					printf("┋\t\tPickup\tProbableLift\tCallpos_A\tAdis_Call\tCallpos_B\tBdis_Call┋\n");
					printf("┋USER %d\t\t%d\t%c\t%d\t%d\t%d\t%d┋\n",i+1,dummy.pickup[i],ProbableLift[i],Callpos_A[i],Adis_Call[i],Callpos_B[i],Bdis_Call[i]);
				}*/
				//Checking if destination is arrived or not.
				if((APos == ADest || BPos == BDest))
				{
					if((APos == ADest && BPos == BDest))
					{
						switch (ACausative)
						{
							case 'D' :  //Lift A reaches destination due to DROP.

										ALastaction = 1;
										destA = 'D';
										temp = int_char(drop[ACall]);
										p = APos + '0';
										x = indexOf(temp,p);
										lx = intlen(x);
										for(i=0;i<lx;i++)
										{
											index = x[i];
											if((drop[ACall][index] == ADest) && (real.pickup[ACall] == 'A'))
											{
												s = "Lift A opens at floor ~!";
												blinklist(s,ADest,-1);
												s = "Drops the User from floor ~!";
												blinklist(s,dummy.pickup[ACall],-1);
												deleteindex(ACall,index);
												instant();
											}
										}
										runassign('A');
										break;
							case 'P' :  //Lift A reaches destination due to PICK-UP.
										ALastaction = 2;
										ACausative = 'D';
										destA = 'P';
										min = 6;
										max = 0;
										s = "Lift A opens at floor ~!";
										blinklist(s,dummy.pickup[ACall],-1);
										if(uod[ACall]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[ACall]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										AUsers += u;
										j=0;
										for(i=0;i<maxUsers;i++)
										{
											if((j<u) && (drop[ACall][i] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,i+1,-1);
												s = readinput();
												drop[ACall][i] = *(char_int(s));
												switch(uod[ACall])
												{
													case 1 : if(drop[ACall][i] > max)
																max = drop[ACall][i];
															break;
													case 0 : if(drop[ACall][i] < min)
																min = drop[ACall][i];
												}
												if(APicklist[i] == -4)
													APicklist[i] = real.pickup[ACall];
												if(ADroplist[i] == -4)
													ADroplist[i] = drop[ACall][i];
												j++;
												instant();
											}
										}
										switch(uod[ACall])
										{
											case 1 :ADest = max;
													max = 0;
													break;
											case 0 :ADest = min;
													min = 6;
										}
										real.pickup[ACall] = 'A';
										crucialA();
										postpickup('A');
						}

						switch (BCausative)
						{
							case 'D' :  //Lift B reaches destination due to DROP.
										BLastaction = 3;
										destB = 'P';
										temp = int_char(drop[BCall]);
										q = BPos + '0';
										y = indexOf(temp,q);
										ly = intlen(y);
										for(i=0;i<ly;i++)
										{
											index = y[i];
											if((drop[BCall][index] == BDest) && (real.pickup[BCall] == 'B'))
											{
												s = "Lift B opens at floor ~!";
												blinklist(s,BDest,-1);
												s = "Drops the User from floor ~!";
												blinklist(s,dummy.pickup[BCall],-1);
												deleteindex(BCall,index);
												instant();
											}
										}
										runassign('B');
										break;
							case 'P' :  //Lift B reaches destination due to PICK-UP.
										BLastaction = 4;
										BCausative = 'D';
										destB = 'P';
										min = 6;
										max= 0;
										s = "Lift B opens at floor ~!";
										blinklist(s,dummy.pickup[BCall],-1);
										if(uod[BCall]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[BCall]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										BUsers += u;
										j=0;
										for(i=0;i<maxUsers;i++)
										{
											if((j<u) && (drop[BCall][i] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,i+1,-1);
												s = readinput();
												drop[BCall][i] = *(char_int(s));
												switch(uod[BCall])
												{
													case 1 : if(drop[BCall][i] > max)
																max = drop[BCall][i];
															break;
													case 0 : if(drop[BCall][i] < min)
																min = drop[BCall][i];
												}
												if(BPicklist[i] == -4)
													BPicklist[i] = real.pickup[BCall];
												if(BDroplist[i] == -4)
													BDroplist[i] = drop[BCall][i];
												j++;
												instant();
											}
										}
										switch(uod[BCall])
										{
											case 1 :BDest = max;
													max = 0;
													break;
											case 0 :BDest = min;
													min = 6;
										}
										real.pickup[BCall] = 'B';
										crucialB();
										postpickup('B');
						}

					}
					else
					if(APos == ADest)
					{
						switch (ACausative)
						{
							case 'D' :  //Lift A reaches destination due to DROP.
										ALastaction = 1;
										destA = 'D';
										temp = int_char(drop[ACall]);
										p = APos + '0';
										x = indexOf(temp,p);
										lx = intlen(x);
										for(i=0;i<lx;i++)
										{
											index = x[i];
											if((drop[ACall][index] == ADest) && (real.pickup[ACall] == 'A'))
											{
												s = "Lift A opens at floor ~!";
												blinklist(s,ADest,-1);
												s = "Drops the User from floor ~!";
												blinklist(s,dummy.pickup[ACall],-1);
												deleteindex(ACall,index);
												instant();
											}
										}
										runassign('A');
										break;
							case 'P' :  //Lift A reaches destination due to PICK-UP.
										ALastaction = 2;
										ACausative = 'D';
										destA = 'P';
										min = 6;
										max = 0;
										s = "Lift A opens at floor ~!";
										blinklist(s,dummy.pickup[ACall],-1);
										if(uod[ACall]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[ACall]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										AUsers += u;
										j=0;
										for(i=0;i<maxUsers;i++)
										{
											if((j<u) && (drop[ACall][i] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,i+1,-1);
												s = readinput();
												drop[ACall][i] = *(char_int(s));
												switch(uod[ACall])
												{
													case 1 : if(drop[ACall][i] > max)
																max = drop[ACall][i];
															break;
													case 0 : if(drop[ACall][i] < min)
																min = drop[ACall][i];
												}
												if(APicklist[i] == -4)
													APicklist[i] = real.pickup[ACall];
												if(ADroplist[i] == -4)
													ADroplist[i] = drop[ACall][i];
												j++;
												instant();
											}
										}
										switch(uod[ACall])
										{
											case 1 :ADest = max;
													max = 0;
													break;
											case 0 :ADest = min;
													min = 6;
										}
										real.pickup[ACall] = 'A';
										crucialA();
										postpickup('A');
						}

					}
					else
					if(BPos == BDest)
					{
						switch (BCausative)
						{
							case 'D' :  //Lift B reaches destination due to DROP.
										BLastaction = 3;
										destB = 'P';
										temp = int_char(drop[BCall]);
										q = BPos + '0';
										y = indexOf(temp,q);
										ly = intlen(y);
										for(i=0;i<ly;i++)
										{
											index = y[i];
											if((drop[BCall][index] == BDest) && (real.pickup[BCall] == 'B'))
											{
												s = "Lift B opens at floor ~!";
												blinklist(s,BDest,-1);
												s = "Drops the User from floor ~!";
												blinklist(s,dummy.pickup[BCall],-1);
												deleteindex(BCall,index);
												instant();
											}
										}
										runassign('B');
										break;
							case 'P' :  //Lift B reaches destination due to PICK-UP.
										BLastaction = 4;
										BCausative = 'D';
										destB = 'P';
										min = 6;
										max= 0;
										s = "Lift B opens at floor ~!";
										blinklist(s,real.pickup[BCall],-1);
										if(uod[BCall]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[BCall]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										BUsers += u;
										j=0;
										for(i=0;i<maxUsers;i++)
										{
											if((j<u) && (drop[BCall][i] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,i+1,-1);
												s = readinput();
												drop[BCall][i] = *(char_int(s));
												switch(uod[BCall])
												{
													case 1 : if(drop[BCall][i] > max)
																max = drop[BCall][i];
															break;
													case 0 : if(drop[BCall][i] < min)
																min = drop[BCall][i];
												}
												if(BPicklist[i] == -4)
													BPicklist[i] = real.pickup[BCall];
												if(BDroplist[i] == -4)
													BDroplist[i] = drop[BCall][i];
												j++;
												instant();
											}
										}
										switch(uod[BCall])
										{
											case 1 :BDest = max;
													max = 0;
													break;
											case 0 :BDest = min;
													min = 6;
										}
										real.pickup[BCall] = 'B';
										crucialB();
										postpickup('B');
						}

					}
				}

				//Drop & Pickup
				for(i=0;i<n;i++)
				{
					temp = int_char(drop[i]);
					p = APos + '0';
					q = BPos + '0';
					index = -1;
					x = indexOf(temp,p);
					y = indexOf(temp,q);
					lx = intlen(x);
					ly = intlen(y);
					if((lx > 0) || (ly >0))
					{
						for(j=0;j<lx;j++)
						{
							if(j==0)
							{
								ALastaction = 5;
							}
							index = x[j];
							if((drop[i][index] == APos) && (real.pickup[i] == 'A'))
							{
								s = "Lift A opens at floor ~!";
								blinklist(s,APos,-1);
								s = "Drops the User from floor ~!";
								blinklist(s,dummy.pickup[i],-1);
								deleteindex(i,index);
								instant();
							}
						}

						for(j=0;j<ly;j++)
						{
							if(j==0)
							{
								BLastaction = 6;
							}
							index = y[j];
							if((drop[i][index] == BPos) && (real.pickup[i] == 'B'))
							{
								s = "Lift B opens at floor ~!";
								blinklist(s,BPos,-1);
								s = "Drops the User from floor ~!";
								blinklist(s,dummy.pickup[i],-1);
								deleteindex(i,index);
								instant();
							}
						}
					}
				}

				temp = int_char(real.pickup);
				p = APos + '0';
				q = BPos + '0';
				x = indexOf(temp,p);
				y = indexOf(temp,q);
				lx = intlen(x);
				ly = intlen(y);
				index = -1;
				if((lx > 0) || (ly >0))
				{
					if((ALastaction != 2) && (ADest != APos))
					{
						for(i=0;i<lx;i++)
						{
							if(i==0)
							{
								ALastaction = 7;
							}
							index = x[i];
							if((APos == ADest) && (ACausative == 'D'))
							{
								if((APos != bottomost) && (APos != topmost))
								{
									if(uod[index] != ADircn)
									{
										min = 6;
										max = 0;
										s = "Lift A opens at floor ~!";
										blinklist(s,APos,-1);
										if(uod[index]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[index]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										AUsers += u;
										k=0;
										for(j=0;j<maxUsers;j++)
										{
											if((k<u) && (drop[index][j] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,j+1,-1);
												s = readinput();
												drop[index][j] = *(char_int(s));
												switch(uod[index])
												{
													case 1 : if(drop[index][j] > max)
																max = drop[index][j];
															break;
													case 0 : if(drop[index][j] < min)
																min = drop[index][j];
												}
												if(APicklist[j] == -4)
													APicklist[j] = real.pickup[index];
												if(ADroplist[j] == -4)
													ADroplist[j] = drop[index][j];
												k++;
												instant();
											}
										}
										switch(uod[index])
										{
											case 1 :ADest = max;
													max = 0;
													break;
											case 0 :ADest = min;
													min = 6;
										}
										real.pickup[index] = 'A';
										crucialA();
										postpickup('A');
									}

								}
								else
								{
									if(uod[index] == ADircn)
									{
										min = 6;
										max = 0;
										s = "Lift A opens at floor ~!";
										blinklist(s,APos,-1);
										if(uod[index]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[index]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										AUsers += u;
										k=0;
										for(j=0;j<maxUsers;j++)
										{
											if((k<u) && (drop[index][j] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,j+1,-1);
												s = readinput();
												drop[index][j] = *(char_int(s));
												switch(uod[index])
												{
													case 1 : if(drop[index][j] > max)
																max = drop[index][j];
															break;
													case 0 : if(drop[index][j] < min)
																min = drop[index][j];
												}
												if(APicklist[j] == -4)
													APicklist[j] = real.pickup[index];
												if(ADroplist[j] == -4)
													ADroplist[j] = drop[index][j];
												k++;
												instant();
											}
										}
										switch(uod[index])
										{
											case 1 :ADest = max;
													max = 0;
													break;
											case 0 :ADest = min;
													min = 6;
										}
										real.pickup[index] = 'A';
										crucialA();
										postpickup('A');
									}

								}
							}
							else
							{
								if(uod[index] == ADircn)
								{
									min = 6;
									max = 0;
									s = "Lift A opens at floor ~!";
									blinklist(s,APos,-1);
									if(uod[index]==1)
									{
										s = "Picks up users wanting to go \033[32mUP\033[36m!";
										blinklist(s,-1,-1);
									}
									else
									if(uod[index]==0)
									{
										s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
										blinklist(s,-1,-1);
									}
									instant();
									s = "How many Users wish to enter? : ";
									blinksane(s,-1,-1);
									s = readinput();
									u = *(char_int(s));
									AUsers += u;
									k=0;
									for(j=0;j<maxUsers;j++)
									{
										if((k<u) && (drop[index][j] == -4))
										{
											s = "User ~ :\n Where do you want to go? : ";
											blinksane(s,j+1,-1);
											s = readinput();
											drop[index][j] = *(char_int(s));
											switch(uod[index])
											{
												case 1 : if(drop[index][j] > max)
															max = drop[index][j];
														break;
												case 0 : if(drop[index][j] < min)
															min = drop[index][j];
											}
											if(APicklist[j] == -4)
												APicklist[j] = real.pickup[index];
											if(ADroplist[j] == -4)
												ADroplist[j] = drop[index][j];
											k++;
											instant();
										}
									}
									switch(uod[index])
									{
										case 1 :if(max > ADest)
													ADest = max;
												max = 0;
												break;
										case 0 :if(min < ADest)
													ADest = min;
												min = 6;
									}
									real.pickup[index] = 'A';
									crucialA();
									postpickup('A');
								}

							}
						}
					}

					if((BLastaction != 4) && (BDest != BPos))
					{
						for(i=0;i<ly;i++)
						{
							if(i==0)
							{
								BLastaction = 8;
							}
							index = y[i];
							if((BDest == BPos) && (BCausative == 'D'))
							{
								if((BPos != bottomost) && (BPos != topmost))
								{
									if(uod[index] != ADircn)
									{
										min = 6;
										max = 0;
										s = "Lift B opens at floor ~!";
										blinklist(s,BPos,-1);
										if(uod[index]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[index]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										BUsers += u;
										k=0;
										for(j=0;j<maxUsers;j++)
										{
											if((k<u) && (drop[index][j] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,j+1,-1);
												s = readinput();
												drop[index][j] = *(char_int(s));
												switch(uod[index])
												{
													case 1 : if(drop[index][j] > max)
																max = drop[index][j];
															break;
													case 0 : if(drop[index][j] < min)
																min = drop[index][j];
												}
												if(BPicklist[j] == -4)
													BPicklist[j] = real.pickup[index];
												if(BDroplist[j] == -4)
													BDroplist[j] = drop[index][j];
												k++;
												instant();
											}
										}
										switch(uod[index])
										{
											case 1 :BDest = max;
													max = 0;
													break;
											case 0 :BDest = min;
													min = 6;
										}
										real.pickup[index] = 'B';
										crucialB();
										postpickup('B');
									}
								}
								else
								{
									if(uod[index] == BDircn)
									{
										min = 6;
										max = 0;
										s = "Lift B opens at floor ~!";
										blinklist(s,BPos,-1);
										if(uod[index]==1)
										{
											s = "Picks up users wanting to go \033[32mUP\033[36m!";
											blinklist(s,-1,-1);
										}
										else
										if(uod[index]==0)
										{
											s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
											blinklist(s,-1,-1);
										}
										instant();
										s = "How many Users wish to enter? : ";
										blinksane(s,-1,-1);
										s = readinput();
										u = *(char_int(s));
										BUsers += u;
										k=0;
										for(j=0;j<maxUsers;j++)
										{
											if((k<u) && (drop[index][j] == -4))
											{
												s = "User ~ :\n Where do you want to go? : ";
												blinksane(s,j+1,-1);
												s = readinput();
												drop[index][j] = *(char_int(s));
												switch(uod[index])
												{
													case 1 : if(drop[index][j] > max)
																max = drop[index][j];
															break;
													case 0 : if(drop[index][j] < min)
																min = drop[index][j];
												}
												if(BPicklist[j] == -4)
													BPicklist[j] = real.pickup[index];
												if(BDroplist[j] == -4)
													BDroplist[j] = drop[index][j];
												k++;
												instant();
											}
										}
										switch(uod[index])
										{
											case 1 :BDest = max;
													max = 0;
													break;
											case 0 :BDest = min;
													min = 6;
										}
										real.pickup[index] = 'B';
										crucialB();
										postpickup('B');
									}
								}
							}
							else
							{
								if(uod[index] == BDircn)
								{
									min = 6;
									max = 0;
									s = "Lift B opens at floor ~!";
									blinklist(s,BPos,-1);
									if(uod[index]==1)
									{
										s = "Picks up users wanting to go \033[32mUP\033[36m!";
										blinklist(s,-1,-1);
									}
									else
									if(uod[index]==0)
									{
										s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
										blinklist(s,-1,-1);
									}
									instant();
									s = "How many Users wish to enter? : ";
									blinksane(s,-1,-1);
									s = readinput();
									u = *(char_int(s));
									BUsers += u;
									k=0;
									for(j=0;j<maxUsers;j++)
									{
										if((k<u) && (drop[index][j] == -4))
										{
											s = "User ~ :\n Where do you want to go? : ";
											blinksane(s,j+1,-1);
											s = readinput();
											drop[index][j] = *(char_int(s));
											switch(uod[index])
											{
												case 1 : if(drop[index][j] > max)
															max = drop[index][j];
														break;
												case 0 : if(drop[index][j] < min)
															min = drop[index][j];
											}
											if(BPicklist[j] == -4)
												BPicklist[j] = real.pickup[index];
											if(BDroplist[j] == -4)
												BDroplist[j] = drop[index][j];
											k++;
											instant();
										}
									}
									switch(uod[index])
									{
										case 1 :if(max > BDest)
													BDest = max;
												max = 0;
												break;
										case 0 :if(min < BDest)
													BDest = min;
												min = 6;
									}
									real.pickup[index] = 'B';
									crucialB();
									postpickup('B');
								}
							}
						}
					}
				}

				//Printing --> |Any new Calls? : |
				instant();
				s = "Any";
				blinksane(s,-1,-1);
				s = " new ";
				blinkbling(s,-1,-1);
				s = "Calls (Y/N)? : ";
				blinksane(s,-1,-1);
				chk = readinput();
				chk[0] = toupper(chk[0]);
				switch (chk[0])
				{

					case 'N' :	break;
					case 'Y' :	//Adding Calls
								ALastaction = 9;
								BLastaction = 9;
								//Printing --> |How many new Calls? : |
								instant();
								s = "How many";
								blinksane(s,-1,-1);
								s = " new ";
								blinkbling(s,-1,-1);
								s = "Calls? : ";
								blinksane(s,-1,-1);
								temp = readinput();
								add = *(char_int(temp));
								//Total number of Calls increase!
								/*for(i=0;i<n;i++)
								{
									if(((real.pickup[i] == 'A' ) && (drop[i] == 'A')) || ((real.pickup[i] == 'B' ) && (drop[i] == 'B')))
										add--;
									if(add < 1)
										break;
								}*/
								n += add;
								j=0;
								for(i=0;i<n;i++)//here obviously (n+temp) < 13 !
								{
									//Either a user position that hasn't been occupied yet or a Call position who has already been dropped.
									if(real.pickup[i] == -5)
									{
										instant();
										//Printing --> |USER ~ : |
										s = "Call ";
										blinksane(s,-1,-1);
										s = "~";
										blinkbling(s,j+1,-1);
										s = " : ";
										blinksane(s,-1,-1);
										//Printing --> |YOU ARE ON FLOOR : |
										s = "\nYou are on floor : ";
										//Printing --> |YOU WANT TO GO UP(1)/DOWN(0) : |
										blinksane(s,-1,-1);
										scanf("%d",&real.pickup[i]);
										dummy.pickup[i] = real.pickup[i];
										s = "You want to go ";
										blinksane(s,-1,-1);
										s = "Up(1)/Down(0)";
										blinkbling(s,-1,-1);
										s = " : ";
										blinksane(s,-1,-1);
										scanf("%d",&uod[i]);
										for(k=0;k<maxUsers;k++)
											drop[i][k] = -4;
										j++;
									}
								}//Addition complete.
								update();
								wrtCall();
				}//switch ends.
				if(n > 0)
				{
					if((ACausative == -1) && (BCausative == -1))
					{
						startassign();
						destinate();
					}
					else
					if(ACausative == -1)
					{
						runassign('A');
					}
					else
					if(BCausative == -1)
					{
						runassign('B');
					}
				}
				delay = nsleep(500);
			 }
		}


		//Only after each drop will n be resized
		void deleteindex(int row,int col)
		{
			ALastaction = 10;
			BLastaction = 10;
			//Declaring variables
			int i,j;
			int ct = 0;
			for(i=0;i<maxUsers;i++)
			{
				if(real.pickup[row] == 'A')
				{
					if((APicklist[i] == dummy.pickup[row]) && (ADroplist[i] == drop[row][col]))
					{
						APicklist[i] = -4;
						ADroplist[i] = -4;
						break;
					}
				}
				else
				if(real.pickup[row] == 'B')
				{
					if((BPicklist[i] == dummy.pickup[row]) && (BDroplist[i] == drop[row][col]))
					{
						BPicklist[i] = -4;
						BDroplist[i] = -4;
						break;
					}
				}
			}
			drop[row][col] = -4;
			for(i=0;i<maxUsers;i++)
			{
				if((((real.pickup[row] == 'A') && (ACausative == 'D')) || ((real.pickup[row] == 'B') && (BCausative == 'D'))) && (drop[row][i] == -4))
				{
					ct++;
				}
			}
			if(ct == maxUsers)
			{
				if(ACall != row)//Means this is not for post drop deletion
				{
					if(ACall > row)
						ACall--;
				}
				if(BCall != row)//Means this is not for post drop deletion
				{
					if(BCall > row)
						BCall--;
				}

				//Overwrote the necessary data and deleted the given index
				for(i=row;i<n;i++)
				{
				 	real.pickup[i]=real.pickup[i+1];
					uod[i]=uod[i+1];
					dummy.pickup[i]=dummy.pickup[i+1];
					for(j=0;j<maxUsers;j++)
						drop[i][j] = drop[i+1][j];
					ProbableLift[i]=ProbableLift[i+1];
					Callpos_A[i] = Callpos_A[i+1];
					Callpos_B[i] = Callpos_B[i+1];
					Adis_Call[i] = Adis_Call[i+1];
					Bdis_Call[i] = Bdis_Call[i+1];
					ProbableLift[i] = ProbableLift[i+1];
					f_ADircn[i] = f_ADircn[i+1];
					f_BDircn[i] = f_BDircn[i+1];
				}
				n--;
			}
		}

		void postpickup(char lift)
		{
			//Declaring variables
			int diff;
			bool pos=false;
			char* s;
			int* x;
			int* y;
			char* temp;
			char p,q;
			int i;
			int lx,ly;
			int index;
			wrtCall();
			wrtLift();
			switch(lift)
			{
				case 'A' :
							ALastaction = 11;
							//Reassigning B's destination if necessary
				 			if(BTravel >= 0 && BCausative == 'P')
							{
								//Checking if B's destination is to be changed.
								if(ADircn == BDircn)
								{
									switch(ADircn)
									{
										case 1 : 	diff = APos - BPos;
												 	if(Callpos_A[BCall] >= 0)
												 		pos = true;
													break;
										case 0 : 	diff = BPos - APos;
													if(Callpos_A[BCall] <= 0)
													   pos = true;
									}
									if(diff > 0 && pos == true)
									{
										if(BDest == bottomost || BDest == topmost)
										{
											if(uod[BCall] != ADircn)
											{
												ProbableLift[BCall] = 'A';
												runassign('B');
											}
										}
										else
										{
											if(uod[BCall] == ADircn)
											{
												ProbableLift[BCall] = 'A';
												runassign('B');
											}
										}
									}
								}
								else
								if(ADircn != BDircn)
								{
									//Call must be in between the lifts and closer to A in it's direction of motion

									switch(ADircn)
									{
										case 1 : 	if((APos < BDest) && (BDest < BPos) && (Adis_Call[BCall] < Bdis_Call[BCall]) && (ADircn == uod[BCall]))
													{
														ProbableLift[BCall] = 'A';
														runassign('B');
													}
													break;
										case 0 : 	if((APos > BDest) && (BDest > BPos) && (Adis_Call[BCall] < Bdis_Call[BCall]) && (ADircn == uod[BCall]))
													{
														ProbableLift[BCall] = 'A';
														runassign('B');
													}
									}
								}
							}
							break;
				case 'B' :
							BLastaction = 12;
							if(ATravel >= 0 && ACausative == 'P')
							{
								//Checking if B's destination is to be changed.
								if(ADircn == BDircn)
								{
									switch(BDircn)
									{
										case 1 : 	diff = BPos - APos;
													if(Callpos_B[ACall] >= 0)
														pos = true;
													break;
										case 0 : 	diff = APos - BPos;
													if(Callpos_B[ACall] <= 0)
													   pos = true;
									}
									if(diff > 0 && pos == true)
									{
										if(ADest == bottomost || ADest == topmost)
										{
											if(uod[ACall] != BDircn)
											{
												ProbableLift[ACall] = 'B';
												runassign('A');
											}
										}
										else
										{
											if(uod[ACall] == BDircn)
											{
												ProbableLift[ACall] = 'B';
												runassign('A');
											}
										}
									}
								}
								else
								if(ADircn != BDircn)
								{
									//Call must be in between the lifts and closer to A in it's direction of motion

									switch(BDircn)
									{
										case 1 : 	if((BPos < ADest) && (ADest < APos) && (Bdis_Call[ACall] < Adis_Call[ACall]) && (BDircn == uod[ACall]))
													{
														ProbableLift[ACall] = 'B';
														runassign('A');
													}
													break;
										case 0 : 	if((BPos > ADest) && (ADest > APos) && (Bdis_Call[ACall] < Adis_Call[ACall]) && (BDircn == uod[ACall]))
													{
														ProbableLift[ACall] = 'B';
														runassign('A');
													}
									}
								}
							}
							//Reassigning B's destination if necessary
							/*if(BTravel == 0 && BCausative == 'D')
							{
								temp = int_char(dummy.pickup);
								q = BPos + '0';
								y = indexOf(temp,q);
								ly = intlen(x);
								for(i=0;i<ly;i++)
								{
									index = y[i];
									if(real.pickup[index] == 'B')
									{
										BNull();
										BCausative = 'D';
										BCall = index;
										BDest = drop[index];
										crucialB();
									}
								}
							}*/
			}
		}
		void runassign (char lift)
		{
			//Declaring variables
			int dircn;
			int min,max,ct;
			int i,j,u;
			char* s;

			wrtCall();
			wrtLift();
			switch(lift)
			{
				case 'A' :	//Means B is moving obviously
							ALastaction = 13;
							ADest = APos;
							dircn = ADircn;
							wrtCall();
							wrtLift();
							ANull();
							min = 12;
							ct = 0;
							if((Callpos_A[bottomost] != 0) && (Callpos_A[topmost] != 0))
							{
								for(i=0;i<n;i++)
								{
									if(real.pickup[i] != 'B')
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_A[i] > 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
													else
													if(Callpos_A[i] == 0)
													{
														ACall = i;
														min = -1;
														ct++;
													}
													break;
											case 0 :
													if(Callpos_A[i] < 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
													else
													if(Callpos_A[i] == 0)
													{
														ACall = i;
														min = -1;
														ct++;
													}
										}
									}
								}
								if(ct==0)
								{
									//Switching dircns
									switch(dircn)
									{
										case 1  :ADircn = 0;
												 break;
										case 0  :ADircn = 1;
									}

									dircn = ADircn;
									min = 12;
									for(i=0;i<n;i++)
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_A[i] >= 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
													break;
											case 0 :
													if(Callpos_A[i] <= 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
										}
									}
									if(ct == 0)
										ACall = -1;
								}
								//Destinating
								if(ACall != -1)
								{
									switch(dircn)
									{
										case 1 :
												if(Callpos_A[ACall] > 0)
												{
													ADest = real.pickup[ACall];
													dummy.pickup[ACall]= real.pickup[ACall];
													ACausative = 'P';
													crucialA();
												}
												else
												if(Callpos_A[ACall] == 0)
												{
													min = 6;
													max = 0;
													s = "Lift A opens at floor ~!";
													blinklist(s,dummy.pickup[ACall],-1);
													if(uod[ACall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[ACall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													AUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[ACall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[ACall][i] = *(char_int(s));
															switch(uod[ACall])
															{
																case 1 : if(drop[ACall][i] > max)
																			max = drop[ACall][i];
																		break;
																case 0 : if(drop[ACall][i] < min)
																			min = drop[ACall][i];
															}
															if(APicklist[i] == -4)
																APicklist[i] = real.pickup[ACall];
															if(ADroplist[i] == -4)
																ADroplist[i] = drop[ACall][i];
															j++;
															instant();
														}
													}
													switch(uod[ACall])
													{
														case 1 :ADest = max;
																max = 0;
																break;
														case 0 :ADest = min;
																min = 6;
													}
													real.pickup[ACall] = 'A';
													ACausative = 'D';
													crucialA();
												}
												break;
										case 0 :
												if(Callpos_A[i] < 0)
												{
													ADest = real.pickup[ACall];
													dummy.pickup[ACall]= real.pickup[ACall];
													ACausative = 'P';
													crucialA();
												}
												else
												if(Callpos_A[ACall] == 0)
												{
													min = 6;
													max = 0;
													s = "Lift A opens at floor ~!";
													blinklist(s,dummy.pickup[ACall],-1);
													if(uod[ACall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[ACall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													AUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[ACall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[ACall][i] = *(char_int(s));
															switch(uod[ACall])
															{
																case 1 : if(drop[ACall][i] > max)
																			max = drop[ACall][i];
																		break;
																case 0 : if(drop[ACall][i] < min)
																			min = drop[ACall][i];
															}
															if(APicklist[i] == -4)
																APicklist[i] = real.pickup[ACall];
															if(ADroplist[i] == -4)
																ADroplist[i] = drop[ACall][i];
															j++;
															instant();
														}
													}
													switch(uod[ACall])
													{
														case 1 :ADest = max;
																max = 0;
																break;
														case 0 :ADest = min;
																min = 6;
													}
													real.pickup[ACall] = 'A';
													ACausative = 'D';
													crucialA();
												}

									}
								}
								else
									ANull();
							}
							else
							{
								switch(dircn)
								{
									case 1  :ADircn = 0;
											 break;
									case 0  :ADircn = 1;
								}
								dircn = ADircn;
								min = 12;

								for(i=0;i<n;i++)
								{
									if(real.pickup[i] != 'B')
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_A[i] > 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
													else
													if(Callpos_A[i] == 0)
													{
														ACall = i;
														min = -1;
														ct++;
													}
													break;
											case 0 :
													if(Callpos_A[i] < 0)
													{
														if((ProbableLift[i]) == 'A' && (Adis_Call[i] < min))
														{
															min = Adis_Call[i];
															ACall = i;
															ct++;
														}
													}
													else
													if(Callpos_A[i] == 0)
													{
														ACall = i;
														min = -1;
														ct++;
													}
										}
									}
								}
								if(ct==0)
									ACall = -1;
								//Destinating
								if(ACall != -1)
								{
									switch(dircn)
									{
										case 1 :
												if(Callpos_A[ACall] > 0)
												{
													ADest = real.pickup[ACall];
													dummy.pickup[ACall]= real.pickup[ACall];
													ACausative = 'P';
													crucialA();
												}
												else
												if(Callpos_A[ACall] == 0)
												{
													min = 6;
													max = 0;
													s = "Lift A opens at floor ~!";
													blinklist(s,dummy.pickup[ACall],-1);
													if(uod[ACall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[ACall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													AUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[ACall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[ACall][i] = *(char_int(s));
															switch(uod[ACall])
															{
																case 1 : if(drop[ACall][i] > max)
																			max = drop[ACall][i];
																		break;
																case 0 : if(drop[ACall][i] < min)
																			min = drop[ACall][i];
															}
															if(APicklist[i] == -4)
																APicklist[i] = real.pickup[ACall];
															if(ADroplist[i] == -4)
																ADroplist[i] = drop[ACall][i];
															j++;
															instant();
														}
													}
													switch(uod[ACall])
													{
														case 1 :ADest = max;
																max = 0;
																break;
														case 0 :ADest = min;
																min = 6;
													}
													real.pickup[ACall] = 'A';
													ACausative = 'D';
													crucialA();
												}
												break;
										case 0 :
												if(Callpos_A[i] < 0)
												{
													ADest = real.pickup[ACall];
													dummy.pickup[ACall]= real.pickup[ACall];
													ACausative = 'P';
													crucialA();
												}
												else
												if(Callpos_A[ACall] == 0)
												{
													min = 6;
													max = 0;
													s = "Lift A opens at floor ~!";
													blinklist(s,dummy.pickup[ACall],-1);
													if(uod[ACall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[ACall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													AUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[ACall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[ACall][i] = *(char_int(s));
															switch(uod[ACall])
															{
																case 1 : if(drop[ACall][i] > max)
																			max = drop[ACall][i];
																		break;
																case 0 : if(drop[ACall][i] < min)
																			min = drop[ACall][i];
															}
															if(APicklist[i] == -4)
																APicklist[i] = real.pickup[ACall];
															if(ADroplist[i] == -4)
																ADroplist[i] = drop[ACall][i];
															j++;
															instant();
														}
													}
													switch(uod[ACall])
													{
														case 1 :ADest = max;
																max = 0;
																break;
														case 0 :ADest = min;
																min = 6;
													}
													real.pickup[ACall] = 'A';
													ACausative = 'D';
													crucialA();
												}

									}
								}
								else
									ANull();
							}
							break;
				case 'B' : //Means A is moving obviously
							BLastaction = 14;
							BDest = BPos;
							dircn = BDircn;
							min = 12;
							ct = 0;
							if((Callpos_B[bottomost] != 0) && (Callpos_B[topmost] != 0))
							{
								for(i=0;i<n;i++)
								{
									if(real.pickup[i] != 'A')
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_B[i] > 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
													else
													if(Callpos_B[i] == 0)
													{
														BCall = i;
														min = -1;
														ct++;
													}
													break;
											case 0 :
													if(Callpos_B[i] <= 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
													else
													if(Callpos_B[i] == 0)
													{
														BCall = i;
														min = -1;
														ct++;
													}
										}
									}
								}
								if(ct==0)
								{
									//Switching dircns
									switch(dircn)
									{
										case 1  :BDircn = 0;
												 break;
										case 0  :BDircn = 1;
									}

									dircn = BDircn;
									BDest = BPos;
									min = 12;
									for(i=0;i<n;i++)
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_B[i] >= 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
													break;
											case 0 :
													if(Callpos_B[i] <= 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
										}
									}
									if(ct == 0)
										BCall = -1;
								}
								//Destinating
								if(BCall != -1)
								{
									switch(dircn)
									{
										case 1 :
												if(Callpos_B[BCall] > 0)
												{
													BDest = real.pickup[BCall];
													dummy.pickup[BCall]= real.pickup[BCall];
													BCausative = 'P';
													crucialB();
												}
												else
												if(Callpos_B[BCall] == 0)
												{
													min = 6;
													max= 0;
													s = "Lift B opens at floor ~!";
													blinklist(s,dummy.pickup[BCall],-1);
													if(uod[BCall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[BCall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													BUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[BCall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[BCall][i] = *(char_int(s));
															switch(uod[BCall])
															{
																case 1 : if(drop[BCall][i] > max)
																			max = drop[BCall][i];
																		break;
																case 0 : if(drop[BCall][i] < min)
																			min = drop[BCall][i];
															}
															if(BPicklist[i] == -4)
																BPicklist[i] = real.pickup[BCall];
															if(BDroplist[i] == -4)
																BDroplist[i] = drop[BCall][i];
															j++;
															instant();
														}
													}
													switch(uod[BCall])
													{
														case 1 :BDest = max;
																max = 0;
																break;
														case 0 :BDest = min;
																min = 6;
													}
													real.pickup[BCall] = 'B';
													BCausative = 'D';
													crucialB();
												}
												break;
										case 0 :
												if(Callpos_B[i] < 0)
												{
													BDest = real.pickup[BCall];
													dummy.pickup[BCall]= real.pickup[BCall];
													BCausative = 'P';
													crucialB();
												}
												else
												if(Callpos_B[BCall] == 0)
												{
													min = 6;
													max= 0;
													s = "Lift B opens at floor ~!";
													blinklist(s,dummy.pickup[BCall],-1);
													if(uod[BCall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[BCall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													BUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[BCall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[BCall][i] = *(char_int(s));
															switch(uod[BCall])
															{
																case 1 : if(drop[BCall][i] > max)
																			max = drop[BCall][i];
																		break;
																case 0 : if(drop[BCall][i] < min)
																			min = drop[BCall][i];
															}
															if(BPicklist[i] == -4)
																BPicklist[i] = real.pickup[BCall];
															if(BDroplist[i] == -4)
																BDroplist[i] = drop[BCall][i];
															j++;
															instant();
														}
													}
													switch(uod[BCall])
													{
														case 1 :BDest = max;
																max = 0;
																break;
														case 0 :BDest = min;
																min = 6;
													}
													real.pickup[BCall] = 'B';
													BCausative = 'D';
													crucialB();
												}

									}
								}
								else
								BNull();
							}
							else
							{
								switch(dircn)
								{
									case 1  :BDircn = 0;
											 break;
									case 0  :BDircn = 1;
								}
								dircn = BDircn;
								BDest = BPos;
								min = 12;
								for(i=0;i<n;i++)
								{
									if(real.pickup[i] != 'A')
									{
										switch(dircn)
										{
											case 1 :
													if(Callpos_B[i] > 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
													else
													if(Callpos_B[i] == 0)
													{
														BCall = i;
														min = -1;
														ct++;
													}
													break;
											case 0 :
													if(Callpos_B[i] <= 0)
													{
														if((ProbableLift[i]) == 'B' && (Bdis_Call[i] < min))
															{
																min = Bdis_Call[i];
																BCall = i;
																ct++;
															}
													}
													else
													if(Callpos_B[i] == 0)
													{
														BCall = i;
														min = -1;
														ct++;
													}
										}
									}
								}

								if(ct==0)
									BCall = -1;
								//Destinating
								if(BCall != -1)
								{
									switch(dircn)
									{
										case 1 :
												if(Callpos_B[BCall] > 0)
												{
													BDest = real.pickup[BCall];
													dummy.pickup[BCall]= real.pickup[BCall];
													BCausative = 'P';
													crucialB();
												}
												else
												if(Callpos_B[BCall] == 0)
												{
													min = 6;
													max= 0;
													s = "Lift B opens at floor ~!";
													blinklist(s,dummy.pickup[BCall],-1);
													if(uod[BCall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[BCall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													BUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[BCall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[BCall][i] = *(char_int(s));
															switch(uod[BCall])
															{
																case 1 : if(drop[BCall][i] > max)
																			max = drop[BCall][i];
																		break;
																case 0 : if(drop[BCall][i] < min)
																			min = drop[BCall][i];
															}
															if(BPicklist[i] == -4)
																BPicklist[i] = real.pickup[BCall];
															if(BDroplist[i] == -4)
																BDroplist[i] = drop[BCall][i];
															j++;
															instant();
														}
													}
													switch(uod[BCall])
													{
														case 1 :BDest = max;
																max = 0;
																break;
														case 0 :BDest = min;
																min = 6;
													}
													real.pickup[BCall] = 'B';
													BCausative = 'D';
													crucialB();
												}
												break;
										case 0 :
												if(Callpos_B[i] < 0)
												{
													BDest = real.pickup[BCall];
													dummy.pickup[BCall]= real.pickup[BCall];
													BCausative = 'P';
													crucialB();
												}
												else
												if(Callpos_B[BCall] == 0)
												{
													min = 6;
													max= 0;
													s = "Lift B opens at floor ~!";
													blinklist(s,dummy.pickup[BCall],-1);
													if(uod[BCall]==1)
													{
														s = "Picks up users wanting to go \033[32mUP\033[36m!";
														blinklist(s,-1,-1);
													}
													else
													if(uod[BCall]==0)
													{
														s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
														blinklist(s,-1,-1);
													}
													s = "How many Users wish to enter? : ";
													blinksane(s,-1,-1);
													s = readinput();
													u = *(char_int(s));
													BUsers += u;
													j=0;
													for(i=0;i<maxUsers;i++)
													{
														if((j<u) && (drop[BCall][i] == -4))
														{
															s = "User ~ :\n Where do you want to go? : ";
															blinksane(s,i+1,-1);
															s = readinput();
															drop[BCall][i] = *(char_int(s));
															switch(uod[BCall])
															{
																case 1 : if(drop[BCall][i] > max)
																			max = drop[BCall][i];
																		break;
																case 0 : if(drop[BCall][i] < min)
																			min = drop[BCall][i];
															}
															if(BPicklist[i] == -4)
																BPicklist[i] = real.pickup[BCall];
															if(BDroplist[i] == -4)
																BDroplist[i] = drop[BCall][i];
															j++;
															instant();
														}
													}
													switch(uod[BCall])
													{
														case 1 :BDest = max;
																max = 0;
																break;
														case 0 :BDest = min;
																min = 6;
													}
													real.pickup[BCall] = 'B';
													BCausative = 'D';
													crucialB();
												}
									}
								}
								else
								BNull();
							}
			}
		}

		/*
			Calculating position of each Call w.r.t. individual Lift.
			+1 --> Above the Lift.
			-1 --> Below the lift.
			 0 --> On the floor of the lift!
		*/
		void wrtLift()
		{
			//Decalring variables
			int i;

			//Process
			for(i=0;i<n;i++)
			{
				//Callpos_A
				if(real.pickup[i] != 'A')
				{
					if(real.pickup[i]>APos)
					{
						Callpos_A[i] = +1;
					}
					else
					if(real.pickup[i]<APos)
					{
						Callpos_A[i] = -1;
					}
					else
					{
						Callpos_A[i] = 0;
					}
				}
				//Callpos_B
				if(real.pickup[i] != 'B')
				{
					if(real.pickup[i]>BPos)
					{
						Callpos_B[i] = +1;
					}
					else
					if(real.pickup[i]<BPos)
					{
						Callpos_B[i] = -1;
					}
					else
					{
						Callpos_B[i] = 0;
					}
				}
			}
		}

		/*
			Calculating distance of each Lift w.r.t. individual Call.
		*/
		void wrtCall()
		{
			//Declaring variables
			int i;
			topmost = 0;
			bottomost = 6;
			//Process
			for(i=0;i<n;i++)
			{
				if((real.pickup[i] != 'A') && (real.pickup[i] != 'B'))
				{
					if(real.pickup[i] > topmost)
					{
						topmost = real.pickup[i];
					}
					if(real.pickup[i] < bottomost)
					{
						bottomost = real.pickup[i];
					}
					//Distance of Lift A w.r.t. Call.
					if(ATravel != -1 )
					{
						Adis_Call[i] = abs(ADest - APos)+abs(ADest - real.pickup[i]);
						if((ADest - real.pickup[i]) > 0)
							f_ADircn[i] = 0;
						else
						if((ADest - real.pickup[i]) < 0)
							f_ADircn[i] = 1;
						else
						{
							if((APos - real.pickup[i]) > 0)
								f_ADircn[i] = 0;
							else
							if((APos - real.pickup[i]) < 0)
								f_ADircn[i] = 1;
						}
					}
					else
					{
						Adis_Call[i] = abs(APos - real.pickup[i]);
						if((APos - real.pickup[i]) > 0)
							f_ADircn[i] = 0;
						else
						if((APos - real.pickup[i]) < 0)
							f_ADircn[i] = 1;
					}

					//Distance of Lift B w.r.t. Call.
					if(BTravel != -1)
					{
						Bdis_Call[i] = abs(BDest - BPos)+abs(BDest - real.pickup[i]);
						if((BDest - real.pickup[i]) > 0)
							f_BDircn[i] = 0;
						else
						if((BDest - real.pickup[i]) < 0)
							f_BDircn[i] = 1;
						else
						{
							if((BPos - real.pickup[i]) > 0)
								f_BDircn[i] = 0;
							else
							if((BPos - real.pickup[i]) < 0)
								f_BDircn[i] = 1;
						}
					}
					else
					{
						Bdis_Call[i] = abs(BPos - real.pickup[i]);
						if((BPos - real.pickup[i]) > 0)
							f_BDircn[i] = 0;
						else
						if((BPos - real.pickup[i]) < 0)
							f_BDircn[i] = 1;
					}
				}
				else
				{
					Adis_Call[i] = -4;
					Bdis_Call[i] = -4;
					f_ADircn[i] = -4;
					f_BDircn[i] = -4;
				}

			}

			//Assigning probable lifts for each user.
			for(i=0;i<n;i++)
			{
				if(real.pickup[i] != 'A' && real.pickup[i] != 'B')
				{
					if(Adis_Call[i] < Bdis_Call[i])
					{
						if(real.pickup[i] == bottomost || real.pickup[i] == topmost)
						{
							if(topmost != bottomost)
							{
								if(uod[i] != f_ADircn[i])
									ProbableLift[i] = 'A';
								else
									ProbableLift[i] = 'B';
							}
							else
							{
								if((abs(topmost - 6) - topmost) > 0)
								{
									//Closer to 0 floor
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] != f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
								else
								if((abs(topmost - 6) - topmost) < 0)
								{
									//Closer to 6 floor
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] != f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
								else
								{
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
							}
						}
						else
						{
							if(uod[i] == f_ADircn[i])
								ProbableLift[i] = 'A';
							else
								ProbableLift[i] = 'B';
						}
					}
					else
					if(Adis_Call[i] > Bdis_Call[i])
					{
						if(real.pickup[i] == bottomost || real.pickup[i] == topmost)
						{
							if(topmost != bottomost)
							{
								if(uod[i] != f_BDircn[i])
									ProbableLift[i] = 'B';
								else
									ProbableLift[i] = 'A';
							}
							else
							{
								if((abs(topmost - 6) - topmost) > 0)
								{
									//Closer to 0 floor
									switch(f_BDircn[i])
									{
										case 1 : if(uod[i] != f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
												break;
										case 0 : if(uod[i] == f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
									}
								}
								else
								if((abs(topmost - 6) - topmost) < 0)
								{
									//Closer to 6 floor
									switch(f_BDircn[i])
									{
										case 1 : if(uod[i] == f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
												break;
										case 0 : if(uod[i] != f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
									}
								}
								else
								{
									switch(f_BDircn[i])
									{
										case 1 : if(uod[i] == f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
												break;
										case 0 : if(uod[i] == f_BDircn[i])
													ProbableLift[i] = 'B';
												 else
													ProbableLift[i] = 'A';
									}
								}
							}
						}
						else
						if(uod[i] == f_BDircn[i])
							ProbableLift[i] = 'B';
						else
							ProbableLift[i] = 'A';
					}
					else
					{
						if(real.pickup[i] == bottomost || real.pickup[i] == topmost)
						{
							if(topmost != bottomost)
							{
								if(uod[i] != f_ADircn[i])
									ProbableLift[i] = 'A';
								else
									ProbableLift[i] = 'B';
							}
							else
							{
								if((abs(topmost - 6) - topmost) > 0)
								{
									//Closer to 0 floor
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] != f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
								else
								if((abs(topmost - 6) - topmost) < 0)
								{
									//Closer to 6 floor
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] != f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
								else
								{
									switch(f_ADircn[i])
									{
										case 1 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
												break;
										case 0 : if(uod[i] == f_ADircn[i])
													ProbableLift[i] = 'A';
												 else
													ProbableLift[i] = 'B';
									}
								}
							}
						}
						else
						{
							switch(uod[i])
							{
								case 1 : 	if(f_ADircn[i] == 1)
												ProbableLift[i] = 'A';
											else
											ProbableLift[i] = 'B';
											break;
								case 0 :	if(f_BDircn[i] == 0)
												ProbableLift[i] = 'B';
											else
											ProbableLift[i] = 'A';
							}
						}
					}
				}
				else
				{
					ProbableLift[i] = -4;
				}
			}
		}

		void moveA()
		{
			if (ATravel != -1)
			{
				if((ADircn == 1) && (ADest != APos))
				APos++;
				else
				if((ADircn == 0) && (ADest != APos))
				APos--;
				ATravel--;
			}
		}

		void moveB()
		{
			if(BTravel != -1)
			{
				if((BDircn == 1) && (BDest != BPos))
				BPos++;
				else
				if((BDircn == 0) && (BDest != BPos))
				BPos--;
				BTravel--;
			}
		}
		void destinate()
		{

			//Initialization to differentiate case of non-assignment
			ANull();
			BNull();
			//Declaring variables
			int u;
			int max = 0;
			int min = 6;
			char* s;
			char* input;
			int delay,i,j;
			if((ACall != -1) && (BCall != -1))
			{
				if((APos == real.pickup[ACall]) || (BPos == real.pickup[BCall]))
				{
					if(APos == real.pickup[ACall] && BPos == real.pickup[BCall])
					{
						s = "Lift A opens at floor ~!";
						blinklist(s,dummy.pickup[ACall],-1);
						if(uod[ACall]==1)
						{
							s = "Picks up users wanting to go \033[32mUP\033[36m!";
							blinklist(s,-1,-1);
						}
						else
						if(uod[ACall]==0)
						{
							s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
							blinklist(s,-1,-1);
						}
						instant();
						s = "How many Users wish to enter? : ";
						blinksane(s,-1,-1);
						s = readinput();
						u = *(char_int(s));
						AUsers += u;
						j=0;
						for(i=0;i<maxUsers;i++)
						{
							if((j<u) && (drop[ACall][i] == -4))
							{
								s = "User ~ :\n Where do you want to go? : ";
								blinksane(s,i+1,-1);
								s = readinput();
								drop[ACall][i] = *(char_int(s));
								switch(uod[ACall])
								{
									case 1 : if(drop[ACall][i] > max)
												max = drop[ACall][i];
											break;
									case 0 : if(drop[ACall][i] < min)
												min = drop[ACall][i];
								}
								if(APicklist[i] == -4)
									APicklist[i] = real.pickup[ACall];
								if(ADroplist[i] == -4)
									ADroplist[i] = drop[ACall][i];
								j++;
								instant();
							}
						}
						real.pickup[ACall] = 'A';
						switch(uod[ACall])
						{
							case 1 :ADest = max;
									max = 0;
									break;
							case 0 :ADest = min;
									min = 6;
						}
						s = "Lift B opens at floor ~!";
						blinklist(s,dummy.pickup[BCall],-1);
						if(uod[BCall]==1)
						{
							s = "Picks up users wanting to go \033[32mUP\033[36m!";
							blinklist(s,-1,-1);
						}
						else
						if(uod[BCall]==0)
						{
							s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
							blinklist(s,-1,-1);
						}
						instant();
						s = "How many Users wish to enter? : ";
						blinksane(s,-1,-1);
						s = readinput();
						u = *(char_int(s));
						BUsers += u;
						j=0;
						for(i=0;i<maxUsers;i++)
						{
							if((j<u) && (drop[BCall][i] == -4))
							{
								s = "User ~ :\n Where do you want to go? : ";
								blinksane(s,i+1,-1);
								s = readinput();
								drop[BCall][i] = *(char_int(s));
								switch(uod[BCall])
								{
									case 1 : if(drop[BCall][i] > max)
												max = drop[BCall][i];
											break;
									case 0 : if(drop[BCall][i] < min)
												min = drop[BCall][i];
								}
								if(BPicklist[i] == -4)
									BPicklist[i] = real.pickup[BCall];
								if(BDroplist[i] == -4)
									BDroplist[i] = drop[BCall][i];
								j++;
								instant();
							}
						}
						switch(uod[BCall])
						{
							case 1 :BDest = max;
									max = 0;
									break;
							case 0 :BDest = min;
									min = 6;
						}
						real.pickup[BCall] = 'B';
						ACausative = 'D';
						BCausative = 'D';
					}
					else
					if(APos == real.pickup[ACall])
					{
						BDest = real.pickup[BCall];
						BCausative = 'P';
						s = "Lift A opens at floor ~!";
						blinklist(s,dummy.pickup[ACall],-1);
						if(uod[ACall]==1)
						{
							s = "Picks up users wanting to go \033[32mUP\033[36m!";
							blinklist(s,-1,-1);
						}
						else
						if(uod[ACall]==0)
						{
							s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
							blinklist(s,-1,-1);
						}
						instant();
						s = "How many Users wish to enter? : ";
						blinksane(s,-1,-1);
						s = readinput();
						u = *(char_int(s));
						AUsers += u;
						j=0;
						for(i=0;i<maxUsers;i++)
						{
							if((j<u) && (drop[ACall][i] == -4))
							{
								s = "User ~ :\n Where do you want to go? : ";
								blinksane(s,i+1,-1);
								s = readinput();
								drop[ACall][i] = *(char_int(s));
								switch(uod[ACall])
								{
									case 1 : if(drop[ACall][i] > max)
												max = drop[ACall][i];
											break;
									case 0 : if(drop[ACall][i] < min)
												min = drop[ACall][i];
								}
								if(APicklist[i] == -4)
									APicklist[i] = real.pickup[ACall];
								if(ADroplist[i] == -4)
									ADroplist[i] = drop[ACall][i];
								j++;
								instant();
							}
						}
						real.pickup[ACall] = 'A';
						switch(uod[ACall])
						{
							case 1 :ADest = max;
									max = 0;
									break;
							case 0 :ADest = min;
									min = 6;
						}
						ACausative = 'D';
					}
					else
					if(BPos == real.pickup[BCall])
					{
						ADest = real.pickup[ACall];
						ACausative = 'P';
						s = "Lift B opens at floor ~!";
						blinklist(s,dummy.pickup[BCall],-1);
						if(uod[BCall]==1)
						{
							s = "Picks up users wanting to go \033[32mUP\033[36m!";
							blinklist(s,-1,-1);
						}
						else
						if(uod[BCall]==0)
						{
							s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
							blinklist(s,-1,-1);
						}
						instant();
						s = "How many Users wish to enter? : ";
						blinksane(s,-1,-1);
						s = readinput();
						u = *(char_int(s));
						BUsers += u;
						j=0;
						for(i=0;i<maxUsers;i++)
						{
							if((j<u) && (drop[BCall][i] == -4))
							{
								s = "User ~ :\n Where do you want to go? : ";
								blinksane(s,i+1,-1);
								s = readinput();
								drop[BCall][i] = *(char_int(s));
								switch(uod[BCall])
								{
									case 1 : if(drop[BCall][i] > max)
												max = drop[BCall][i];
											break;
									case 0 : if(drop[BCall][i] < min)
												min = drop[BCall][i];
								}
								if(BPicklist[i] == -4)
									BPicklist[i] = real.pickup[BCall];
								if(BDroplist[i] == -4)
									BDroplist[i] = drop[BCall][i];
								j++;
								instant();
							}
						}
						switch(uod[BCall])
						{
							case 1 :BDest = max;
									max = 0;
									break;
							case 0 :BDest = min;
									min = 6;
						}
						real.pickup[BCall] = 'B';
						BCausative = 'D';
					}

				}
				else
				{
					ADest = real.pickup[ACall];
					BDest = real.pickup[BCall];
					ACausative = 'P';
					BCausative = 'P';
				}
				crucialA();
				crucialB();
			}
			else
			if((ACall != -1) && (BCall == -1))
			{
				BDest = -1;
				if(APos == real.pickup[ACall])
				{
					instant();
					s = "Lift A opens at floor ~!";
					blinklist(s,dummy.pickup[ACall],-1);
					if(uod[ACall]==1)
					{
						s = "Picks up users wanting to go \033[32mUP\033[36m!";
						blinklist(s,-1,-1);
					}
					else
					if(uod[ACall]==0)
					{
						s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
						blinklist(s,-1,-1);
					}
					instant();
					s = "How many Users wish to enter? : ";
					blinksane(s,-1,-1);
					s = readinput();
					u = *(char_int(s));
					AUsers += u;
					j=0;
					for(i=0;i<maxUsers;i++)
					{
						if((j<u) && (drop[ACall][i] == -4))
						{
							s = "User ~ :\n Where do you want to go? : ";
							blinksane(s,i+1,-1);
							s = readinput();
							drop[ACall][i] = *(char_int(s));
							switch(uod[ACall])
							{
								case 1 : if(drop[ACall][i] > max)
											max = drop[ACall][i];
										break;
								case 0 : if(drop[ACall][i] < min)
											min = drop[ACall][i];
							}
							if(APicklist[i] == -4)
								APicklist[i] = real.pickup[ACall];
							if(ADroplist[i] == -4)
								ADroplist[i] = drop[ACall][i];
							j++;
							instant();
						}
					}
					real.pickup[ACall] = 'A';
					switch(uod[ACall])
					{
						case 1 :ADest = max;
								max = 0;
								break;
						case 0 :ADest = min;
								min = 6;
					}
					ACausative = 'D';
				}
				else
				{
					ADest = real.pickup[ACall];
					ACausative = 'P';
				}
				crucialA();
			}
			else
			if((BCall != -1) && (ACall == -1))
			{
				ADest = -1;
				if(BPos == real.pickup[BCall])
				{
					instant();
					s = "Lift B opens at floor ~!";
					blinklist(s,dummy.pickup[BCall],-1);
					if(uod[BCall]==1)
					{
						s = "Picks up users wanting to go \033[32mUP\033[36m!";
						blinklist(s,-1,-1);
					}
					else
					if(uod[BCall]==0)
					{
						s = "Picks up users wanting to go \033[32mDOWN\033[36m!";
						blinklist(s,-1,-1);
					}
					instant();
					s = "How many Users wish to enter? : ";
					blinksane(s,-1,-1);
					s = readinput();
					u = *(char_int(s));
					BUsers += u;
					j=0;
					for(i=0;i<maxUsers;i++)
					{
						if((j<u) && (drop[BCall][i] == -4))
						{
							s = "User ~ :\n Where do you want to go? : ";
							blinksane(s,i+1,-1);
							s = readinput();
							drop[BCall][i] = *(char_int(s));
							switch(uod[BCall])
							{
								case 1 : if(drop[BCall][i] > max)
											max = drop[BCall][i];
										break;
								case 0 : if(drop[BCall][i] < min)
											min = drop[BCall][i];
							}
							if(BPicklist[i] == -4)
								BPicklist[i] = real.pickup[BCall];
							if(BDroplist[i] == -4)
								BDroplist[i] = drop[BCall][i];
							j++;
							instant();
						}
					}
					switch(uod[BCall])
					{
						case 1 :BDest = max;
								max = 0;
								break;
						case 0 :BDest = min;
								min = 6;
					}
					real.pickup[BCall] = 'B';
					BCausative = 'D';
				}
				else
				{
					BDest = real.pickup[BCall];
					BCausative = 'P';
				}
				crucialB();
			}
			else
			{
				ADest = -1;
				BDest = -1;
			}
			//Assignment of crucial variables for lift A
			if(ACall != -1)
				crucialA();
			else
				ATravel = -1;//Indicates no movement for A
			//Assignment of crucial variables for lift B
			if(BCall != -1)
				crucialB();
			else
				BTravel = -1;//Indicates no movement for B
		}


		void startassign()
		{
			//Declaring variables
			int i,j,k,l;//Loop control variables
			char* s;
			int low,high,ctu,ctd;
			int* x;
			int* y;
			char* temp;
			char p,q;
			int lx,ly;
			int index;
			int dis,pos,min,max;
			int ahdis,aldis,bhdis,bldis,hpos,lpos;
			int dircn=-1;
			bool check = false;
			int closerbound, fartherbound;
			//Initialization
			wrtCall();
			wrtLift();

			if(APos == BPos && n>1)
			{
				//Process
				temp = int_char(real.pickup);
				p = APos +'0';
				x = indexOf(temp,p);
				l = intlen(x);

				switch(l)
				{
					case 0 :low=6;
							high=0;
							ctu=0;
							ctd=0;

							for(i=0;i<n;i++)
							{
								switch (uod[i])
								{
									case 0 : //Topmost user wanting to go down.
											if(real.pickup[i]>high)
											{
												high = real.pickup[i];
												hpos = i;
											}
											ctd++; //Count for "down" valid floor directions
											break;
									case 1 : //Bottomost bottomost user wanting to go up.
											if(real.pickup[i]<low)
											{
												low = real.pickup[i];
												lpos = i;
											}
											ctu++; //Count for "up" valid floor directions
								}
							}
							if(ctd > 0 && ctu > 0)
							{
								//Assigning closest lift
								ProbableLift[hpos] = 'B';
								ProbableLift[lpos] = 'A';
								BCall = hpos;
								ACall = lpos;

							}
							else
							{
								if(ctd == 0)
								{
									if(abs(real.pickup[lpos]-APos)<abs(real.pickup[lpos]-BPos))
									{
										ProbableLift[lpos] = 'A';
										ACall = lpos;
										BCall = -1; //-1 indicates that lift 'B' is to be stationary.
									}
									else
									{
										ProbableLift[lpos] = 'B';
										BCall = lpos;
										ACall = -1;//-1 indicates that lift 'A' is to be stationary.
									}

								}
								if(ctu==0)
								{
									if(abs(real.pickup[hpos]-APos)<abs(real.pickup[hpos]-BPos))
									{
										ProbableLift[hpos] = 'A';
										ACall = hpos;
										BCall = -1; //-1 indicates that lift 'B' is to be stationary.
									}
									else
									{
										ProbableLift[hpos] = 'B';
										BCall = hpos;
										ACall = -1;//-1 indicates that lift 'A' is to be stationary.
									}
								}
							}

							break;
					case 1 : index = x[0];
							if(uod[index]==1)
							{
								ProbableLift[index] = 'A'; //Assigning the user a lift.
								ACall = index;
								BCall = -1;
							}
							else
							{
								ProbableLift[index] = 'B'; //Assigning the user a lift.
								BCall = index;
								ACall = -1;
							}
							break;

					case 2 : /* For each floor, either once up or once down or both once will be pressed.
					Even if someone was to press, say "up", twice it wouldn't make a difference
					because the "up" signal has already been sent for both lifts to respond to.
					Thus, logically there will be only two options(/valid floor directions) for each floor,i.e. up/down
					but there will be three cases. Either one up or one down or one up & one down.
					*/
					for(i=0;i<2;i++)
					{
						index = x[i];
						if(uod[index]==1)
						{

							ProbableLift[index] = 'A'; //Assigning the user a lift.
							 ACall = index;
						}
						if(uod[index]==0)
						{
							ProbableLift[index] = 'B'; //Assigning the user a lift.
							BCall = index;
						}
					}
				}//outermost switch ends
			}
			else
			if(APos != BPos && n>1)
			{
				//Checking for number of valid floor directions (if any) on each floor lift
				temp = int_char(real.pickup);
				p = APos +'0';
				q = BPos + '0';
				x = indexOf(temp,p);
				y = indexOf(temp,q);
				lx = intlen(x);//Max is 2
				ly = intlen(y);//Max is 2
				if(lx>0 || ly>0)
				{
					if(lx == 0 || ly==0)
					{
						if(ly == 0)
						{
							for(i=0;i<lx;i++)
							{
								index=x[i];
								if(uod[index]==APrimary || lx == 1)
								{
									ProbableLift[index] = 'A';
									ACall = index;
								}
							}
							if(abs(BPos - topmost) < abs(BPos - bottomost))
							{
								closerbound = topmost;
								fartherbound = bottomost;
							}
							else
							{
								closerbound = bottomost;
								fartherbound = topmost;
							}
							min = 12;
							max = 0;
							if((BPos - closerbound) > 0)
							{
								for(i=0;i<n;i++)
								{
									if((BPos > real.pickup[i]) && (real.pickup[i]>= closerbound))
									{
										if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
										{
											pos = i;
											min = Bdis_Call[i];
											dircn = uod[i];
											check = true;
										}
									}
								}
								if(check == false)
								{
									if((BPos - fartherbound) > 0)//all valid floor directions below B
									{
										for(i=0;i<n;i++)
										{
											if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
											{
												pos = i;
												min = Bdis_Call[i];
												dircn = uod[i];
												check = true;
											}

										}
									}
									else
									if((BPos - fartherbound) < 0)//B is in between valid floor directions.
									{
										for(i=0;i<n;i++)
										{
											if((BPos < real.pickup[i]) && (real.pickup[i] <= fartherbound))
											{
												if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
												{
													pos = i;
													min = Bdis_Call[i];
													dircn = uod[i];
													check = true;
												}
											}
										}

									}
								}
							}
							else
							if((BPos - closerbound) < 0)
							{
								for(i=0;i<n;i++)
								{
									if(BPos < real.pickup[i] <= closerbound)
									{
										if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
										{
											pos = i;
											min = Bdis_Call[i];
											dircn = uod[i];
											check = true;
										}
									}
								}
								if(check == false)
								{
									if((BPos - fartherbound) > 0)//B is in between valid floor directions.
									{
										for(i=0;i<n;i++)
										{
											if(BPos > real.pickup[i] >= fartherbound)
											{
												if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
												{
													pos = i;
													min = Bdis_Call[i];
													dircn = uod[i];
													check = true;
												}
											}
										}
									}
									else
									if((BPos - fartherbound) < 0)//All valid floor directions above B.
									{
										for(i=0;i<n;i++)
										{
											if((i != ACall) && (Bdis_Call[i] < min) && (ProbableLift[i] == 'B'))
											{
												pos = i;
												min = Bdis_Call[i];
												dircn = uod[i];
												check = true;
											}
										}
									}
								}
							}

							if(Callpos_B[pos] < 0)
							{
								for(i=0;i<n;i++)
								{
									if((i != ACall) && (Callpos_B[i] < 0))
									{
										switch(dircn)
										{
											case 0 :if(Bdis_Call[i] < min)
													{
														min = Bdis_Call[i];
														pos = i;
													}
													break;
											case 1 :if(Bdis_Call[i] > max)
													{
														max = Bdis_Call[i];
														pos = i;
													}
										}
									}
								}
							}
							else
							if(Callpos_B[pos] > 0)
							{
								for(i=0;i<n;i++)
								{
									if((i != ACall) && (Callpos_B[i] > 0))
									{
										switch(dircn)
										{
											case 1 :if(Bdis_Call[i] < min)
													{
														min = Bdis_Call[i];
														pos = i;
													}
													break;
											case 0 :if(Bdis_Call[i] > max)
													{
														max = Bdis_Call[i];
														pos = i;
													}
										}
									}
								}
							}

							if(check == true)
							{
								ProbableLift[pos]='B';
								BCall = pos;
							}
							else
							{
								BCall = -1;
								BNull();
							}
							min=6;
							max=0;
							pos=-1;
							check = false;
						}

						if(lx == 0)
						{
							min = 12;
							max = 0;
							for(i=0;i<ly;i++)
							{
								index=y[i];
								if(uod[index]==BPrimary || ly == 1)
								{
									ProbableLift[index] = 'B';
									BCall = index;
								}
							}

							if(abs(APos - topmost) < abs(APos - bottomost))
							{
								closerbound = topmost;
								fartherbound = bottomost;
							}
							else
							{
								closerbound = bottomost;
								fartherbound = topmost;
							}

							if((APos - closerbound) > 0)
							{
								for(i=0;i<n;i++)
								{
									if(APos > real.pickup[i] >= closerbound)
									{
										if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
										{
											pos = i;
											min = Adis_Call[i];
											dircn = uod[i];
											check = true;
										}
									}
								}
								if(check == false)
								{
									if((APos - fartherbound) > 0)//all valid floor directions below B
									{
										for(i=0;i<n;i++)
										{
											if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
											{
												pos = i;
												min = Adis_Call[i];
												dircn = uod[i];
												check = true;
											}

										}
									}
									else
									if((APos - fartherbound) < 0)//B is in between valid floor directions.
									{
										for(i=0;i<n;i++)
										{
											if(APos < real.pickup[i] <= fartherbound)
											{
												if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
												{
													pos = i;
													min = Adis_Call[i];
													dircn = uod[i];
													check = true;
												}
											}
										}
									}
								}
							}
							else
							if((APos - closerbound) < 0)
							{
								for(i=0;i<n;i++)
								{
									if(APos < real.pickup[i] <= closerbound)
									{
										if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
										{
											pos = i;
											min = Adis_Call[i];
											dircn = uod[i];
											check = true;
										}
									}
								}
								if(check == false)
								{
									if((APos - fartherbound) > 0)//B is in between valid floor directions.
									{
										for(i=0;i<n;i++)
										{
											if(APos > real.pickup[i] >= fartherbound)
											{
												if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
												{
													pos = i;
													min = Adis_Call[i];
													dircn = uod[i];
													check = true;
												}
											}
										}
									}
									else
									if((APos - fartherbound) < 0)//All valid floor directions above B.
									{
										for(i=0;i<n;i++)
										{
											if((i != BCall) && (Adis_Call[i] < min) && (ProbableLift[i] == 'A'))
											{
												pos = i;
												min = Adis_Call[i];
												dircn = uod[i];
												check = true;
											}
										}
									}
								}
							}

							if(Callpos_A[pos] < 0)
							{
								for(i=0;i<n;i++)
								{
									if((i != BCall) && (Callpos_A[i] < 0))
									{
										switch(dircn)
										{
											case 0 :if(Adis_Call[i] < min)
													{
														min = Adis_Call[i];
														pos = i;
													}
													break;
											case 1 :if(Adis_Call[i] > max)
													{
														max = Adis_Call[i];
														pos = i;
													}
										}
									}
								}
							}
							else
							if(Callpos_A[pos] > 0)
							{
								for(i=0;i<n;i++)
								{
									if((i != BCall) && (Callpos_A[i] > 0))
									{
										switch(dircn)
										{
											case 1 :if(Adis_Call[i] < min)
													{
														min = Adis_Call[i];
														pos = i;
													}
													break;
											case 0 :if(Adis_Call[i] > max)
													{
														max = Adis_Call[i];
														pos = i;
													}
										}
									}
								}
							}
							if(check == true)
							{
								ProbableLift[pos]='A';
								ACall = pos;
							}
							else
							{
								ACall = -1;
								ANull();
							}
							min=6;
							max=0;
							pos=-1;
						}
					}
					else
					{
						for(i=0;i<ly;i++)
						{
							index=y[i];
							if(uod[index]==BPrimary || ly == 1)
							{
								ProbableLift[index] = 'B';
								BCall = index;
							}
						}
						for(i=0;i<lx;i++)
						{
							index=x[i];
							if(uod[index]==APrimary || lx == 1)
							{
								ProbableLift[index] = 'A';
								ACall = index;
							}
						}
					}
				}
				else
				{
					low=6;
					high=0;
					ctu=0;
					ctd=0;

					for(i=0;i<n;i++)
					{
						switch (uod[i])
						{
							case 0 : //Topmost user wanting to go down.
							if(real.pickup[i]>high)
							{
								high=real.pickup[i];
								hpos = i;
							}
							ctd++; //Count for "down" valid floor directions
							break;
							case 1 : //Bottomost bottomost user wanting to go up.
							if(real.pickup[i]<low)
							{
								low=real.pickup[i];
								lpos = i;
							}
							ctu++; //Count for "up" valid floor directions
						}
					}
					temp = int_char(real.pickup);
					if(ctd > 0 && ctu > 0)
					{
						ahdis = abs(APos - high);
						aldis = abs(APos - low);
						bhdis = abs(BPos - high);
						bldis = abs(BPos- low);
						//Assigning closest lift
						if(high != low)
						{
							if( (Callpos_A[hpos] == Callpos_A[lpos]) && (Callpos_B[hpos] == Callpos_B[lpos]) )
							{
								if(ahdis < bhdis && aldis < bldis)
								{
									if(ahdis<aldis)
									{
										ProbableLift[hpos] = 'A';
										ProbableLift[lpos] = 'B';
										ACall = hpos;
										BCall = lpos;
									}
									else
									if(ahdis>aldis)
									{
										ProbableLift[lpos] = 'B';
										ProbableLift[hpos] = 'A';
										ACall = lpos;
										BCall = hpos;
									}
								}
								else
								if(ahdis > bhdis && aldis > bldis)
								{
									if(bhdis<bldis)
									{
										ProbableLift[hpos] = 'B';
										ProbableLift[lpos] = 'A';
										BCall = hpos;
										ACall = lpos;
									}
									else
									if(bhdis>bldis)
									{
										ProbableLift[lpos] = 'B';
										ProbableLift[hpos] = 'A';
										ACall = hpos;
										BCall = lpos;
									}
								}
								else//Calls between Lift A and B
								{
									//Lift going down
									if(ahdis<bhdis)
									{
										ProbableLift[hpos] = 'A';
										ACall = hpos;
									}
									else
									{
										ProbableLift[hpos] = 'B';
										BCall = hpos;
									}
									//Lift going up
									if(aldis<bldis)
									{
										ProbableLift[lpos] = 'A';
										ACall = lpos;
									}
									else
									{
										ProbableLift[lpos] = 'B';
										BCall = lpos;
									}
								}
							}
							else
							if( (Callpos_A[hpos] == Callpos_A[lpos]) && (Callpos_B[hpos] != Callpos_B[lpos]) )
							{
								if(ahdis<aldis)
								{
									ProbableLift[hpos] = 'A';
									ProbableLift[lpos] = 'B';
									ACall = hpos;
									BCall = lpos;
								}
								else
								{
									ProbableLift[lpos] = 'A';
									ProbableLift[hpos] = 'B';
									ACall = lpos;
									BCall = hpos;
								}
							}
							else
							if( (Callpos_A[hpos] != Callpos_A[lpos]) && (Callpos_B[hpos] == Callpos_B[lpos]) )
							{
								if(bhdis<bldis)
								{
									ProbableLift[hpos] = 'B';
									ProbableLift[lpos] = 'A';
									BCall = hpos;
									ACall = lpos;
								}
								else
								{
									ProbableLift[lpos] = 'B';
									ProbableLift[hpos] = 'A';
									BCall = lpos;
									ACall = hpos;
								}
							}
							else
							if( (Callpos_A[hpos] != Callpos_A[lpos]) && (Callpos_B[hpos] != Callpos_B[lpos]) )
							{
								//Lift going down
								if(ahdis<bhdis)
								{
									ProbableLift[hpos] = 'A';
									ACall = hpos;
								}
								else
								{
									ProbableLift[hpos] = 'B';
									BCall = hpos;
								}
								//Lift going up
								if(aldis<bldis)
								{
									ProbableLift[lpos] = 'A';
									ACall = lpos;
								}
								else
								{
									ProbableLift[lpos] = 'B';
									BCall = lpos;
								}
							}
						}
						else
						{
							for(i=0;i<n;i++)
							{
								if(real.pickup[i]==high)
								{
									switch (uod[i])
									{
										case 0 : ProbableLift[i] = 'B';
												BCall = i;
												break;
										case 1 : ProbableLift[i] = 'A';
												ACall = i;
									}
								}
							}

							//ahdis=aldis & bhdis=bldis
							if(ahdis<bhdis)
							{
								switch(APrimary) //Don't need to check for BPrimary because it has to be the exact opposite.
								{
									case 0 : ProbableLift[hpos] = 'A';
									ProbableLift[lpos] = 'B';
									ACall = hpos;
									BCall = lpos;
									break;
									case 1 : ProbableLift[hpos] = 'B';
									ProbableLift[lpos] = 'A';
									ACall = lpos;
									BCall = hpos;
								}
							}
							else
							{
								switch(BPrimary) //Don't need to check for BPrimary because it has to be the exact opposite.
								{
									case 0 : ProbableLift[hpos] = 'B';
									ProbableLift[lpos] = 'A';
									ACall = lpos;
									BCall = hpos;
									break;
									case 1 : ProbableLift[hpos] = 'A';
									ProbableLift[lpos] = 'B';
									ACall = hpos;
									BCall = lpos;
								}
							}
						}
					}
					else
					{
						if(ctd == 0)
						{
							q = low +'0';
							y = indexOf(temp,q);
							//Assigning closest lift
							index = y[0];
							if(abs(real.pickup[index]-APos)<abs(real.pickup[index]-BPos))
							{
								ProbableLift[index] = 'A';
								ACall = index;
								BCall = -1; //-1 indicates that lift 'B' is to be stationary.
							}
							else
							{
								ProbableLift[index] = 'B';
								BCall = index;
								ACall = -1;//-1 indicates that lift 'A' is to be stationary.
							}

						}
						if(ctu==0)
						{
							p = high +'0';
							x = indexOf(temp,p);
							//Assigning closest lift
							index = x[0];
							if(abs(real.pickup[index]-APos)<abs(real.pickup[index]-BPos))
							{
								ProbableLift[index] = 'A';
								ACall = index;
								BCall = -1; //-1 indicates that lift 'B' is to be stationary.
							}
							else
							{
								ProbableLift[index] = 'B';
								BCall = index;
								ACall = -1;//-1 indicates that lift 'A' is to be stationary.
							}
						}
					}
				}
			}
			else
			{
				//Assigning closest lift
				if(abs(real.pickup[0]-APos)<abs(real.pickup[0]-BPos))
				{
					ProbableLift[0] = 'A';
					ACall = 0;
					BCall = -1; //-1 indicates that lift 'B' is to be stationary.
				}
				else
				{
					ProbableLift[0] = 'B';
					BCall = 0;
					ACall = -1;//-1 indicates that lift 'A' is to be stationary.
				}
			}
		}

		void crucialA()
		{
			if(ACall != -1)
			{
				ATravel = abs(APos - ADest);
				if((ADest - APos)>0)
				ADircn = 1;
				else
				ADircn = 0;
			}
			else
			ATravel = -1;
		}
		void crucialB()
		{
			if(BCall != -1)
			{
				BTravel = abs(BPos - BDest);
				if((BDest - BPos)>0)
					BDircn = 1;
				else
					BDircn = 0;
			}
			else
			BTravel = -1;
		}

		void ANull()
		{
			ATravel = -1; //Signifying no travel.
			ADest = -1; //Signifying no assigned Destination.
			ADircn = -1; //Signifying no direction of Travel.
			ACausative = -1;
		}

		void BNull()
		{
			BTravel = -1; //Signifying no travel.
			BDest = -1; //Signifying no assigned Destination.
			BDircn = -1; //Signifying no direction of Travel.
			BCausative = -1;
		}

		void update()
		{
			//Declaring variables
			int i;
			int delay;
			char* s;
			//Process
			for(i=1;i<=30;i++)
			{
				system("clear");
				instant();
				printf(RED"\033[1m\n\t\t\t\t\t\t\t\t\tUpdating the System");
				switch(i%4)
				{
					case 1 :printf(" ─_─");
							break;
					case 2 :printf(" \\_\\");
							break;
					case 3 :printf(" │_│");
							break;
					case 0 :printf(" /_/");
				}
				delay = nsleep(200);
			}
			delay = nsleep(700);
			printf(RESET);
		}

		void renewList()
		{
			//Declaring variables
			FILE* pt;
			char* s;
			fopen("/Users/kevin/Desktop/Text.txt","w");
			s = "\nWELCOME TO THE LYFT\0";
			fprintf(pt,"%s",s);
			fclose(pt);
		}
		/*
		blinksane() delay-prints the string in Cyan.
		*/
		void blinksane(char* s , int m, int n)
		{
			//Declaring variables
			int i;
			int delay;
			int l=strlen(s);
			int ct=0;
			printf(RESET);
			printf(CYAN);
			switch(m)
			{
				case -1 :  for(i=0;i<l;i++)
				{
					printf("%c",s[i]);
					delay = nsleep(10);
				}
				break;
				default : switch(n)
				{
					case -1 : for(i=0;i<l;i++)
					{
						if(s[i] == '~')
						printf("%d",m);
						else
						printf("%c",s[i]);
						delay = nsleep(10);
					}
					break;
					default : for(i=0;i<l;i++)
					{
						if(s[i] == '~')
						{
							switch(ct)
							{
								case 0 : printf("%d",m);
								break;
								case 1 : printf("%d",n);
							}
							ct++;
						}
						else
						printf("%c",s[i]);
						delay = nsleep(70);
					}
				}
			}
		}

		/*
		blinkbling() delay-prints the string in MAGENTA.
		*/
		void blinkbling(char* s , int m, int n)
		{
			//Declaring variables
			int i;
			int delay;
			int l=strlen(s);
			int ct=0;
			printf(RESET);
			printf(GREEN);
			switch(m)
			{
				case -1 :  for(i=0;i<l;i++)
				{
					printf("%c",s[i]);
					delay = nsleep(10);
				}
				break;
				default :  switch(n)
				{
					case -1 : for(i=0;i<l;i++)
					{
						if(s[i] == '~')
						printf("%d",m);
						else
						printf("%c",s[i]);
						delay = nsleep(10);
					}
					break;
					default : for(i=0;i<l;i++)
					{
						if(s[i] == '~')
						{
							switch(ct)
							{
								case 0 : printf("%d",m);
								break;
								case 1 : printf("%d",n);
							}
							ct++;
						}
						else
						printf("%c",s[i]);
						delay = nsleep(10);
					}
				}
			}
			printf(RESET);
		}

		/*
		blinkinsane() delay-prints the string in Red.
		*/
		void blinkinsane(char* s , int m, int n)
		{
			//Declaring variables
			int i;
			int delay;
			int l=strlen(s);
			int ct=0;
			printf(RESET);
			printf(BOLDRED);
			switch(m)
			{
				case -1 :  for(i=0;i<l;i++)
							{
								printf("%c",s[i]);
								delay = nsleep(60);
							}
							break;
				default :  switch(n)
							{
								case -1 : 	for(i=0;i<l;i++)
											{
												if(s[i] == '~')
												printf("%d",m);
												else
												printf("%c",s[i]);
												delay = nsleep(60);
											}
											break;
								default : 	for(i=0;i<l;i++)
											{
												if(s[i] == '~')
												{
													switch(ct)
													{
														case 0 : printf("%d",m);
														break;
														case 1 : printf("%d",n);
													}
													ct++;
												}
												else
												printf("%c",s[i]);
												delay = nsleep(60);
								}
							}
			}
		}

		/*
		intlen() returns the length of the int pointer.
		*/
		int intlen (int* a)
		{
			int* i;
			for (i=a; *i != (-5) ; ++i);
			return(i-a);
		}
		void blinkmatrix(int line)
		{
			//Declaring variables
			int i;
			//Process
			switch(line)
			{
				case 1 :	printf("		\033[1m\033[31m\tA's PICKUP & DROP MATRIX\033[22m\033[36m\t\t\t\033[1m\033[31mB's PICKUP & DROP MATRIX\033[22m\033[36m");
							break;
				case 2 :	printf("		┏━━━━━┳━━━━━┳━━━━━┳━━━━━┳━━━━━┳━━━━━┓		┏━━━━━┳━━━━━┳━━━━━┳━━━━━┳━━━━━┳━━━━━┓");
							break;
				case 3 :	printf("		┃     ┃     ┃     ┃     ┃     ┃     ┃		┃     ┃     ┃     ┃     ┃     ┃     ┃");
							break;
				case 4 :	printf("		┃");
							for(i=0;i<6;i++)
							{
								if(APicklist[i] != -4)
									printf("  %d",APicklist[i]);
								else
									printf("   ");
								printf("  ┃");
							}
							printf("		┃");
							for(i=0;i<6;i++)
							{
								if(BPicklist[i] != -4)
									printf("  %d",BPicklist[i]);
								else
									printf("   ");
								printf("  ┃");
							}
							break;
				case 5 :	printf("		┃     ┃     ┃     ┃     ┃     ┃     ┃		┃     ┃     ┃     ┃     ┃     ┃     ┃");
							break;
				case 6 :	printf("		┣━━━━━╋━━━━━╋━━━━━╋━━━━━╋━━━━━╋━━━━━┫		┣━━━━━╋━━━━━╋━━━━━╋━━━━━╋━━━━━╋━━━━━┫");
							break;
				case 7 :	printf("		┃     ┃     ┃     ┃     ┃     ┃     ┃		┃     ┃     ┃     ┃     ┃     ┃     ┃");
							break;
				case 8 :	printf("		┃");
							for(i=0;i<6;i++)
							{
								if(ADroplist[i] != -4)
									printf("  %d",ADroplist[i]);
								else
									printf("   ");
								printf("  ┃");
							}
							printf("		┃");
							for(i=0;i<6;i++)
							{
								if(BDroplist[i] != -4)
									printf("  %d",BDroplist[i]);
								else
									printf("   ");
								printf("  ┃");
							}
							break;
				case 9 :	printf("		┃     ┃     ┃     ┃     ┃     ┃     ┃		┃     ┃     ┃     ┃     ┃     ┃     ┃");
							break;
				case 10 :	printf("		┗━━━━━┻━━━━━┻━━━━━┻━━━━━┻━━━━━┻━━━━━┛		┗━━━━━┻━━━━━┻━━━━━┻━━━━━┻━━━━━┻━━━━━┛");
			}
		}

		char* ReadFile(char *filename)
		{
		   char *buffer = NULL;
		   int string_size,read_size;
		   FILE *handler = fopen(filename,"r");

		   if (handler)
		   {
		       //seek the last byte of the file
		       fseek(handler,0,SEEK_END);
		       //offset from the first to the last byte, or in other words, filesize
		       string_size = ftell (handler);
		       //go back to the start of the file
		       rewind(handler);
		       //allocate a string that can hold it all
		       buffer = (char*)malloc (sizeof(char) * (string_size + 1) );
		       //read it all in one operation
		       read_size = fread(buffer,sizeof(char),string_size,handler);
		       //fread doesnt set it so put a \0 in the last position
		       //and buffer is now officialy a string
		       buffer[string_size] = '\0';

		       if (string_size != read_size) {
		           //something went wrong, throw away the memory and set
		           //the buffer to NULL
		           free(buffer);
		           buffer = NULL;
		        }
		    }
			fclose(handler);
		    return buffer;
		}

		void blinkmove(int uod_A, int uod_B)
		{
			/*
			6 = 3
			5 = 7
			4 = 11
			3 = 15
			2 = 19
			1 = 23
			0 = 27
			*/
			int i;
			int pos_A, dest_A;
			int pos_B, dest_B;
			int delay;
			char* s;

			switch(APos)
			{
				case 0 :	pos_A = 27;
							break;
				case 1 :	pos_A = 23;
							break;
				case 2 :	pos_A = 19;
							break;
				case 3 :	pos_A = 15;
							break;
				case 4 :	pos_A = 11;
							break;
				case 5 :	pos_A = 7;
							break;
				case 6 : 	pos_A = 3;
			}
			switch(BPos)
			{
				case 0 :	pos_B = 27;
							break;
				case 1 :	pos_B = 23;
							break;
				case 2 :	pos_B = 19;
							break;
				case 3 :	pos_B = 15;
							break;
				case 4 :	pos_B = 11;
							break;
				case 5 :	pos_B = 7;
							break;
				case 6 : 	pos_B = 3;
			}
			switch(uod_A)
			{
				case 1 : s = "Lift A moves upwards.";
						 blinklist(s,-1,-1);
						 break;
				case 0 :s = "Lift A moves downwards.";
						blinklist(s,-1,-1);
			}
			switch(uod_B)
			{
				case 1 :s =  "Lift B moves upwards.";
						blinklist(s,-1,-1);
						 break;
				case 0 :s =  "Lift B moves downwards.";
						blinklist("Lift B moves downwards.",-1,-1);
			}
			for(i=0;i<5;i++)
			{
				system("clear");
				watermark();
				smartprint(pos_A,pos_B);
				switch(uod_A)
				{
					case 1 :	if(i==0)
									APos++;
								pos_A--;
								break;
					case 0 :	if(i==0)
									APos--;
								pos_A++;
				}
				switch(uod_B)
				{
					case 1 :	if(i==0)
									BPos++;
								pos_B--;
								break;
					case 0 :	if(i==0)
									BPos--;
								pos_B++;
				}
				delay = nsleep(500);
			}
		}

		void smartprint(int ALine,int BLine)
		{
			int i,j;
			int flr;
			bool up,down,a,b;
			char* string;
			char* str;
			int count = 13;
			system("clear");
			watermark();
			string = ReadFile("/Users/kevin/Desktop/Text.txt");
			str = strtok(string,"\n");
			for(i=1;i<=29;i++)
			{
				if(str == NULL)
					count = 0;
				flr = -1;
				up = false;
				down = false;
				a = false;
				b = false;
				switch(i)
				{
					case 27 :	flr = 0;
								break;
					case 23 :	flr = 1;
								break;
					case 19 :	flr = 2;
								break;
					case 15 :	flr = 3;
								break;
					case 11 :	flr = 4;
								break;
					case 7 :	flr = 5;
								break;
					case 3 : 	flr = 6;
				}
				if(ALine == i)
					a = true;
				if(BLine == i)
					b = true;
				for(j=0;j<n;j++)
				{
					if(flr == real.pickup[j])
					{
						if(uod[j] == 1)
						{
							up = true;
						}
						else
						if(uod[j] == 0)
						{
							down = true;
						}
					}
				}
				switch(i)
				{
					case 1 : 	printf(Line1);
								blinkmatrix(i);
								printf("\n");
								break;
					case 2 : 	printf(Line2);
								blinkmatrix(i);
								printf("\n");
								break;
					case 3 :	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m6\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor6);
								blinkmatrix(i);
								printf("\n");
								break;
					case 4 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line4);
								blinkmatrix(i);
								printf("\n");
								break;
					case 5 : 	printf(Line5);
								blinkmatrix(i);
								printf("\n");
								break;
					case 6 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line6);
								blinkmatrix(i);
								printf("\n");
								break;
					case 7 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m5\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor5);
								blinkmatrix(i);
								printf("\n");
								break;
					case 8 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line8);
								blinkmatrix(i);
								printf("\n");
								break;
					case 9 : 	printf(Line9);
								blinkmatrix(i);
								printf("\n");
								break;
					case 10 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line10);
								blinkmatrix(i);
								printf("\n");
								break;
					case 11 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m4\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃\n");
									}
									else
									{
										printf("   ┃\n");
									}
								}
								else
								printf(Floor4"\n");
								break;
					case 12 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃	\033[1m\033[31m\tLIST OF LIFT PROCESSES EXCECUTED : \033[22m\033[36m\n");
								}
								else
								printf(Line12"\n");
								break;
					case 13 : 	printf(Line13);
								printf("\t\t"RESET CYAN);
								if(count == 13)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 14 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line14);
								printf("\t\t"RESET CYAN);
								if(count == 14)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 15 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m3\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor3);
								printf("\t\t"RESET CYAN);
								if(count == 15)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 16 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line16);
								printf("\t\t"RESET CYAN);
								if(count == 16)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 17 : 	printf(Line17);
								printf("\t\t"RESET CYAN);
								if(count == 17)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 18 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line18);
								printf("\t\t"RESET CYAN);
								if(count == 18)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 19 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m2\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor2);
								printf("\t\t"RESET CYAN);
								if(count == 19)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 20 : if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line20);
								printf("\t\t"RESET CYAN);
								if(count == 20)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 21 : 	printf(Line21);
								printf("\t\t"RESET CYAN);
								if(count == 21)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 22 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line22);
								printf("\t\t"RESET CYAN);
								if(count == 22)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 23 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m1\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor1);
								printf("\t\t"RESET CYAN);
								if(count == 23)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 24 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line24);
								printf("\t\t"RESET CYAN);
								if(count == 24)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 25 : 	printf(Line25);
								printf("\t\t"RESET CYAN);
								if(count == 25)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 26 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line26);
								printf("\t\t"RESET CYAN);
								if(count == 26)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 27 : 	if((up == true) || (down == true) || (a == true) || (b == true))
								{
									printf("\033[36m       \033[1m\033[31m0\033[22m\033[36m       ┃  ");
									if(up == true)
									{
										printf("⇡  ┃  ");//9833430920
									}
									else
									{
										printf("   ┃  ");
									}
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(down == true)
									{
										printf("⇣  ┃");
									}
									else
									{
										printf("   ┃");
									}
								}
								else
								printf(Floor0);
								printf("\t\t"RESET CYAN);
								if(count == 27)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 28 : 	if((a == true) || (b == true))
								{
									printf("\033[36m               ┃  ");
									printf("   ┃  ");
									if(a == true)
									{
										printf("A  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									if(b == true)
									{
										printf("B  ┃  ");
									}
									else
									{
										printf("   ┃  ");
									}
									printf("   ┃");
								}
								else
								printf(Line28);
								printf("\t\t"RESET CYAN);
								if(count == 28)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
								break;
					case 29 : 	printf(Line29);
								printf("\t\t"RESET CYAN);
								if(count == 29)
								{
									printf("%s",str);
								}
								printf("\n"RESET);
				}
				if(i >= 13)
				{
					if(str != '\0')
					{
						string = strchr(string,'\n');
						str = strtok(NULL,"\n");
						count++;
					}
					else
					{
						count = 0;
					}
				}
			}
			for(i=0;i<158;i++)
				printf(CYAN"━"RESET);
		}

		int getN()
		{
			return n;
		}
		void blinklist(char* temp , int m, int n)
		{
			/*
			process - 'p' indicates addition to list of processes
			process - 'm' indicates moving lift
			process - 'u' indicates updating pickup/drop matrix
			*/
			//Declaring variables
			int i,j,k,z;
			int line;
			int delay;
			char* string;
			char* str;
			char* s;
			char ch;
			int l=strlen(temp);
			int ct=0;
			int count = 13;
			int flr,no;
			bool up,down,a,b;
			no = getN();
			//Forming the string
			ct = 0;
			s = malloc(sizeof(char)*(l+1));
			switch(m)
			{
				case -1 :	for(i=0;i<l;i++)
								s[i] = temp[i];
							break;
				default :	switch(n)
				{
					case -1 : 	for(i=0;i<l;i++)
								{
									if(temp[i] == '~')
									{
										switch(ct)
										{
											case 0 : s[i] = '0' + m;
										}
										ct++;
									}
									else
									s[i] = temp[i];
								}
								break;
					default : 	for(i=0;i<l;i++)
								{
									if(temp[i] == '~')
									{
										switch(ct)
										{
											case 0 : s[i] = '0' + m;
											break;
											case 1 : s[i] = '0' + n;
										}
										ct++;
									}
									else
									s[i] = temp[i];
								}
				}
			}
			s[l] = '\0';
			recheck:string = ReadFile("/Users/kevin/Desktop/Text.txt");
			ct = 0;
			i=0;
			while(string)
			{
				ch = string[i];
				if(ch == '\0')
				 	break;
				else
				if(ch == '\n')
					ct++;
				i++;
			}
			if(ct >= 17)
			{
				i = 0;
				ct = 0;
				while(string)
				{
					ch = string[i];
					if(ct == 2)
					{
						string += (i-1);
						FILE* pt = fopen("/Users/kevin/Desktop/Text.txt","w");
						fprintf(pt,"%s",string);
						fclose(pt);
						goto recheck;
						break;
					}
					else
					if(ch == '\n')
						ct++;
					i++;
				}
			}
			line = count + ct;
			for(i=0;i<l;i++)
			{
				system("clear");
				watermark();
				string = ReadFile("/Users/kevin/Desktop/Text.txt");
				str = strtok(string,"\n");
				count = 13;
				for(j=1;j<=29;j++)
				{
					flr = -1;
					up = false;
					down = false;
					a = false;
					b = false;
					switch(j)
					{
						case 27 :	flr = 0;
									break;
						case 23 :	flr = 1;
									break;
						case 19 :	flr = 2;
									break;
						case 15 :	flr = 3;
									break;
						case 11 :	flr = 4;
									break;
						case 7 :	flr = 5;
									break;
						case 3 : 	flr = 6;
					}
					if(APos == flr)
						a = true;
					if(BPos == flr)
						b = true;

					for(k=0;k<no;k++)
					{
						if(flr == real.pickup[k])
						{
							if(uod[k] == 1)
							{
								up = true;
							}
							else
							if(uod[k] == 0)
							{
								down = true;
							}
						}
					}
					switch(j)
					{
						case 1 : 	printf(Line1);
									blinkmatrix(j);
									printf("\n");
									break;
						case 2 : 	printf(Line2);
									blinkmatrix(j);
									printf("\n");
									break;
						case 3 :	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m6\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor6);
									blinkmatrix(j);
									printf("\n");
									break;
						case 4 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃");
									}
									else
									printf(Line4);
									blinkmatrix(j);
									printf("\n");
									break;
						case 5 : 	printf(Line5);
									blinkmatrix(j);
									printf("\n");
									break;
						case 6 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃");
									}
									else
									printf(Line6);
									blinkmatrix(j);
									printf("\n");
									break;
						case 7 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m5\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor5);
									blinkmatrix(j);
									printf("\n");
									break;
						case 8 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃");
									}
									else
									printf(Line8);
									blinkmatrix(j);
									printf("\n");
									break;
						case 9 : 	printf(Line9);
									blinkmatrix(j);
									printf("\n");
									break;
						case 10 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃");
									}
									else
									printf(Line10);
									blinkmatrix(j);
									printf("\n");
									break;
						case 11 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m4\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃\n");
										}
										else
										{
											printf("   ┃\n");
										}
									}
									else
									printf(Floor4"\n");
									break;
						case 12 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃	\033[1m\033[31m\tLIST OF LIFT PROCESSES EXCECUTED : \033[22m\033[36m\n");
									}
									else
									printf(Line12"\n");
									break;
						case 13 : 	printf(Line13);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 13)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 14 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line14);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 14)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 15 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m3\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor3);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 15)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 16 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line16);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 16)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 17 : 	printf(Line17);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 17)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 18 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line18);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 18)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 19 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m2\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor2);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 19)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 20 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line20);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 20)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 21 : 	printf(Line21);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 21)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 22 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line22);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 22)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 23 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m1\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor1);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 23)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 24 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line24);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 24)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 25 : 	printf(Line25);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 25)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 26 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line26);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 26)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 27 : 	if((up == true) || (down == true) || (a == true) || (b == true))
									{
										printf("\033[36m       \033[1m\033[31m0\033[22m\033[36m       ┃  ");
										if(up == true)
										{
											printf("⇡  ┃  ");//9833430920
										}
										else
										{
											printf("   ┃  ");
										}
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(down == true)
										{
											printf("⇣  ┃");
										}
										else
										{
											printf("   ┃");
										}
									}
									else
									printf(Floor0);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 27)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 28 : 	if((a == true) || (b == true))
									{
										printf("\033[36m               ┃  ");
										printf("   ┃  ");
										if(a == true)
										{
											printf("A  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										if(b == true)
										{
											printf("B  ┃  ");
										}
										else
										{
											printf("   ┃  ");
										}
										printf("   ┃\n");
									}
									else
									printf(Line28);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 28)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
									break;
						case 29 : 	printf(Line29);
									printf("\t\t"RESET CYAN);
									if(j == line)
									{
										for(k=0;k<=i;k++)
											printf("%c",s[k]);
									}
									else
									if(count == 29)
									{
										printf("%s",str);
									}
									printf("\n"RESET);
					}
					if(j >= 13)
					{
						if(str != '\0')
						{
							string = strchr(string,'\n');
							str = strtok(NULL,"\n");
							count++;
						}
						else
						{
							count = 0;
						}
					}
				}
				for(j=0;j<158;j++)
					printf(CYAN"━"RESET);
				delay = nsleep(60);
			}
			writeS(s);
		}

		void writeS(char* s)
		{
			//Declaring variables
			char* string;
			int ct,i;
			int lfile,ls;
			char ch;

			string = ReadFile("/Users/kevin/Desktop/Text.txt");
			ct = 0;
			i=0;
			while(string)
			{
				ch = string[i];
				if(ch == '\0')
				 	break;
				else
				if(ch == '\n')
					ct++;
				i++;
			}
			if(ct < 17)
			{
				lfile = strlen(string);
				ls = strlen(s);
				string = realloc(string,(lfile+ls+2));
				string[lfile] = '\n';
				strcat(string,s);
				string[lfile+ls+1]='\0';
				FILE* pt = fopen("/Users/kevin/Desktop/Text.txt","w");
				fprintf(pt,"%s",string);
				fclose(pt);
			}
		}

		/*
		indexOf() returns a pointer indicating all the indexes at which character "ch" is found in string "str".
		*/
		int* indexOf(char* str,char ch)
		{
			//Declaring variables
			int i, ct=0,j=0;
			int* result;
			for(i=0;i<strlen(str);i++)
			{
				if(str[i]==ch)
					ct++;
			}
			result = malloc((ct+1)*sizeof(int));
			for(i=0;i<strlen(str);i++)
			{
				if(str[i]==ch)
				{
					result[j]= i;
					j++;
				}
			}
			result[ct]=-5;
			return result;
		}

		/*
		int_char() converts int pointer to char pointer.
		*/
		char* int_char(int* s)
		{
			int l;
			l=intlen(s);
			int i;
			char* result;
			result = malloc(l*sizeof(char));
			for(i=0;i<l;i++)
			{
				result[i]=s[i]+'0';
			}
			return result;
		}

		/*
		char_int() converts char pointer to int pointer.
		*/
		int* char_int(char* s)
		{
			int l;
			s = strtok(s,"\n");
			l=strlen(s);
			int i;
			int* result;
			result = malloc((l+1)*sizeof(int));
			for(i=0;i<l;i++)
			{
				result[i]=s[i]-'0';
			}
			result[l]=-5;
			return result;
		}

		void instant()
		{
			//Declaring variables
			int Aline;
			int Bline;
			switch(APos)
			{
				case 0 :	Aline = 27;
							break;
				case 1 :	Aline = 23;
							break;
				case 2 :	Aline = 19;
							break;
				case 3 :	Aline = 15;
							break;
				case 4 :	Aline = 11;
							break;
				case 5 :	Aline = 7;
							break;
				case 6 : 	Aline = 3;
			}
			switch(BPos)
			{
				case 0 :	Bline = 27;
							break;
				case 1 :	Bline = 23;
							break;
				case 2 :	Bline = 19;
							break;
				case 3 :	Bline = 15;
							break;
				case 4 :	Bline = 11;
							break;
				case 5 :	Bline = 7;
							break;
				case 6 : 	Bline = 3;
			}
			smartprint(Aline,Bline);
			int delay = nsleep(200);
		}


		int nsleep(long milliseconds)
		{
			struct timespec req, rem;

			if(milliseconds > 999)
			{
				req.tv_sec = (int)(milliseconds / 1000);
				req.tv_nsec = (milliseconds - ((long)req.tv_sec * 1000)) * 1000000;
			}
			else
			{
				req.tv_sec = 0;
				req.tv_nsec = milliseconds * 1000000;
			}

			return nanosleep(&req , &rem);
		}

		void watermark()
		{
			//Declaring variables
			int i,j;
			printf(CYAN);
			//Upper Boundary
			for(i=0;i<158;i++)
				printf("━");
			//LYFT
			for(i=0;i<65;i++)
				printf(" ");
			printf(BOLDCYAN"███ █ █ ███  █  ◥ ◤  ███ ███\n");
			for(i=0;i<65;i++)
				printf(" ");
			printf(" █  ███ ██   █   ┃   ██   █\n");
			for(i=0;i<65;i++)
				printf(" ");
			printf(" █  █ █ ███  ███ ┃   █    █\n"RESET CYAN);
			//Lower Boundary
			for(i=0;i<158;i++)
				printf("━");
				printf(RESET);
		}

		char* readinput()
		{
			#define CHUNK 20
			char* input = NULL;
			char tempbuf[CHUNK];
			size_t inputlen = 0, templen = 0;
			setbuf(stdin,NULL);
			do
			{
				fgets(tempbuf, CHUNK, stdin);
				templen = strlen(tempbuf);
				inputlen += templen;
				input = realloc(input,inputlen+1);
				strcat(input,tempbuf);
			} while (templen==CHUNK-1 && tempbuf[CHUNK-2]!='\n');
			strtok(input,"\n");
			return input;
		}

		void ABread()
		{
			FILE* pt;
			pt = fopen("/Users/kevin/Desktop/Untitled.txt","r");
			fscanf(pt,"%d",&APos);
			fscanf(pt,"%d",&BPos);
			fclose(pt);
		}
		void ABwrite()
		{
			FILE* pt;
			pt = fopen("/Users/kevin/Desktop/Untitled.txt","w");
			fprintf(pt,"%d",APos);
			fprintf(pt,"\n%d",BPos);
			fclose(pt);
		}

		void WELCOME()
		{
			setbuf(stdout,NULL);
			//Declaring variables
			int i,j,k,parity,delay;
			char w[7+1][22+1];
			char e[7+1][14+1];
			char l[7+1][14+1];
			char c[7+1][14+1];
			char o1[7+1][20+1];
			char m[7+1][22+1];
			char t1[10+1][24+1];
			char o2[10+1][21+1];
			char t2[15+1][18+1];
			char h[15+1][16+1];
			char e2[15+1][14+1];
			char l2[15+1][14+1];
			char y[15+1][18+1];
			char f[15+1][14+1];
			char spc_w[7+1][22+1];
			char spc_e[7+1][14+1];
			char spc_l[7+1][14+1];
			char spc_c[7+1][14+1];
			char spc_o1[7+1][20+1];
			char spc_m[7+1][22+1];
			char spc_t1[10+1][24+1];
			char spc_o2[10+1][21+1];
			char spc_t2[15+1][18+1];
			char spc_h[15+1][16+1];
			char spc_e2[15+1][14+1];
			char spc_l2[15+1][14+1];
			char spc_y[15+1][18+1];
			char spc_f[15+1][14+1];
			//Initialization
			initial_W(w,spc_w);
			initial_E(e,spc_e);
			initial_L(l,spc_l);
			initial_C(c,spc_c);
			initial_O1(o1,spc_o1);
			initial_M(m,spc_m);
			initial_T1(t1,spc_t1);
			initial_O2(o2,spc_o2);
			initial_T2(t2,spc_t2);
			initial_H(h,spc_h);
			initial_E2(e2,spc_e2);
			initial_L2(l2,spc_l2);
			initial_Y(y,spc_y);
			initial_F(f,spc_f);

			for(k=1;k<31;k++)
			{
				system("clear");
				printf("\n\n");
				parity = k%2;
				if(k < 30)
				{
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						switch(parity)
						{
							case 1 ://Letter placed at Odd position.
									for(j=0;j<22;j++)
										printf("%c",w[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",spc_e[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",l[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",spc_c[i][j]);
									printf("   ");
									for(j=0;j<20;j++)
										printf("%c",o1[i][j]);
									printf("   ");
									for(j=0;j<22;j++)
										printf("%c",spc_m[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",e[i][j]);
									break;
							case 0 ://Letter placed at Even position.
									for(j=0;j<22;j++)
										printf("%c",spc_w[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",e[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",spc_l[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",c[i][j]);
									printf("   ");
									for(j=0;j<20;j++)
										printf("%c",spc_o1[i][j]);
									printf("   ");
									for(j=0;j<22;j++)
										printf("%c",m[i][j]);
									printf("   ");
									for(j=0;j<14;j++)
										printf("%c",spc_e[i][j]);
						}
						printf("\n");
					}
					if(k != 29)
						delay = nsleep(700/k);
				}
				else
				{
					system("clear");
					printf("\n\n");
					delay = nsleep(500);
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",spc_o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",spc_m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",spc_o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",spc_m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",spc_o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",spc_m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",spc_o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",spc_m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",spc_m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",spc_e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
					system("clear");
					printf("\n\n");
					for(i=0;i<7;i++)
					{
						printf("\t  ");
						for(j=0;j<22;j++)
							printf("%c",w[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",l[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",c[i][j]);
						printf("   ");
						for(j=0;j<20;j++)
							printf("%c",o1[i][j]);
						printf("   ");
						for(j=0;j<22;j++)
							printf("%c",m[i][j]);
						printf("   ");
						for(j=0;j<14;j++)
							printf("%c",e[i][j]);
						printf("\n");
					}
					delay = nsleep(500);
				}
			}

			printf("\n\n");
			for(i=0;i<10;i++)
			{
				printf("\t\t\t\t\t\t   ");
				for(j=0;j<24;j++)
					printf("%c",t1[i][j]);
				printf("   ");
				for(j=0;j<21;j++)
					printf("%c",spc_o2[i][j]);
				printf("\n");
			}
			delay = nsleep(500);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");

			for(k=1;k<7;k++)
			{
				parity = 80;
				//Y
				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);
				//T
				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);
				//E
				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);
				//F
				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);

				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);

				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);

				system("clear");
				printf("\n\n");
				printWelcomeTo(w,e,l,c,o1,m,t1,o2);
				printf("\n\n");
				for(i=0;i<15;i++)
				{
					printf("\t");
					for(j=0;j<18;j++)
						printf("%c",spc_t2[i][j]);
					printf("   ");
					for(j=0;j<16;j++)
						printf("%c",spc_h[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_e2[i][j]);
					printf("\t\t");
					for(j=0;j<14;j++)
						printf("%c",spc_l2[i][j]);
					for(j=0;j<18;j++)
						printf("%c",spc_y[i][j]);
					printf("   ");
					for(j=0;j<14;j++)
						printf("%c",spc_f[i][j]);
					printf("   ");
					for(j=0;j<18;j++)
						printf("%c",t2[i][j]);
					printf("\n");
				}
				delay = nsleep(parity);
				parity -= 5;
			}

			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e2[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e2[i][j]);
				printf("\t\t");
				for(j=0;j<14;j++)
					printf("%c",l2[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e2[i][j]);
				printf("\t\t");
				for(j=0;j<14;j++)
					printf("%c",l2[i][j]);
				for(j=0;j<18;j++)
					printf("%c",y[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e2[i][j]);
				printf("\t\t");
				for(j=0;j<14;j++)
					printf("%c",l2[i][j]);
				for(j=0;j<18;j++)
					printf("%c",y[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",f[i][j]);
				printf("\n");
			}
			delay = nsleep(600);
			system("clear");
			printf("\n\n");
			printWelcomeTo(w,e,l,c,o1,m,t1,o2);
			printf("\n\n");
			for(i=0;i<15;i++)
			{
				printf("\t");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("   ");
				for(j=0;j<16;j++)
					printf("%c",h[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e2[i][j]);
				printf("\t\t");
				for(j=0;j<14;j++)
					printf("%c",l2[i][j]);
				for(j=0;j<18;j++)
					printf("%c",y[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",f[i][j]);
				printf("   ");
				for(j=0;j<18;j++)
					printf("%c",t2[i][j]);
				printf("\n");
			}
		}

		void initial_H(char h[][16+1], char spc_h[][16+1])
		{
			//Declaring variables
			int i,j,spc;
			//Initialization of f[][]
				//Line : 1
				i=0;
				j=0;
				h[i][j] = ' ';
				j++;
				for(;j<5;j++)
					h[i][j] = '_';
				for(;j<11;j++)
					h[i][j] = ' ';
				for(;j<15;j++)
					h[i][j] = '_';
				h[i][j] = ' ';
				i++;
				for(;i<15;i++)
				{
					if(i<6 || i>8)
					{
						j=0;
						h[i][j] = '|';
						j++;
						for(;j<5;j++)
							h[i][j] = 'h';
						h[i][j] = '|';
						j++;
						for(;j<10;j++)
							h[i][j] = ' ';
						h[i][j] = '|';
						j++;
						for(;j<15;j++)
							h[i][j] = 'h';
						h[i][j] = '|';
					}
					else
					if(i==6)
					{
						j=0;
						h[i][j] = '|';
						j++;
						for(;j<5;j++)
							h[i][j] = 'h';
						h[i][j] = '|';
						j++;
						for(;j<10;j++)
							h[i][j] = '_';
						h[i][j] = '|';
						j++;
						for(;j<15;j++)
							h[i][j] = 'h';
						h[i][j] = '|';
					}
					else
					{
						for(j=0;j<16;j++)
						{
							if((j==0) || (j==15))
								h[i][j] = '|';
							else
								h[i][j] = 'H';
						}
					}
				}
			//Initialization of spc_h[][]
			for(i=0;i<15;i++)
					for(j=0;j<16;j++)
						spc_h[i][j] = ' ';
		}

		void initial_E2(char e2[][14+1], char spc_e2[][14+1])
		{

			//Declaring variables
			int i,j,spc;
			//Initialization of f[][]
				//Line : 1
				i=0;
				for(j=0;j<14;j++)
				{
					if((j == 0) || (j == 13))
						e2[i][j] = ' ';
					else
						e2[i][j] = '_';
				}
				i++;

				//Line : 2 & 3
				for(;i<3;i++)
				{
					for(j=0;j<14;j++)
					{
						if((j == 0) || (j == 13))
							e2[i][j] = '|';
						else
							e2[i][j] = 'E';
					}
				}

				//Line : remaining - 1
				for(;i<13;i++)
				{
					if(i<7 || i>9)
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 5))
								e2[i][j] = '|';
							else
							if(j<5)
								e2[i][j] = 'e';
							else
								e2[i][j] = ' ';
						}
					}
					else
					if(i == 7)
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 5))
								e2[i][j] = '|';
							else
							if(j<5)
								e2[i][j] = 'e';
							else
							if(j<9)
								e2[i][j] = '_';
							else
								e2[i][j] = ' ';
						}
					}
					else
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 9))
								e2[i][j] = '|';
							else
							if(j<9)
								e2[i][j] = 'E';
							else
								e2[i][j] = ' ';
						}
					}

				}

				//Line : 14 & 15
				for(;i<15;i++)
				{
					for(j=0;j<14;j++)
					{
						if((j == 0) || (j == 13))
							e2[i][j] = '|';
						else
							e2[i][j] = 'E';
					}
				}
			//Initialization of spc_f[][]
			for(i=0;i<15;i++)
				for(j=0;j<14;j++)
					spc_e2[i][j] = ' ';
		}

		void initial_T2(char t2[][18+1], char spc_t2[][18+1])
		{
			//Declaring variables
			int i,j,spc;
			//Initialization of t2[][]
				//Line : 1
				i=0;
				for(j=0;j<18;j++)
				{
					if((j == 0) || (j == 17))
						t2[i][j] = ' ';
					else
						t2[i][j] = '_';
				}
				i++;

				//Line : 2 & 3
				for(;i<3;i++)
				{
					for(j=0;j<18;j++)
					{
						if((j == 0) || (j == 17))
							t2[i][j] = '|';
						else
							t2[i][j] = 't';
					}
				}

				//Line : remaining
				for(;i<15;i++)
				{
					for(j=0;j<6;j++)
						t2[i][j] = ' ';
					t2[i][j] = '|';
					j++;
					for(;j<11;j++)
						t2[i][j] = 'T';
					t2[i][j] = '|';
					j++;
					for(;j<18;j++)
						t2[i][j] = ' ';
				}
			//Initialization of spc_t2[][]
			for(i=0;i<15;i++)
				for(j=0;j<18;j++)
					spc_t2[i][j] = ' ';
		}

		void initial_F(char f[][14+1], char spc_f[][14+1])
		{
			//Declaring variables
			int i,j,spc;
			//Initialization of f[][]
				//Line : 1
				i=0;
				for(j=0;j<14;j++)
				{
					if((j == 0) || (j == 13))
						f[i][j] = ' ';
					else
						f[i][j] = '_';
				}
				i++;

				//Line : 2 & 3
				for(;i<3;i++)
				{
					for(j=0;j<14;j++)
					{
						if((j == 0) || (j == 13))
							f[i][j] = '|';
						else
							f[i][j] = 'f';
					}
				}

				//Line : remaining
				for(;i<15;i++)
				{
					if(i<7 || i>9)
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 5))
								f[i][j] = '|';
							else
							if(j<5)
								f[i][j] = 'F';
							else
								f[i][j] = ' ';
						}
					}
					else
					if(i == 7)
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 5))
								f[i][j] = '|';
							else
							if(j<5)
								f[i][j] = 'F';
							else
							if(j<9)
								f[i][j] = '_';
							else
								f[i][j] = ' ';
						}
					}
					else
					{
						for(j=0;j<14;j++)
						{
							if((j == 0) || (j == 9))
								f[i][j] = '|';
							else
							if(j<10)
								f[i][j] = 'f';
							else
								f[i][j] = ' ';
						}
					}

				}
			//Initialization of spc_f[][]
			for(i=0;i<15;i++)
				for(j=0;j<14;j++)
					spc_f[i][j] = ' ';
		}

		void initial_Y(char y[][18+1], char spc_y[][18+1])
		{
			//Declaring variables
			int i,j,spc;
			//Initialization of y[][]
				//Line : 1
				i=0;
				j=0;
				for(;j<5;j++)
					y[i][j] = '_';
				for(;j<13;j++)
					y[i][j] = ' ';
				for(;j<28;j++)
					y[i][j] = '_';

				//Line : 2, 3, 4, 5
				spc = 0;
				i++;
				for(;i<5;i++)
				{
					for(j=0;j<spc;j++)
						y[i][j] = ' ';
					y[i][j] = '\\';
					j++;
					for(;j<spc+5;j++)
						y[i][j] = 'Y';
					y[i][j] = '\\';
					j++;
					for(;j<12-spc;j++)
						y[i][j] = ' ';
					y[i][j] = '/';
					j++;
					for(;j<17-spc;j++)
						y[i][j] = 'Y';
					y[i][j] = '/';
					j++;
					for(;j<18;j++)
						y[i][j] = ' ';
					spc++;
				}

				//Line : 6, 7 & 8
				for(;i<8;i++)
				{
					for(j=0;j<spc;j++)
						y[i][j] = ' ';
					y[i][j] = '\\';
					j++;
					for(;j<5+8+4-spc;j++)
						y[i][j] = 'Y';
					y[i][j] = '/';
					j++;
					for(;j<18;j++)
						y[i][j] = ' ';
					spc++;
				}
				spc--;
				//Line : remaining
				for(;i<15;i++)
				{
					for(j=0;j<spc;j++)
						y[i][j] = ' ';
					y[i][j] = '|';
					j++;
					for(;j<11;j++)
						y[i][j] = 'y';
					y[i][j] = '|';
					j++;
					for(;j<18;j++)
						y[i][j] = ' ';
				}

				//Initialization of spc_y[][]
				for(i=0;i<15;i++)
					for(j=0;j<18;j++)
						spc_y[i][j] = ' ';
		}

		void initial_L2(char l2[][14+1], char spc_l2[][14+1])
		{
			//Declaring variables
			int i,j;
			//Initialization of l2[][]
			for(i=0;i<15;i++)
			{
				if(i == 0)
				{
					j=0;
					l2[i][j] = ' ';
					j++;
					for(;j<5;j++)
						l2[i][j] = '_';
					for(;j<14;j++)
						l2[i][j] = ' ';
				}
				else
				if(i<=12)
				{
					j=0;
					l2[i][j] = '|';
					j++;
					for(;j<5;j++)
						l2[i][j] = 'l';
					l2[i][j] = '|';
					j++;
					if(i != 12)
					{
						for(;j<14;j++)
							l2[i][j] = ' ';
					}
					else
					{
						for(;j<13;j++)
							l2[i][j] = '_';
						l2[i][j] = ' ';
					}
				}
				else
				{
					j=0;
					l2[i][j] = '|';
					j++;
					for(;j<13;j++)
						l2[i][j] = 'L';
					l2[i][j] = '|';
				}

			}
			//Initialization of spc_l2[][]
			for(i=0;i<15;i++)
				for(j=0;j<14;j++)
					spc_l2[i][j]=' ';
		}
		void initial_W(char w[][22+1], char spc_w[][22+1])
		{
			//Declaring variables
			int i,j;
			//Initialization of w[][]
				//First 3 Lines
				for(i=0;i<3;i++)
				{
					for(j=0;j<4;j++)
						w[i][j] = '|';
					for(;j<18;j++)
						w[i][j] = ' ';
					for(;j<22;j++)
						w[i][j] = '|';
				}
				//4th line
				for(j=0;j<4;j++)
					if(j != 0)
						w[i][j] = '|';
					else
						w[i][j] = '\\';
				for(;j<18;j++)
					w[i][j] = ' ';
				for(;j<22;j++)
					if(j != 21)
						w[i][j] = '|';
					else
						w[i][j] = '/';
				//5th line
				i++;
				for(j=0;j<5;j++)
					if(j == 0)
						w[i][j] = ' ';
					else
						w[i][j] = '\\';
				for(;j<9;j++)
					w[i][j] = ' ';
				for(;j<13;j++)
					w[i][j] = '|';
				for(;j<17;j++)
					w[i][j] = ' ';
				for(;j<22;j++)
					if(j == 21)
						w[i][j] = ' ';
					else
						w[i][j] = '/';
				//6th line
				i++;
				for(j=0;j<6;j++)
					if(j <= 1)
						w[i][j] = ' ';
					else
						w[i][j] = '\\';
				for(;j<9;j++)
					w[i][j] = ' ';
				for(;j<13;j++)
					w[i][j] = '|';
				for(;j<16;j++)
					w[i][j] = ' ';
				for(;j<22;j++)
					if(j >= 20)
						w[i][j] = ' ';
					else
						w[i][j] = '/';
				//7th line
				i++;
				for(j=0;j<3;j++)
					w[i][j] = ' ';
				w[i][j] = '\\';
				j++;
				for(;j<18;j++)
					w[i][j] = '|';
				w[i][j] = '/';
				j++;
				for(;j<22;j++)
					w[i][j] = ' ';

			//Initialization of spc_w[][]
			for(i=0;i<7;i++)
				for(j=0;j<22;j++)
					spc_w[i][j] = ' ';
		}

		void initial_E(char e[][14+1], char spc_e[][14+1])
		{
			//Declaring variables
			int i,j;
			//Initialization of e[][]
			for(i=0;i<7;i++)
			{
				if((i == 0) || (i == 3) || (i == 6))
				{
					for(j=0;j<14;j++)
						e[i][j] = '|';
				}
				else
				{
					for(j=0;j<4;j++)
						e[i][j] = '|';
					for(;j<14;j++)
						e[i][j] = ' ';
				}
			}

			//Initialization of spc_e[][]
			for(i=0;i<7;i++)
				for(j=0;j<14;j++)
					spc_e[i][j] = ' ';
		}

		void initial_L(char l[][14+1], char spc_l[][14+1])
		{
			//Declaring variables
			int i,j;
			//Initialization of l[][]
			for(i=0;i<7;i++)
			{
				if(i == 6)
				{
					for(j=0;j<14;j++)
						l[i][j] = '|';
				}
				else
				{
					for(j=0;j<4;j++)
						l[i][j] = '|';
					for(;j<14;j++)
						l[i][j] = ' ';
				}
			}

			//Initialization of spc_l[][]
			for(i=0;i<7;i++)
				for(j=0;j<14;j++)
					spc_l[i][j] = ' ';
		}

		void initial_C(char c[][14+1], char spc_c[][14+1])
		{
			//Declaring variables
			int i,j;
			//Initialization of c[][]
			for(i=0;i<7;i++)
			{
				if((i == 0) || (i == 6))
				{
					for(j=0;j<14;j++)
						c[i][j] = '|';
				}
				else
				{
					for(j=0;j<4;j++)
						c[i][j] = '|';
					for(;j<14;j++)
						c[i][j] = ' ';
				}
			}

			//Initialization of spc_c[][]
			for(i=0;i<7;i++)
				for(j=0;j<14;j++)
					spc_c[i][j] = ' ';
		}

		void initial_O1(char o1[][20+1], char spc_o1[][20+1])
		{
			//Declaring variables
			int i=0,j=0;
			//Initialization of o[][]
				//Line : 1
				for(j=0;j<2;j++)
					o1[i][j] = ' ';
				for(;j<5;j++)
					o1[i][j] = '/';
				for(;j<15;j++)
					o1[i][j] = '|';
				for(;j<18;j++)
					o1[i][j] = '\\';
				for(;j<20;j++)
					o1[i][j] = ' ';

				//Line : 2
				i++;
				j=0;
				o1[i][j] = ' ';
				j++;
				for(;j<5;j++)
					o1[i][j] = '/';
				for(;j<15;j++)
					o1[i][j] = '|';
				for(;j<19;j++)
					o1[i][j] = '\\';
				o1[i][j] = ' ';

				//Line : 3, 4 & 5
				i++;
				for(;i<5;i++)
				{
					for(j=0;j<4;j++)
						o1[i][j] = '|';
					for(;j<16;j++)
						o1[i][j] = ' ';
					for(;j<22;j++)
						o1[i][j] = '|';
				}

				//Line : 6
				j=0;
				o1[i][j] = ' ';
				j++;
				for(;j<5;j++)
					o1[i][j] = '\\';
				for(;j<15;j++)
					o1[i][j] = '|';
				for(;j<19;j++)
					o1[i][j] = '/';
				o1[i][j] = ' ';

				//Line : 7
				i++;
				for(j=0;j<2;j++)
					o1[i][j] = ' ';
				for(;j<5;j++)
					o1[i][j] = '\\';
				for(;j<15;j++)
					o1[i][j] = '|';
				for(;j<18;j++)
					o1[i][j] = '/';
				for(;j<20;j++)
					o1[i][j] = ' ';


			//Initialization of spc_o[][]
			for(i=0;i<7;i++)
				for(j=0;j<20;j++)
					spc_o1[i][j] = ' ';
		}

		void initial_M(char m[][22+1], char spc_m[][22+1])
		{
			//Declaring variables
			int i=0,j;
			//Initialization of m[][]
				//Line : 1
				for(j=0;j<4;j++)
					m[i][j] = '|';
				for(;j<8;j++)
					m[i][j] = '\\';
				for(;j<14;j++)
					m[i][j] = ' ';
				for(;j<18;j++)
					m[i][j] = '/';
				for(;j<22;j++)
					m[i][j] = '|';

				//Line : 2
				i++;
				for(j=0;j<4;j++)
					m[i][j] = '|';
				m[i][j] = ' ';
				j++;
				for(;j<9;j++)
					m[i][j] = '\\';
				for(;j<13;j++)
					m[i][j] = ' ';
				for(;j<17;j++)
					m[i][j] = '/';
				m[i][j] = ' ';
				j++;
				for(;j<22;j++)
					m[i][j] = '|';

				//Line : 3
				i++;
				for(j=0;j<4;j++)
					m[i][j] = '|';
				for(;j<6;j++)
					m[i][j] = ' ';
				for(;j<10;j++)
					m[i][j] = '\\';
				for(;j<12;j++)
					m[i][j] = ' ';
				for(;j<16;j++)
					m[i][j] = '/';
				for(;j<18;j++)
					m[i][j] = ' ';
				for(;j<22;j++)
					m[i][j] = '|';

				//Line : 4
				i++;
				for(j=0;j<4;j++)
					m[i][j] = '|';
				for(;j<7;j++)
					m[i][j] = ' ';
				for(;j<11;j++)
					m[i][j] = '\\';
				for(;j<15;j++)
					m[i][j] = '/';
				for(;j<18;j++)
					m[i][j] = ' ';
				for(;j<22;j++)
					m[i][j] = '|';

				//Line : 5
				i++;
				for(j=0;j<4;j++)
					m[i][j] = '|';
				for(;j<8;j++)
					m[i][j] = ' ';
				m[i][j] = '\\';
				j++;
				for(;j<13;j++)
					m[i][j] = '|';
				m[i][j] = '/';
				j++;
				for(;j<18;j++)
					m[i][j] = ' ';
				for(;j<22;j++)
					m[i][j] = '|';

				//Line : 6 & 7
				i++;
				for(;i<7;i++)
				{
					for(j=0;j<4;j++)
						m[i][j] = '|';
					for(;j<18;j++)
						m[i][j] = ' ';
					for(;j<22;j++)
						m[i][j] = '|';
				}
			//Initialization of spc_c[][]
			for(i=0;i<7;i++)
				for(j=0;j<22;j++)
					spc_m[i][j] = ' ';
		}

		void initial_T1(char t1[][24+1], char spc_t1[][24+1])
		{
			//Declaring variables
			int i=0,j=0;
			//Initialization of t1[][]
			for(i=0;i<2;i++)
				for(j=0;j<24;j++)
					t1[i][j] = '|';
			for(;i<10;i++)
			{
					for(j=0;j<9;j++)
						t1[i][j] = ' ';
					for(;j<14;j++)
						t1[i][j] = '|';
					for(;j<24;j++)
						t1[i][j] = ' ';
			}
			//Initialization of spc_t1[][]
			for(i=0;i<10;i++)
				for(j=0;j<24;j++)
					spc_t1[i][j] = ' ';
		}

		void initial_O2(char o2[][21+1], char spc_o2[][21+1])
		{
			//Declaring variables
			int i=0,j=0;
			//Initialization of o[][]
				//Line : 1
				for(j=0;j<2;j++)
					o2[i][j] = ' ';
				for(;j<5;j++)
					o2[i][j] = '/';
				for(;j<16;j++)
					o2[i][j] = '|';
				for(;j<19;j++)
					o2[i][j] = '\\';
				for(;j<21;j++)
					o2[i][j] = ' ';

				//Line : 2
				i++;
				j=0;
				o2[i][j] = ' ';
				j++;
				for(;j<5;j++)
					o2[i][j] = '/';
				for(;j<16;j++)
					o2[i][j] = '|';
				for(;j<20;j++)
					o2[i][j] = '\\';
				o2[i][j] = ' ';

				//Line : 3, 4, 5, 6, 7 & 8
				i++;
				for(;i<8;i++)
				{
					for(j=0;j<4;j++)
						o2[i][j] = '|';
					for(;j<17;j++)
						o2[i][j] = ' ';
					for(;j<22;j++)
						o2[i][j] = '|';
				}

				//Line : 9
				j=0;
				o2[i][j] = ' ';
				j++;
				for(;j<5;j++)
					o2[i][j] = '\\';
				for(;j<16;j++)
					o2[i][j] = '|';
				for(;j<20;j++)
					o2[i][j] = '/';
				o2[i][j] = ' ';

				//Line : 10
				i++;
				for(j=0;j<2;j++)
					o2[i][j] = ' ';
				for(;j<5;j++)
					o2[i][j] = '\\';
				for(;j<16;j++)
					o2[i][j] = '|';
				for(;j<19;j++)
					o2[i][j] = '/';
				for(;j<21;j++)
					o2[i][j] = ' ';


			//Initialization of spc_o[][]
			for(i=0;i<10;i++)
				for(j=0;j<21;j++)
					spc_o2[i][j] = ' ';
		}

		void printWelcomeTo(char w[][22+1],char e[][14+1],char l[][14+1],char c[][14+1],char o1[][20+1],char m[][22+1],char t1[][24+1],char o2[][21+1])
		{
			//Declaring variables
			int i,j;

			for(i=0;i<7;i++)
			{
				printf("\t  ");
				for(j=0;j<22;j++)
					printf("%c",w[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",l[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",c[i][j]);
				printf("   ");
				for(j=0;j<20;j++)
					printf("%c",o1[i][j]);
				printf("   ");
				for(j=0;j<22;j++)
					printf("%c",m[i][j]);
				printf("   ");
				for(j=0;j<14;j++)
					printf("%c",e[i][j]);
				printf("\n");
			}
			printf("\n\n");
			for(i=0;i<10;i++)
			{
				printf("\t\t\t\t\t\t   ");
				for(j=0;j<24;j++)
					printf("%c",t1[i][j]);
				printf("   ");
				for(j=0;j<21;j++)
					printf("%c",o2[i][j]);
				printf("\n");
			}
		}
		/*
		Pointer execution of indexOf()
		while(true)
		{
		found = strchr(str,ch);
		if(found == NULL)
		break;
		off = (int)(found-str)+1;
		ind += (int)(found-str);
		str = (str+off);
		printf("\nIndex is : %d",ind);
		ind++;
		nsleep(500);
		}*/
