#include<stdio.h>
#include<conio.h>

int j=0,y,e,k,l,w=0,p=0,i,m,aa=0,bb,cc,ao,ap,ab=0,ac=0,ad=0,ae=0,af=0,ag=0,ah=0,ai=0,aj=0,ak=0,al=0,am=0,an=0,dd;
	void lol();void xe();void over();
		void pover(){
			int h=0,x,f;
					struct call{
		int bno;
		char bname[30];
		char author[30];
		char scat[20];
		char id[15];
		int j;
	};
	struct call bol[20];
		if(ao==1||ap==1){
	printf("\nBorrowed Book Number : ");
	scanf("%d",&h);

	FILE *fsam;
	fsam=fopen("book.txt","r");
	for(x=0;x<20;x++){
		
		fscanf(fsam,"%d",&bol[x].bno);
		fscanf(fsam,"%s",&bol[x].bname);
		fscanf(fsam,"%s",&bol[x].author);
		fscanf(fsam,"%s",&bol[x].scat);
		fscanf(fsam,"%s",&bol[x].id);
		fscanf(fsam,"%d",&bol[x].j);
		
		if(h==bol[x].bno){
		fclose(fsam);
		
			printf("\nBook No : %d\n",bol[x].bno);
			printf("Book Name : %s\n",bol[x].bname);
			printf("Author : %s\n",bol[x].author);
			printf("Subject Category : %s\n",bol[x].scat);
			printf("Identification Number : %s\n",bol[x].id);
			printf("Rack Number : %d\n\n",bol[x].j);
			break;
					}
		else{
			k=0;
			k=k+1;
		}}
	if(k==20){
		printf("\nBook number can not be found.\n");	
		pover();
		f=0;
		f=f+1;
}
	lol();
	if(m==1&&f!=1){
		printf("\nYou handed over the book.\n");
		xe();
	}

}}
	void lol(){
	struct sky{
		char name[25];
		char date[15];
		char email[30];
		char add[15];
		char no[15];
		int r;
	};
	struct sky std[1000];

	int x,z=0,g=0;
	
	printf("Registration Number : ");
	scanf("%d",&z);
		
	FILE *fgo;
	fgo=fopen("info.txt","a+");
	for(x=0;x<1000;x++){
		
		fscanf(fgo,"%s",&std[x].name);
		fscanf(fgo,"%s",&std[x].date);
		fscanf(fgo,"%s",&std[x].email);
		fscanf(fgo,"%s",&std[x].add);
		fscanf(fgo,"%s",&std[x].no);
		fscanf(fgo,"%d",&std[x].r);
		
		if(z==std[x].r){
			fclose(fgo);
			printf("\nName : %s\n",std[x].name);
			printf("Date Registered : %s\n",std[x].date);
			printf("E-mail : %s\n",std[x].email);
			printf("Address : %s\n",std[x].add);
			printf("Contact Number : %s\n",std[x].no);
			printf("Registration Number : %d\n\n",std[x].r);
			m=0;
			m=m+1;
			break;
		}
		else{
			g=g+1;
		}
		
			}
		
	if(g==1000){
		printf("\nThe registration number can not be found.\n");
		lol();
	}}
void reg();
void up(){
		int h=0,x;
		struct call{
		int bno;
		char bname[30];
		char author[30];
		char scat[20];
		char id[15];
		int j;
	};
	struct call bol[20];
		
	printf("\nBorrowed Book Number : ");
	scanf("%d",&h);

	FILE *fsam;
	fsam=fopen("book.txt","r");
	for(x=0;x<20;x++){
		
		fscanf(fsam,"%d",&bol[x].bno);
		fscanf(fsam,"%s",&bol[x].bname);
		fscanf(fsam,"%s",&bol[x].author);
		fscanf(fsam,"%s",&bol[x].scat);
		fscanf(fsam,"%s",&bol[x].id);
		fscanf(fsam,"%d",&bol[x].j);

		if(h==bol[x].bno){
			fclose(fsam);
			FILE *fball;
			fball=fopen("selected.txt","a+");
			fprintf(fball,"%d\n",h);
			fclose(fball);
			
			printf("\nBook No : %d\n",bol[x].bno);
			printf("Book Name : %s\n",bol[x].bname);
			printf("Author : %s\n",bol[x].author);
			printf("Subject Category : %s\n",bol[x].scat);
			printf("Identification Number : %s\n",bol[x].id);
			printf("Rack Number : %d\n",bol[x].j);
			printf("Keeping Period : 14 Days\n\n");
			e=0;
			e=e+1;
			FILE *fyu;
			fyu=fopen("ex.txt","r+");
			fprintf(fyu,"%d",e);
			fclose(fyu);
			reg();
			
		}
		else{
			k=0;
			k=k+1;
		}
	if(k==20){
		printf("\nBook number can not be found.\n");
		up();
	
	}}
	}

	void pup(){
	printf("\n**********************************BOOK LIST******************************************\n\n");
	printf("1.Fiona\n2.Elders'Story\n3.Truth Finding\n4.A/L Biology\n5.A/L Physics\n6.A/L Chemistry\n7.Politicle Science\n8.Arts\n9.Discrete Mathematics\n10.How to C\n11.Information Technology\n12.Abnormal Psychology\n13.Social Media\n14.Green Technology\n15.Sarasavi\n16.Kiduru Dupatha\n17.Kalawa\n18.Sathyaya\n19.Emerging Technology\n20.Medicine\n");
	
	printf("\nSelect a Book Number : ");
	scanf("%d",&y);
}
void xe(){
	printf("Thank You!\n");
}
void fines();
void over(){
		FILE *fyu;
	fyu=fopen("ex.txt","r+");
	e=0;
	fprintf(fyu,"%d",e);
	fclose(fyu);
	l=0;
	l=l+1;
		FILE *fcute;
		aa=1;
	fcute=fopen("aaa.txt","r+");
	fprintf(fcute,"%d\n",aa);
	fclose(fcute);
	
	fcute=fopen("aaa.txt","r+");
	fscanf(fcute,"%d\n",&aa);
	fclose(fcute);

	if(aa!=1){
		printf("\nYou have no borrowed books.\n");
	}

	else if(ap==1||ao==1){
	w=0+0;
	FILE *ftui;
	ftui=fopen("cake.txt","r+");
	fprintf(ftui,"%d",w);
	fclose(ftui);
	aa=0;
	fcute=fopen("aaa.txt","r+");
	fprintf(fcute,"%d\n",aa);
	fclose(fcute);
	pover();
}

	 else if(ab==1||ac==1||ad==1||ae==1||af==1||ag==1||ah==1||ai==1||aj==1||ak==1||al==1||am==1||an==1){
	printf("\nYou can not hand over the book before 14 days.\n");
	e=1;
	FILE *fyu;
	fyu=fopen("ex.txt","r+");
	fprintf(fyu,"%d",e);
	fclose(fyu);
	l=0;
	fines();
}
	
}
void menu();
void fines(){
	
	aa=0;
	FILE *fcute;
	fcute=fopen("aaa.txt","r+");
	fprintf(fcute,"%d\n",aa);
	fclose(fcute);
	FILE *fyu;
	fyu=fopen("ex.txt","r+");
	fscanf(fyu,"%d",&e);
	fclose(fyu);
	FILE *ftui;
	ftui=fopen("cake.txt","r+");
	fscanf(ftui,"%d",&w);
	fclose(ftui);
	if(w>105){
		w=0;
	}
	
	while(e==1&&l!=1){
		w=w+5;
		p=w-70;
		break;
	}
	
	ftui=fopen("cake.txt","w+");
	fprintf(ftui,"%d",w);
	fclose(ftui);
	if(e==1&&l!=1){
		
	if(p==-65){
		printf("\nYou have 13 more days to hand over the book.\n");
		ab=0;
		ab=ab+1;
		menu();
	}
	else if(p==-60){
		printf("\nYou have 12 more days to hand over the book.\n");
		ac=0;
		ac=ac+1;
		menu();
	}
	else if(p==-55){
		printf("\nYou have 11 more days to hand over the book.\n");
		ad=0;
		ad=ad+1;
		menu();
	}
	else if(p==-50){
		printf("\nYou have 10 more days to hand over the book.\n");
		ae=0;
		ae=ae+1;
		menu();
	}
	else if(p==-45){
		printf("\nYou have 9 more days to hand over the book.\n");
		af=0;
		af=af+1;
		menu();
	}
	else if(p==-40){
		printf("\nYou have 8 more days to hand over the book.\n");
		ag=0;
		ag=ag+1;
		menu();
	}
	else if(p==-35){
		printf("\nYou have 7 more days to hand over the book.\n");
		ah=0;
		ah=ah+1;
		menu();
	}
	else if(p==-30){
		printf("\nYou have 6 more days to hand over the book.\n");
		ai=0;
		ai=ai+1;
		menu();
	}
	else if(p==-25){
		printf("\nYou have 5 more days to hand over the book.\n");
		aj=0;
		aj=aj+1;
		menu();
	}
	else if(p==-20){
		printf("\nYou have 4 more days to hand over the book.\n");
		ak=0;
		ak=ak+1;
		menu();
	}
	else if(p==-15){
		printf("\nYou have 3 more days to hand over the book.\n");
		al=0;
		al=al+1;
		menu();
	}
	else if(p==-10){
		printf("\nYou have 2 more days to hand over the book.\n");
		am=0;
		am=am+1;
		menu();
	}
	else if(p==-5){
		printf("\nYou have 1 more days to hand over the book.\n");
		an=0;
		an=an+1;
		menu();
	}
	else if(w==70&&p==0){
		printf("\nYou have to hand over the book today.\n");
		ao=0;
		ao=ao+1;
		menu();
	}
	else{
		if(p>0&&p<=35){
			printf("\nYou have %drupees of fines to pay.\n",p);
			ao=0;
			ap=ap+1;
			menu();
		}
		else{
			printf("\nYou were removed from Library Information System.\nYou can not use Library Information System untill you hand over the book.\n");
			xe();
		
	}}}
		else if(e!=1&&l!=1||e!=1&&l==1||e==1&&l==1){
		printf("\nYou have no fines.\n");
		dd=0;
		dd=dd+1;
		menu();
}
	
}
void reg();
void rinfo(){
	aa=1;
	FILE *fcute;
	fcute=fopen("aaa.txt","r+");
	fprintf(fcute,"%d\n",aa);
	fclose(fcute);
		if(aa==1&&cc!=1){
		printf("\nYou have to first select a book.\n");
		menu();
	}

	else{
	lol();
	up();
	
}
	aa=0;
	fcute=fopen("aaa.txt","r+");
	fprintf(fcute,"%d\n",aa);
	fclose(fcute);
}
void reg();
void bres(){
	bb=0;
	bb=bb+1;
	int z,m=0,e,f[20],n[20],r=0,k=0,l=0,h=0;
	char d,b;
	struct cat{
		int bno;
		char bname[30];
		char author[30];
		char scat[20];
		char id[15];
		int rack;
	};
	struct cat bat[20];

	pup();
	FILE *fsam;
	fsam=fopen("book.txt","r");
	
	for(z=0;z<20;z++){
		FILE *fball;
		FILE *fshop;
		fscanf(fsam,"%d",&bat[z].bno);
		fscanf(fsam,"%s",&bat[z].bname);
		fscanf(fsam,"%s",&bat[z].author);
		fscanf(fsam,"%s",&bat[z].scat);
		fscanf(fsam,"%s",&bat[z].id);
		fscanf(fsam,"%d",&bat[z].rack);
		
		if(y==bat[z].bno){
			fclose(fsam);
			
			fshop=fopen("reserve.txt","a+");
			for(e=0;e<20;e++){
				f[e]=0;
				fscanf(fshop,"%d",&f[e]);
				if(f[e]==y){
					printf("\nThe Book is Reserved by someone.\n");
					bres();
				}
				else{
					m=m+1;
				}
				
			}
			fclose(fshop);
			if(m==20){
				
				fball=fopen("selected.txt","a+");
				for(e=0;e<20;e++){
					n[e]=0;
					fscanf(fball,"%d",&n[e]);
					if(n[e]==y){
						printf("\nThe Book is Selected by someone.\n");
						bres();
					}
					else{
						r=r+1;
					}
				}
				fclose(fball);
			}
			if(r==20){
				
				printf("\nBook Number : %d\n",bat[z].bno);
				printf("Name of the Book : %s\n",bat[z].bname);
				printf("Author : %s\n",bat[z].author);
				printf("Subject Category : %s\n",bat[z].scat);
				printf("Identification Number : %s\n",bat[z].id);
				printf("Rack Number : %d\n",bat[z].rack);
				printf("\nDo you want to reserve the book ? (Y/N) : ");
				scanf(" %c",&d);
				if(d=='Y'){
					lol();
					h=bat[z].bno;

					printf("\nYou reserved the book.\n");
					
					k=k+1;
					break;
				}
				else{
					printf("\nDo you want to select another book ? (Y/N) : ");
					scanf(" %c",&b);
					if(b=='Y'){
						bres();
					}
					else{
						menu();
					}
				}
			}}
		else{
			l=l+1;	
		}
	}
	if(l==20){
		printf("\nThe book is not available.\n");
		bres();
	}
	if(k==1){
		FILE *fshop;
		fshop=fopen("reserve.txt","a+");
		fprintf(fshop,"%d\n",h);
		fclose(fshop);
		xe();
	}
	
		
	
}
void reg();
void sbook(){
	cc=0;
	cc=cc+1;
	struct cat{
		int bno;
		char bname[30];
		char author[30];
		char scat[20];
		char id[15];
		int rack;
	};
	struct cat bat[20];
	int x,c=0,e,f[20],g=0,h[20],o=0;

	pup();
	FILE *fsam;
	fsam=fopen("book.txt","r");
	FILE *fshop;
	FILE *fball;
	
	for(x=0;x<20;x++){
		fscanf(fsam,"%d",&bat[x].bno);
		fscanf(fsam,"%s",&bat[x].bname);
		fscanf(fsam,"%s",&bat[x].author);
		fscanf(fsam,"%s",&bat[x].scat);
		fscanf(fsam,"%s",&bat[x].id);
		fscanf(fsam,"%d",&bat[x].rack);
		
		if(y==bat[x].bno){
			fclose(fsam);
			fshop=fopen("reserve.txt","a+");
			for(e=0;e<20;e++){
				f[e]=0;
				fscanf(fshop,"%d",&f[e]);
				if(f[e]==bat[x].bno){
					printf("\nThe book is reserved by someone.\n");
					sbook();
				}
				else{
					g=g+1;
				}
			}
			fclose(fshop);
			if(g==20){
				fball=fopen("selected.txt","a+");
				for(e=0;e<20;e++){
					h[e]=0;
					fscanf(fball,"%d",&h[e]);
					if(h[e]==bat[x].bno){
						printf("\nThe book is selected by someone.\n");
						sbook();
					}
					else{
						o=o+1;
					}
			}
			fclose(fball);	
			}
			if(o==20){
			printf("\n\nName of the Book : %s\n",bat[x].bname);
			printf("Author : %s\n",bat[x].author);
			printf("Subject Category : %s\n",bat[x].scat);
			printf("Identification Number : %s\n",bat[x].id);
			printf("Rack Number : %d\n",bat[x].rack);
			reg();
		}}
		else{
			c=c+1;
		}
	}
	
	if(c==20){
		printf("\nThe book is not available.\n");
		sbook();
	}
}

void menu();
void reg(){
	
	int t,s;
	struct sky{
		char name[25];
		char date[15];
		char email[30];
		char add[15];
		char no[15];
		int y;
	};
	struct sky std[1000];
	struct lol{
		char n[25];
		char d[15];
		char e[30];
		char ad[15];
		char cn[15];
		int q;
	};
	struct lol pop[1000];
	
	
	for(t=0;t<1000;t++){
		
		menu();
		
		if(i==1){
		FILE *fgo;
		printf("Name : ");
		scanf("%s",&std[t].name);
		printf("Date : ");
		scanf("%s",&std[t].date);
		printf("E-mail : ");
		scanf("%s",&std[t].email);
		printf("Address : ");
		scanf("%s",&std[t].add);
		printf("Contact Number : ");
		scanf("%s",&std[t].no);
		printf("\n=========================================================\n");
		printf("You are now registered.\n");
		fgo=fopen("info.txt","a+");
		for(s=0;s<1000;s++){
				fscanf(fgo,"%s",&pop[s].n);
				fscanf(fgo,"%s",&pop[s].d);
				fscanf(fgo,"%s",&pop[s].e);
				fscanf(fgo,"%s",&pop[s].ad);
				fscanf(fgo,"%s",&pop[s].cn);
				fscanf(fgo,"%d",&pop[s].q);
				
				if(pop[s].q==1000+j){
					j=j+1;
				}
				else{
		printf("Registration Number : %d\n",1000+j);
		break;
	}}
		printf("\n=========================================================\n");
		
		
		fgo=fopen("info.txt","a+");
		fprintf(fgo,"%s\n",std[t].name);
		fprintf(fgo,"%s\n",std[t].date);
		fprintf(fgo,"%s\n",std[t].email);
		fprintf(fgo,"%s\n",std[t].add);
		fprintf(fgo,"%s\n",std[t].no);
		fprintf(fgo,"%d\n",1000+j);
		fclose(fgo);
		
		}
		else{
			break;
		}
		
		
	}
}

void menu(){
	
	printf("\n****************************MENU****************************\n\n");
	printf("1.Online Registration\n2.Selecting Book\n3.Book Reservation\n4.Reader Information\n5.Collecting Fines\n6.Handover the Book\n7.Exit\n");
	printf("\n\n=====================================================\n\n");
	printf("Select a Number : ");
	scanf("%d",&i);
	printf("\n========================================================\n");
	
	if(i==1){
		j=j+1;
	}
	
	else if(i==2){
		sbook();
	}
	else if(i==3){
		bres();
	}
	else if(i==4){
		rinfo();
	}
	else if(i==5){
		fines();
	}
	else if(i==6){
		over();
	}
	else{
		xe();
	}
}
int main(){
	
	reg();

	getch();
	return 0;
}
