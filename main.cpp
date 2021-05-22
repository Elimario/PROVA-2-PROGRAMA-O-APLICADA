#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "portugues");
    int NumElementos;
    //Criando um ponteiro * e chamando o ponteiro de maximo e minimo
    int *Maximo, *Minimo;
    // criando um ventor de 15 elementos 
    int  Vetor [15];

 
     cout << " Digite o número de elementos desejados: ";
     cin >> NumElementos;
     //Se o usuário digitar o vetor, logo i precisa ser menor < que NumElementos.
      
     for (int i = 0; i < NumElementos; i++ )
     {
          //Recebi o vetor a entrada de dados 
          cout << "digite o elemento" << (i+1) << ":";
          cin >> Vetor [i];
          
     }
     //Depois de receber todo o vetor vai ao processamento, deve varrer novamente este vetor. E efetuar, achando o valor de maximo e minimo.

     //O ponteiro vai receber o vetor: Atribuindo ao ponteiro Maximo e Minimo o endereço & de memoria, do elemento do primeiro vetor.
     Maximo = &Vetor[0];
     Minimo = &Vetor[0];
     //Tanto maximo quanto minimo são o primeiro elemento do vetor.
     //Varrendo o vetor e analisando maximo e minimo no processamento.
     for (int i = 0; i < NumElementos; i++)
     {
          if (&Vetor[i] > Maximo)
              Maximo = &Vetor[i];
          else if (&Vetor[i] < Minimo)
              Minimo = &Vetor[i];

   }
     
     // saida: Imprimindo no console. Por exemplo, 6 elementos: elemento1 89, -45, 40, 59, 95, 99     maior valor 99 endereço que esse valor se encontra do elemento do ponteiro: 0x7ffe0e6065b4 , menor valor -45 endereço que esse valor se encontra do elemento do ponteiro: 0x7ffe0e6065a0 
     cout << "\n O maior valor digitado foi: " << Maximo << "\n";
     cout << "\n O menor valor digitado foi: " << Minimo << "\n";

     
     return 0;

}

