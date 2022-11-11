C EXEMPLE:
int main(){
    int a,b,end;
    int li[10];
    for( a = 0; a <= 9; a++){
        printf("Ente com os dados: ");
        scanf("%d",&li[a]);
    }
    end = 1;
    while(end){
        end=0;
        for(a=0;a<=8;++a){
            if(li[a] > li[a+1]){
                b=li[a];
                li[a]=li[a+1];
                li[a+1]=b;
                end=1;

            }
        }
    }
    for(a=0;a<9;a++){
        printf("Item:%d %d",a+1,li[a]);
    }
}

C++ EXEMPLE

int main ()
{
   int i, j,temp,pass=0;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
return 0;
}
