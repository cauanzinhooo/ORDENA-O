INSERTION SORT

O INSERTION SORT COMPARA EM PARES USANDO MESMO EXEMPLO DO BUBBLE PORÉM AO COMPARAR INDICE I COM INDICE II E SEGUIRMOS PARA O PRÓXIMO.
COMPARANDO INDICE II COM INDICE III O ALGORITMO VOLTA E COMPARA SE O INDICE QUE FOI TROCADO É MENOR DO QUE O ANTERIOR.
BÁSICAMENTE O INSERTION COMPARA A LISTA AO TODO E NÃO APENAS EM UM SENTIDO MAS SIM NOS DOIS SENTIDOS.
SEU NÍVEL DE DIFICULDADE COMPARADO AOS OUTROS ALGORITMOS É FÁCIL PORÉM
MAIS DIFICIL QUE O BUBBLE.

C EXEMPLE:
int li[N] = {10,20,30,40,50,60,10000,-1};
main(){
    int no = InsertionSort(li[N]);
}
void InsertionSort( int *li, int tam){
    int i,j,aux;
    for( i=0;i<tam-1;++i){
        if(li[i] > li[i+1]){
            aux=li[i+1];
            li[i+1]=li[i]; li[i]=aux;
            j=i-1;
            while(j>=0){
                if(aux<li[j]){
                    li[j+1]=li[j]; li[j]=aux;
                }else{
                    break;
                }
                j=j-1;
            }
            
        }
    }
}
C++ EXEMPLE:
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, N);
    printArray(arr, N);
    return 0;
}
