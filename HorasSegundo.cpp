/*>Discente: Andreza Vilar de Farias
>Matr�cula: 120210357
>Per�odo: 2020.2
>Curso: Engenharia El�trica
>Disciplina: T�cnicas de Programa��o
>Turma: 01
>Professor: Marcus Salerno
>Unidade Introdu��o a C++ : Lab 4*/


#include <iostream>
#include <iomanip>

using namespace std;

int converte_tempo(int, int, int);

int main()
{
    int hora, min, seg, total_seg;

    cout << "Digite um horario no formato HH MM SS -> ";
    cin  >> hora >> min >> seg;

    total_seg = converte_tempo(hora, min, seg);

    cout << total_seg << endl;
}

int converte_tempo(int hora, int minuto, int segundo)
{
    int tempo = hora * 3600;
    tempo += minuto * 60;
    tempo += segundo;

    return tempo;
}
