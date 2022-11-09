BUBBLE SORT
COMPARADOS AOS OUTROS ALGORITMOS A SEREM APRESENTADOS EM MINHA OPNIÃO BUBBLE SORT É O MAIS FÁCIL
AQUI GERALMENTE USAMOS ARRAYS OU LISTAS

BASICAMENTE VERIFICAMOS DE PAR EM PAR A POSIÇÃO ATUAL DO NÚMERO E VERIFICAMOS COM A PRÓXIMA POSIÇÃO CASO A POSIÇÃO ATUAL FOR MAIOR DO QUE A PRÓXIMA REALIZAMOS A TROCA.

////////////////////
AQUI TEREMOS UM ALGORITMO QUE PEDE AO ÚSUARIO QUE ENTRE COM OS 9 NÚMEROS E ASSIM PODEMOS ORDENA-LÓS PERCORRENDO O VETOR COM FOR E USANDO WHILE PARA FAZER UM LOOP ATÉ 
QUE A ORDENAÇÃO ESTEJA COMPLETA.
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
