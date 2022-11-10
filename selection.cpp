SELECTION SORT
O SELECTION SORT É UM ALGORITMO MAIS COMPLEXO DE SE FAZER COMPARADO AO BUBBLE E AO INSERTION POIS SUA LÓGICA É UM POUCO MAIS COMPLEXA EM RELAÇÃO A CODIGO
BASICAMENTE O SELECTION SELECIONA O PRIMEIRO VETOR POSIÇÃO I VAI RODANDO TODA A LISTA VERIFICANDO TODOS OS NÚMEROS AO ENCONTRAR UM NÚMERO MENOR CONTINUA RODANDO A LISTA
CASO NÃO TENHA NÚMERO MENOR REALIZA A TROCA E ASSIM SEGUE. PEGA A POSIÇÃO II E VAI COMPARANDO COM A LISTA CASO TENHA NUMERO MENOR REALIZA A TROCA DO MESMO E ASSIM SEGUE
ATÉ ORDENAR.

C EXEMPLE:
void select( int vet[], int n){
    int aux,m;
    for(int i=0;i<n-1;++i){
        m=i;
        for(int b=i+1;b<n;++b){
            if(vet[m] > vet[b]){
                m=j;
            }
        }
        if(i!=m){
            aux=vet[i];
            vet[i]=vet[m];
            vet[m]=aux;
        }
    }
}
main(){
    int n=9;
    int vet[n] = {100,200,300,100000,-1,50000,-200};
    select(vet,n);
    for(int i=0;i<n;i++){
        printf("%d",vet[i]);
    }
}
C++ EXEMPLE:
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
