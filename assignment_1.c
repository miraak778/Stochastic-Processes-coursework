#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int step_func(int x_0, double p){
	double f = (double)rand() / (double)RAND_MAX;
	int step = 0,x_1 = x_0;
	if (f<=p){
		step = -1;
	}
	else{
		step = 1;
	}
	x_1 = x_1 + step;
	
	return x_1;
}


int file_saver(double p,  int n, FILE *fp){
	int x_init = 0, x_next = 0;
	
	for (int j = 0 ; j < 1000; j++){
		x_init = 0;
		for (int i = 1; i<= n ; i++){
		x_next = step_func(x_init,p);
		if (fp != NULL){
			fprintf(fp, "%d\t%d\n",i,x_next);
		}
		
		else{
			printf("file error!");
		}
		x_init = x_next;
		}
		if (fp != NULL){
				fprintf(fp, "\n");
		}
			
		else{
				printf("file error!");
		}
	}
	
	return 0;
}

int file_hist(int n, double p, FILE *fp){
	int s = 100000;
	int x_init = 0, x_next = 0, final_pos[s];
	
	for (int i = 0; i<s ; i++){
		x_init = 0;
		for (int j = 1; j< n; j++){
			x_next = step_func(x_init, p);
			x_init = x_next;
		}
		final_pos[i] = x_next;
	}
	
	//double freq[2*n];
	int count = 0 , total_freq = 0;
	for (int i = 0; i <= n*2; i++){
		count = 0;
		for (int j = 0; j < s; j++){
			if (final_pos[j] == (i-n)){
				count = count + 1;
			}
				
		}
		fprintf(fp, "%d\t%f\n",i-n,(double)count/(double)s);
	}
	return 0;
}

int main(){
	srand(time(NULL));
	double p = 0.5;
	int n = 10, x_init = 0,x_next = 0, temp = 0;
	
	// data for n = 10
	FILE *fptr;
	fptr = fopen("data_10.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for n = 100
	n = 100;
	fptr = fopen("data_100.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for  n = 1000
	n = 1000;
	fptr = fopen("data_1000.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	//
	//For p = 0.7
	p = 0.7;
	// data for n = 10
	n = 10;
	fptr = fopen("data_10_7.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for n = 100
	n = 100;
	fptr = fopen("data_100_7.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for  n = 1000
	n = 1000;
	fptr = fopen("data_1000_7.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	//
	//For p = 0.4
	p = 0.4;
	// data for n = 10
	n = 10;
	fptr = fopen("data_10_4.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for n = 100
	n = 100;
	fptr = fopen("data_100_4.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	// data for  n = 1000
	n = 1000;
	fptr = fopen("data_1000_4.txt","w");
	temp = file_saver(p,n,fptr);
	fclose(fptr);
	
	
	
	
	// for the histogram 
	
	// for p = 0.5
	p = 0.5;
	
	// for n =10
	n = 10;
	fptr = fopen("data_hist_10_5.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =100
	n = 100;
	fptr = fopen("data_hist_100_5.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =1000
	n = 1000;
	fptr = fopen("data_hist_1000_5.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for p = 0.7
	p = 0.7;
	
	// for n =10
	n = 10;
	fptr = fopen("data_hist_10_7.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =100
	n = 100;
	fptr = fopen("data_hist_100_7.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =1000
	n = 1000;
	fptr = fopen("data_hist_1000_7.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	
	
	// for p = 0.4
	p = 0.4;
	
	// for n =10
	n = 10;
	fptr = fopen("data_hist_10_4.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =100
	n = 100;
	fptr = fopen("data_hist_100_4.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	// for n =1000
	n = 1000;
	fptr = fopen("data_hist_1000_4.txt","w");
	temp = file_hist(n, p, fptr);
	fclose(fptr);
	
	return 0;
}