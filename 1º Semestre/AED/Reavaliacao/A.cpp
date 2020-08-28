/*
  Programa para testes de leitos por regiao
  Matricula: 699742
  Nome     : Matheus Rangel de Figueiredo
*/

#include <iostream>

#include <string>

#include <fstream>


using namespace std;

class Leito {
private:
    int tipo;
    int ocupados;
    int livres;
public:
    Leito() {}
    int getTipo() {
        return (0);
    }
    void setTipo(int x) {}
    int getOcupados() {
        return (0);
    }
    void setOcupados(int x) {}
    int getLivres() {
        return (0);
    }
    void setLivres(int x) {}
    string toString() {
        return ("");
    }
};

class Teste : public Leito {
public: static void teste() {
    int opcao = 0;

    do {
        cout << "\nTeste" << endl;
        cout << "\nOpcao: ";
        cin >> opcao;
        switch (opcao) {
        case 0:
            ;
            break;
        case 1:
            cout << "\nResposta_1: " << endl;
            break;
        case 2:
            cout << "\nResposta_2: " << endl;
            break;
        case 3:
            cout << "\nResposta_3: " << endl;
            break;
        case 4:
            cout << "\nResposta_4: " << endl;
            break;
        default:
            ;
            break;
        }

    } while (opcao != 0);
    cout << endl << endl;
}
};

int main(void) {

    fstream mgrr;
    fstream especifico;
    string arquivos;
    string converter;
    int x = 0;
    int contador = 0;
    int totalLeitosOcupados = 0;
    int totalLeitosLivres = 0;
    int totalTipo1Disponivel = 0;
    int totalTipo1Ocupado = 0;
    string menorRegiao;
    int qtdMenorRegiao = 0;

    //VARIAVEIS ESPECIFICAS POR ARQUIVO


    int totalLeitosOcupadosTipo3;
    int totalLeitosLivresTipo3;

    int tipoLeito;

    fstream resposta;
    resposta.open("resposta.txt");

    mgrr.open("MG_RR.txt");


    if (!mgrr.is_open()) {
        cout << "Arquivo nao aberto" << "\n";
        return(EXIT_FAILURE);
    }

    while (getline(mgrr, arquivos)) {
        especifico.open(arquivos+".txt");
        if (!especifico.is_open()) {
            cout << "Arquivo Especifico nao aberto" << "\n";
            return(EXIT_FAILURE);
        }

        while (getline(especifico, converter)) {
            x = stoi(converter);
            int index = contador % 3;
            if (index == 0) {
                tipoLeito = x;
                totalLeitosOcupadosTipo3 = 0;
                totalLeitosLivresTipo3 = 0;
            }

            if (index == 1) {
                totalLeitosOcupados += x;
                if (tipoLeito == 1) {
                    totalTipo1Ocupado += x;
                }

                if (tipoLeito == 3) {
                    totalLeitosOcupadosTipo3 += x;
                }
            }

            if (index == 2) {
                totalLeitosLivres += x;
                if (tipoLeito == 1) {
                    totalTipo1Disponivel += x;
                }
                if (tipoLeito == 3) {
                    totalLeitosLivresTipo3 += x;
                }
            }
            contador++;
        }
        //Terminou de ler o arquivo especifico agora vai ver a quantidade de leitos por arquivo(ou regiao)
        //Resposta2
        resposta << "Regiao : " << arquivos;
        resposta << "Tipo Livres: " << totalLeitosLivres;


        //Saida Tela
        cout << "Regiao : " << arquivos << "\n";
        cout << "Tipo Livres: " << totalLeitosLivres << "\n";


        // APOS ler o arquivo inteiro verifica se se o estado possui a menor quantidade de leitostipo3
        int somaTipo3 = totalLeitosOcupadosTipo3 + totalLeitosLivresTipo3;
        if (somaTipo3 < qtdMenorRegiao) {
            qtdMenorRegiao = somaTipo3;
            menorRegiao = arquivos;
        }
        //Continua lendo os arquivos até nao ter mais arquivos do MGRR

    }
    //Resposta 1
    resposta << totalLeitosOcupados;
    cout<< "Total de Leitos Ocupados : " << totalLeitosOcupados << "\n";
    //Resposta3
    resposta << "Pior Regiao : " << menorRegiao << "\n";
    cout << "Pior Regiao" << menorRegiao << "\n";
    //Resposta4
    resposta << (totalTipo1Disponivel + totalTipo1Ocupado) / (totalLeitosLivres + totalLeitosOcupados);
    cout << (totalTipo1Disponivel + totalTipo1Ocupado) / (totalLeitosLivres + totalLeitosOcupados) << "\n";

    //Fechando arquivo Respota
    resposta.close();

    Teste::teste();


    return (EXIT_SUCCESS);
}

/*
    Testes e anotacoes:

*/
