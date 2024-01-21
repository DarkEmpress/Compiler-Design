#include <stdio.h>
#include <string.h>
int main(){
    char in[20];
    char states[100]="A";
    char initial='A';
    char current[2];
    current[0]='A';
    scanf("%s",&in);
    printf("Input string: %s",in);
    int l,i;
    l=strlen(in);

    char arr[2]="=>";

    printf("\nInput string length: %d",l);
    for(i=0;i<l;i++){
    	//printf("\n%d",i);
    	if(in[i]=='0' && current[0]=='A'){
    		current[0]='A';
            strcat(states,arr);
            printf("\n %s",states); 
			//strcat(states,current);  
            //printf("\n %s",states);		
		}
		else if(in[i]=='1' && current[0]=='A'){
    		current[0]='B';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current);  	
            //printf("\n %s",states);	
		}
		else if(in[i]=='0' && current[0]=='B'){
    		current[0]='C';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current);  
            //printf("\n %s",states);		
		}
		else if(in[i]=='1' && current[0]=='B'){
    		current[0]='B';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current); 
            //printf("\n %s",states); 		
		}
		else if(in[i]=='0' && current[0]=='C'){
    		current[0]='A';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current); 
            //printf("\n %s",states); 		
		}
		else if(in[i]=='1' && current[0]=='C'){
    		current[0]='D';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current); 
            //printf("\n %s",states); 		
		}
		else if(in[i]=='0' && current[0]=='D'){
    		current[0]='D';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current);  
            //printf("\n %s",states);		
		}
		else if(in[i]=='1' && current[0]=='D'){
    		current[0]='D';
            strcat(states,arr);
            printf("\n %s",states);
			//strcat(states,current);  
            //printf("\n %s",states);		
		}
        
	}
	if(current[0]=='D'){
		printf("\nVALID STRING\nSTATES: %s",states);
	}
	else{
		printf("\nINVALID STRING\nSTATES: %s",states);
	}
return 0;
}