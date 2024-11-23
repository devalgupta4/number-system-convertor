#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char a,x,d,b;
 int num, i=0;
    int arr[1000];
    printf("codes for number system\n");
    printf("\n");
    printf("decimal-> \"d\"\n");
    printf("binary-> \"b\"\n");
     printf("octal-> \"o\"\n");
      printf("hexadecimal-> \"h\"\n");
      printf("\n");
      printf("for conversion(no floating values are allowed) :\n");
      printf("\n");
      printf("convert from(give in code): \n");
      scanf("%c",&a);
      getchar();
      printf("convert to(give in code): \n");
       scanf("%c",&x);

        //decimal to binary conversion

       if((a == 'd') && (x == 'b')){
        printf("give number(number<=10000)");
        scanf("%d",&num);
        if (num > 10000) {
            printf("Number exceeds limit\n");
            
        }
        else{
        while(num > 1){
            arr[i]= num%2;
            num = num/2;
            i++;

        }
        arr[i]=num;
        i++;
        }
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }


       }

       // binary to decimal conversion

       else if((a == 'b') && (x == 'd')){
        char aarr[100];
        printf("enter binary number: (upto 10 digits) \n");
        scanf("%s",aarr);
        int length = strlen(aarr);
        if(length > 10){
            printf("invalid number");
        }else{
        int value = 0;
        for(int k=0;k<length;k++){
            if(aarr[k]=='1'){
                value+=pow(2,length-1-k);
            }
        }
        printf("decimal value is %d\n",value);

       }
       }

       //decimal to octal conversion

       else if((a == 'd') && (x == 'o')){
         printf("give number(number<=10000)");
        scanf("%d",&num);
        if (num > 10000) {
            printf("Number exceeds limit \n");
            
        }
        else{
        while(num > 7){
            arr[i]= num%8;
            num = num/8;
            i++;

        }
        arr[i]=num;
        i++;
        }
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }

 printf("\n");
       }
      
      //octal to decimal conversion

       else if((a == 'o')&&(x == 'd')){
         char aaarr[100];
        printf("enter octal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        if(length1 > 10){
            printf("invalid number");
        }else{
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            
             int dig = aaarr[k1] - '0';
            
            val += (dig * pow(8,length1-1-k1));
            
        }
        printf("decimal value is %lld\n",val);

       }
       }

       //decimal to hexadecimal conversion

 else if((a == 'd') && (x == 'h' )){
    char _arr[100];
    char carr[100];
         printf("give number(number<=10000)");
        scanf("%d",&num);
        if (num > 10000) {
            printf("Number exceeds limit \n");
            
        }
        else{
        while(num > 15){
            carr[i]= num%16;
            num = num/16;
            i++;

        }
        carr[i]=num;
        i++;
        }
        for(int j =i-1;j>=0;j--){
           
          if(carr[j] == 10){
            _arr[i-1-j] ='A';
          }
          else if(carr[j]==11){
            _arr[i-1-j]='B';


          }  
          else if(carr[j]==12){
            _arr[i-1-j]='C';
          
        }
        else if(carr[j]==13){
            _arr[i-1-j]='D';
        }
         else if(carr[j]==14){
            _arr[i-1-j]='E';
        }
         else if(carr[j]==15){
            _arr[i-1-j]='F';
        }
        else{
            _arr[i-1-j]=carr[j] + '0';
        }
        

        }
        printf("%s",_arr);

 printf("\n");
       
 }   
 
 //hexadecimal to decimal conversion
 
   else if((a == 'h')&&(x == 'd')){
         char aaarr[100];
        printf("enter hexa decimal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        if(length1 > 10){
            printf("invalid number");
        }else{
        int _aaarr[100];
        
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            if(aaarr[k1]=='A'){
                _aaarr[k1]=10;
            }
            else if(aaarr[k1]=='B'){
                _aaarr[k1]=11;
            }
             else if(aaarr[k1]=='C'){
                _aaarr[k1]=12;
            }
             else if(aaarr[k1]=='D'){
                _aaarr[k1]=13;
            }
             else if(aaarr[k1]=='E'){
                _aaarr[k1]=14;
            }
             else if(aaarr[k1]=='F'){
                _aaarr[k1]=15;
            }
            else{
                _aaarr[k1] = aaarr[k1] -'0';
            }
            
             int dig = _aaarr[k1];
            
            val += (dig * pow(16,length1-1-k1));
            
        }
        printf("decimal value is %lld\n",val);

       }
   }

       // binary to octal conversion

        else if((a == 'b') && (x == 'o')){
        char aarr[100];
        printf("enter binary number: (upto 10 digits) \n");
        scanf("%s",aarr);
        int length = strlen(aarr);
        if(length > 10){
            printf("invalid number");
        }else{
        int value = 0;
        for(int k=0;k<length;k++){
            if(aarr[k]=='1'){
                value+=pow(2,length-1-k);
            }
        }
        
        
        while(value > 7){
            arr[i]= value%8;
            value = value/8;
            i++;

        }
        arr[i]=value;
        i++;
        
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }

 printf("\n");
       }
        }

       //octal to binary conversion

     else if((a == 'o')&&(x == 'b')){
         char aaarr[100];
        printf("enter octal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        if(length1 > 10){
            printf("invalid number");
        }else{
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            
             int dig = aaarr[k1] - '0';
            
            val += (dig * pow(8,length1-1-k1));
            
        }
        while(val > 1){
            arr[i]= val%2;
            val = val/2;
            i++;

        }
        arr[i]=val;
        i++;
    
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }
        }  
     } 

        // binary to hexadecimal conversion

       else if((a == 'b') && (x == 'h')){
        char aarr[100];
        printf("enter binary number: (upto 10 digits) \n");
        scanf("%s",aarr);
        int length = strlen(aarr);
        if(length > 10){
            printf("invalid number");
        }else{
        int value = 0;
        for(int k=0;k<length;k++){
            if(aarr[k]=='1'){
                value+=pow(2,length-1-k);
            }
        }
        char _arr[100];
    char carr[100];
        
       
            
        
        
        while(value > 15){
            carr[i]= value%16;
            value = value/16;
            i++;

        }
        carr[i]=value;
        i++;
        
        for(int j =i-1;j>=0;j--){
           
          if(carr[j] == 10){
            _arr[i-1-j] ='A';
          }
          else if(carr[j]==11){
            _arr[i-1-j]='B';


          }  
          else if(carr[j]==12){
            _arr[i-1-j]='C';
          
        }
        else if(carr[j]==13){
            _arr[i-1-j]='D';
        }
         else if(carr[j]==14){
            _arr[i-1-j]='E';
        }
         else if(carr[j]==15){
            _arr[i-1-j]='F';
        }
        else{
            _arr[i-1-j]=carr[j] + '0';
        }
        

        }
        printf("%s",_arr);

 printf("\n");
       }
       }

       //hexadecimal to binary conversion

        else if((a == 'h')&&(x == 'b')){
         char aaarr[100];
        printf("enter hexa decimal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        int _aaarr[100];
        if(length1 > 10){
            printf("invalid number");
        }else{
        
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            if(aaarr[k1]=='A'){
                _aaarr[k1]=10;
            }
            else if(aaarr[k1]=='B'){
                _aaarr[k1]=11;
            }
             else if(aaarr[k1]=='C'){
                _aaarr[k1]=12;
            }
             else if(aaarr[k1]=='D'){
                _aaarr[k1]=13;
            }
             else if(aaarr[k1]=='E'){
                _aaarr[k1]=14;
            }
             else if(aaarr[k1]=='F'){
                _aaarr[k1]=15;
            }
            else{
                _aaarr[k1] = aaarr[k1] -'0';
            }
            
             int dig = _aaarr[k1];
            
            val += (dig * pow(16,length1-1-k1));
            
        }
        while(val > 1){
            arr[i]= val%2;
            val = val/2;
            i++;

        }
        arr[i]=val;
        i++;
        
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }
       

       }
        }

       //octal  to hexadecimal conversion

       else if((a == 'o')&&(x == 'h')){
         char aaarr[100];
        printf("enter octal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        if(length1 > 10){
            printf("invalid number");
        }else{
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            
             int dig = aaarr[k1] - '0';
            
            val += (dig * pow(8,length1-1-k1));
            
        }
       
        char _arr[100];
    char carr[100];
        
        
        while(val > 15){
            carr[i]= val%16;
            val = val/16;
            i++;

        }
        carr[i]=val;
        i++;
        
        for(int j =i-1;j>=0;j--){
           
          if(carr[j] == 10){
            _arr[i-1-j] ='A';
          }
          else if(carr[j]==11){
            _arr[i-1-j]='B';


          }  
          else if(carr[j]==12){
            _arr[i-1-j]='C';
          
        }
        else if(carr[j]==13){
            _arr[i-1-j]='D';
        }
         else if(carr[j]==14){
            _arr[i-1-j]='E';
        }
         else if(carr[j]==15){
            _arr[i-1-j]='F';
        }
        else{
            _arr[i-1-j]=carr[j] + '0';
        }
        

        }
        printf("%s",_arr);

 printf("\n");

       }
       }

       //hexadecimal to octal conversion

        else if((a == 'h')&&(x == 'o')){
         char aaarr[100];
        printf("enter hexa decimal number: (upto 10 digits) \n");
        scanf("%s",aaarr);
        int length1 = strlen(aaarr);
        if(length1 > 10){
            printf("invalid number");
        }else{
        int _aaarr[100];
        
        long long int val = 0;
        for(int k1=0;k1<length1;k1++){
            if(aaarr[k1]=='A'){
                _aaarr[k1]=10;
            }
            else if(aaarr[k1]=='B'){
                _aaarr[k1]=11;
            }
             else if(aaarr[k1]=='C'){
                _aaarr[k1]=12;
            }
             else if(aaarr[k1]=='D'){
                _aaarr[k1]=13;
            }
             else if(aaarr[k1]=='E'){
                _aaarr[k1]=14;
            }
             else if(aaarr[k1]=='F'){
                _aaarr[k1]=15;
            }
            else{
                _aaarr[k1] = aaarr[k1] -'0';
            }
            
             int dig = _aaarr[k1];
            
            val += (dig * pow(16,length1-1-k1));
            
        }
        
        while(val > 7){
            arr[i]= val%8;
            val = val/8;
            i++;
            }

        
        arr[i]=val;
        i++ ;
        
        for(int j =i-1;j>=0;j--){
           
            printf("%d",arr[j]);
        }
        

 
        }
        }
       



return 0;
}